#!/bin/sh

set -e

#gcp and grm can be installed on MacOS via brew. Run "brew install coreutils" to do so.
CP=`which gcp||which cp` #if gcp available (on Mac), use it instead of BSD cp
RM=`which grm||which rm`  #if grm available (on Mac), use it instead of BSD rm

# TODO
# ~/.npmrc
npm set progress='false'
npm --silent install --depth '0' --global 'less' 'less-plugin-clean-css'
curl --fail --location --show-error --silent --tlsv1 \
    'https://github.com/drupalprojects/bootstrap/archive/7.x-3.6.tar.gz' | \
        tar -x -z -p -f -
## Use the Less-based starter kit.
${CP} -apr -- 'bootstrap-7.x-3.6/starterkits/less' ~/'CLARIN_Horizon/'
## Customize graphics.
(cd 'sites/all/themes/CLARIN_Horizon/'
${CP} -fr -- 'CLARIN_Horizon.info' 'favicon.ico' 'logo.png' 'template.php' 'fonts' ~/'CLARIN_Horizon/')
cd -- ~/'CLARIN_Horizon/'
${RM} -fr -- 'less.starterkit' 'bootstrap/'
# TODO: Do not clone but download archive. This has not worked well in the past.
# Reattempt.
git clone 'https://github.com/twbs/bootstrap.git'
(cd -- 'bootstrap/'
git fetch --tags
git checkout 'v3.3.6'
${RM} -fr -- '.git/')
## Apply CLARIN base style.
curl --fail --location --show-error --silent --tlsv1 \
    'https://github.com/clarin-eric/base_style/releases/download/0.1.1/variables.less' > 'less/variable-overrides.less'
lessc 'less/style.less' --clean-css='--s0' > 'css/style.css'
tar -c -p -z -f ~/CLARIN_Horizon.tgz .
