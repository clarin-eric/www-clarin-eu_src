#!/bin/sh
DRUPAL_BOOTSTRAP_VERSION="7.x-3.12"
BASE_STYLE_REPOSITORY="https://github.com/clarin-eric/base_style"
BASE_STYLE_VERSION="0.2.0"

BUILD_DIRECTORY=~/'CLARIN_Horizon/'
BUILD_PACKAGE=~/'CLARIN_Horizon.tgz'

set -e

#gcp and grm can be installed on MacOS via brew. Run "brew install coreutils" to do so.
CP=`which gcp||which cp` #if gcp available (on Mac), use it instead of BSD cp
RM=`which grm||which rm`  #if grm available (on Mac), use it instead of BSD rm

# TODO
# ~/.npmrc
echo 'Installing LESS compiler...'
npm set progress='false'
npm --silent install --depth '0' --global 'less' 'less-plugin-clean-css'
curl --fail --location --show-error --silent --tlsv1 \
    "https://github.com/drupalprojects/bootstrap/archive/${DRUPAL_BOOTSTRAP_VERSION}.tar.gz" | \
        tar -x -z -p -f -

echo 'Preparing subtheme...'
## Use the Less-based starter kit.
${CP} -apr -- "bootstrap-${DRUPAL_BOOTSTRAP_VERSION}/starterkits/less" ${BUILD_DIRECTORY}

echo 'Customising...'
## Apply static overlay.
rsync -r 'sites/all/themes/CLARIN_Horizon/' ${BUILD_DIRECTORY}

cd -- ${BUILD_DIRECTORY}

## Clean up
${RM} -fr -- 'less.starterkit' 'bootstrap/'

## Retrieve CLARIN bootstrap style
(mkdir 'bootstrap'
cd -- 'bootstrap'
curl --fail --location --show-error --silent --tlsv1 \
	"${BASE_STYLE_REPOSITORY}/releases/download/${BASE_STYLE_VERSION}/base-style-${BASE_STYLE_VERSION}-less-with-bootstrap.jar" | bsdtar -xf -)
## Copy CLARIN bootstrap wrapper and additions
${CP} -fr -- 'bootstrap/less/clarin-bootstrap.less' 'bootstrap/less/clarin-additions.less' 'less'
${CP} -fr -- 'bootstrap/fonts/' 'fonts'

echo 'Compiling LESS...'
## Compile style and add to target
lessc 'less/style.less' --clean-css='--s0' > 'css/style.css'

echo 'Packaging...'
## Make distribution
tar -c -p -z -f ${BUILD_PACKAGE} .

echo 'Done!

Result written to' `realpath ${BUILD_PACKAGE}`
