#!/bin/sh

set -e
# TODO
# ~/.npmrc
npm set progress='false'
npm --silent install --depth '0' --global 'less' 'less-plugin-clean-css'
curl --fail --location --show-error --silent --tlsv1 \
    'https://github.com/drupalprojects/bootstrap/archive/7.x-3.6.tar.gz' | \
        tar -x -z -p -f -
## Use the Less-based starter kit.
cp -apr -- 'bootstrap-7.x-3.5/starterkits/less' ~/'CLARIN_Horizon/'
## Edit subtheme properties.
cd -- ~/'CLARIN_Horizon/'
rm -- 'less.starterkit'
## Customize graphics.
(cd 'sites/all/themes/CLARIN_Horizon/'
mv -f -- 'CLARIN_Horizon.info' 'favicon.ico' 'logo.png' ~/'CLARIN_Horizon/')
rm -rf -- 'bootstrap/'
git clone 'git@github.com:twbs/bootstrap.git'
(cd -- ~/'bootstrap'
git fetch --tags
git checkout 'v3.3.6')
## Apply CLARIN base style.
curl --fail --location --show-error --silent --tlsv1 \
    'https://github.com/clarin-eric/base_style/releases/download/0.1.1/variables.less' > 'less/variable-overrides.less'
lessc 'less/style.less' --clean-css='--s0' > 'css/style.css'