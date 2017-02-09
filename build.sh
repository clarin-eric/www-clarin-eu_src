#!/bin/sh
BASE_STYLE_REPOSITORY="https://github.com/twagoo/base_style"
BASE_STYLE_VERSION="0.1.3-dev3"

set -e

#gcp and grm can be installed on MacOS via brew. Run "brew install coreutils" to do so.
CP=`which gcp||which cp` #if gcp available (on Mac), use it instead of BSD cp
RM=`which grm||which rm`  #if grm available (on Mac), use it instead of BSD rm

# TODO
# ~/.npmrc
npm set progress='false'
npm --silent install --depth '0' --global 'less' 'less-plugin-clean-css'
curl --fail --location --show-error --silent --tlsv1 \
    'https://github.com/drupalprojects/bootstrap/archive/7.x-3.10.tar.gz' | \
        tar -x -z -p -f -
## Use the Less-based starter kit.
${CP} -apr -- 'bootstrap-7.x-3.6/starterkits/less' ~/'CLARIN_Horizon/'
## Customize graphics.
(cd 'sites/all/themes/CLARIN_Horizon/'
${CP} -fr -- 'CLARIN_Horizon.info' 'favicon.ico' 'logo.png' 'template.php' 'fonts' ~/'CLARIN_Horizon/')
cd -- ~/'CLARIN_Horizon/'
${RM} -fr -- 'less.starterkit' 'bootstrap/'

## Retrieve CLARIN bootstrap style
(mkdir 'bootstrap'
cd -- 'bootstrap'
curl --fail --location --show-error --silent --tlsv1 \
	"${BASE_STYLE_REPOSITORY}/releases/download/${BASE_STYLE_VERSION}/base-style-${BASE_STYLE_VERSION}-less-with-bootstrap.jar" | bsdtar -xf -)

lessc 'less/style.less' --clean-css='--s0' > 'css/style.css'
tar -c -p -z -f ~/CLARIN_Horizon.tgz .
