<?php
/**
 * @file
 * openscience_ui.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function openscience_ui_filter_default_formats() {
  $formats = array();

  // Exported format: Safe HTML.
  $formats['safe_html'] = array(
    'format' => 'safe_html',
    'name' => 'Safe HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'openscience_cleanup' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'clarine_legacy' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'wysiwyg' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'valid_elements' => 'a[href|target<_blank|title|name],
img[src|width|height|alt],
td[width|rowspan|colspan|bgcolor],
tr[width|bgcolor],
th[width|rowspan|colspan],
table[width|cellspacing],
span[class],
a, em, strong, cite, code, ul, ol, li, dl, dt, dd, h2, h3, h4, h5, h6, p, br, del, blockquote, cite, table, th, td, tbody, caption, colgroup, col, thead, tfoot, b, pre, code, hr,
@[align|valign|style|class]',
          'allow_comments' => 0,
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(),
          'style_color' => array(
            'color' => 'color',
            'background' => 'background',
            'background-color' => 'background-color',
            'background-image' => 'background-image',
            'background-repeat' => 'background-repeat',
            'background-attachment' => 'background-attachment',
            'background-position' => 'background-position',
          ),
          'style_font' => array(
            'font-size' => 'font-size',
            'font-size-adjust' => 'font-size-adjust',
            'font-stretch' => 'font-stretch',
            'font-style' => 'font-style',
            'font-variant' => 'font-variant',
            'font-weight' => 'font-weight',
            'font' => 0,
            'font-family' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 'text-indent',
            'text-transform' => 'text-transform',
            'letter-spacing' => 'letter-spacing',
            'word-spacing' => 'word-spacing',
            'white-space' => 'white-space',
            'direction' => 'direction',
            'unicode-bidi' => 'unicode-bidi',
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-top' => 'border-top',
            'border-right' => 'border-right',
            'border-bottom' => 'border-bottom',
            'border-left' => 'border-left',
            'border-width' => 'border-width',
            'border-top-width' => 'border-top-width',
            'border-right-width' => 'border-right-width',
            'border-bottom-width' => 'border-bottom-width',
            'border-left-width' => 'border-left-width',
          ),
          'style_border-2' => array(
            'border-color' => 'border-color',
            'border-top-color' => 'border-top-color',
            'border-right-color' => 'border-right-color',
            'border-bottom-color' => 'border-bottom-color',
            'border-left-color' => 'border-left-color',
            'border-style' => 'border-style',
            'border-top-style' => 'border-top-style',
            'border-right-style' => 'border-right-style',
            'border-bottom-style' => 'border-bottom-style',
            'border-left-style' => 'border-left-style',
          ),
          'style_dimension' => array(
            'height' => 'height',
            'line-height' => 'line-height',
            'max-height' => 'max-height',
            'max-width' => 'max-width',
            'min-height' => 'min-height',
            'min-width' => 'min-width',
            'width' => 'width',
          ),
          'style_positioning' => array(
            'bottom' => 'bottom',
            'clip' => 'clip',
            'left' => 'left',
            'overflow' => 'overflow',
            'right' => 'right',
            'top' => 'top',
            'vertical-align' => 'vertical-align',
            'z-index' => 'z-index',
          ),
          'style_layout' => array(
            'clear' => 'clear',
            'display' => 'display',
            'float' => 'float',
            'position' => 'position',
            'visibility' => 'visibility',
          ),
          'style_list' => array(
            'list-style' => 'list-style',
            'list-style-image' => 'list-style-image',
            'list-style-position' => 'list-style-position',
            'list-style-type' => 'list-style-type',
          ),
          'style_table' => array(
            'border-collapse' => 'border-collapse',
            'border-spacing' => 'border-spacing',
            'caption-side' => 'caption-side',
            'empty-cells' => 'empty-cells',
            'table-layout' => 'table-layout',
          ),
          'style_user' => array(
            'cursor' => 'cursor',
            'outline' => 'outline',
            'outline-width' => 'outline-width',
            'outline-style' => 'outline-style',
            'outline-color' => 'outline-color',
            'zoom' => 'zoom',
          ),
          'rule_valid_classes' => array(
            0 => 'left',
            2 => 'right',
            4 => 'float-left',
            6 => 'float-right',
            8 => 'float-none',
            10 => 'clearfix',
            12 => 'clear-left',
            14 => 'clear-right',
            16 => 'clear-both',
            18 => 'odd',
            20 => 'even',
            22 => 'file',
            24 => 'media-element',
            26 => 'file-default',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'emptyparagraphkiller' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
