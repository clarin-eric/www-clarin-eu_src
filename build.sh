#!/bin/sh

set -e
# TODO
# ~/.npmrc
npm install 'less' 'less-plugin-clean-css'
curl --fail --location --show-error --silent --tlsv1.2 \
    'https://github.com/drupalprojects/bootstrap/archive/7.x-3.5.tar.gz' | \
        tar -x -z -p -v -f -
## Use the Less-based starter kit.
cp -apr -- 'bootstrap-7.x-3.5/starterkits/less' ~/'CLARIN_Horizon/'
cd -- ~/'CLARIN_Horizon/'
## Edit subtheme properties.
rm -- 'less.subtheme'
# TODO
## Customize graphics.
mv -f -- '../CLARIN_Horizon.info' '../favicon.ico' '../logo.png' \
    ~/'CLARIN_Horizon/'

git clone 'git@github.com:twbs/bootstrap.git' ~/'bootstrap'
(cd -- ~/'bootstrap'
git fetch --tags
git checkout 'v3.3.6')

## Transpile.
lessc 'less/style.less' --clean-css='--s0' > 'css/style.css'