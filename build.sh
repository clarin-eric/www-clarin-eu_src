#!/bin/sh
DRUPAL_BOOTSTRAP_VERSION="7.x-3.10"
BASE_STYLE_REPOSITORY="https://github.com/twagoo/base_style"
BASE_STYLE_VERSION="0.1.3-dev4"

set -e

#gcp and grm can be installed on MacOS via brew. Run "brew install coreutils" to do so.
CP=`which gcp||which cp` #if gcp available (on Mac), use it instead of BSD cp
RM=`which grm||which rm`  #if grm available (on Mac), use it instead of BSD rm

# TODO
# ~/.npmrc
npm set progress='false'
npm --silent install --depth '0' --global 'less' 'less-plugin-clean-css'
curl --fail --location --show-error --silent --tlsv1 \
    "https://github.com/drupalprojects/bootstrap/archive/${DRUPAL_BOOTSTRAP_VERSION}.tar.gz" | \
        tar -x -z -p -f -
## Use the Less-based starter kit.
${CP} -apr -- "bootstrap-${DRUPAL_BOOTSTRAP_VERSION}/starterkits/less" ~/'CLARIN_Horizon/'
## Customize graphics.
(cd 'sites/all/themes/CLARIN_Horizon/'
${CP} -fr -- 'CLARIN_Horizon.info' 'favicon.ico' 'logo.png' 'template.php' ~/'CLARIN_Horizon/'
## Customize style
${CP} -fr -- 'less/style.less' ~/'CLARIN_Horizon/less')
cd -- ~/'CLARIN_Horizon/'
${RM} -fr -- 'less.starterkit' 'bootstrap/'

## Retrieve CLARIN bootstrap style
(mkdir 'bootstrap'
cd -- 'bootstrap'
curl --fail --location --show-error --silent --tlsv1 \
	"${BASE_STYLE_REPOSITORY}/releases/download/${BASE_STYLE_VERSION}/base-style-${BASE_STYLE_VERSION}-less-with-bootstrap.jar" | bsdtar -xf -)
## Copy CLARIN bootstrap wrapper and additions
${CP} -fr -- 'bootstrap/less/clarin-bootstrap.less' 'bootstrap/less/clarin-additions.less' 'less'
${CP} -fr -- 'bootstrap/fonts/' 'fonts'

lessc 'less/style.less' --clean-css='--s0' > 'css/style.css'
tar -c -p -z -f ~/CLARIN_Horizon.tgz .
