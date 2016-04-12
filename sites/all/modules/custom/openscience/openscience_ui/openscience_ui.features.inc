<?php
/**
 * @file
 * openscience_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openscience_ui_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openscience_ui_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openscience_ui_image_default_styles() {
  $styles = array();

  // Exported image style: openscience_2col.
  $styles['openscience_2col'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_2col',
  );

  // Exported image style: openscience_3col.
  $styles['openscience_3col'] = array(
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 255,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_3col',
  );

  // Exported image style: openscience_4col.
  $styles['openscience_4col'] = array(
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_4col',
  );

  // Exported image style: openscience_5col.
  $styles['openscience_5col'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 445,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_5col',
  );

  // Exported image style: openscience_6col.
  $styles['openscience_6col'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 540,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_6col',
  );

  // Exported image style: openscience_9col.
  $styles['openscience_9col'] = array(
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 825,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_9col',
  );

  // Exported image style: openscience_square_1col.
  $styles['openscience_square_1col'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 65,
          'height' => 65,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_square_1col',
  );

  // Exported image style: openscience_square_2col.
  $styles['openscience_square_2col'] = array(
    'label' => 'openscience_square_2col',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 160,
            'height' => 160,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
          'anchor' => 'left-top',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: openscience_wide_3col.
  $styles['openscience_wide_3col'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'openscience_wide_3col',
  );

  // Exported image style: openscience_wide_8col.
  $styles['openscience_wide_8col'] = array(
    'label' => 'openscience_wide_8col',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 730,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
