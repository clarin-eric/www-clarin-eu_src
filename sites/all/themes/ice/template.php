<?php

global $theme, $base_path, $base_url, $theme_path, $ice_theme_path, $abs_ice_theme_path, $files_path;
/* Store theme paths in php and javascript variables */
$ice_theme_path = drupal_get_path('theme', 'ice');
$abs_ice_theme_path = $base_path . $ice_theme_path;
$files_path = variable_get('file_public_path', conf_path() . '/files');

drupal_add_css($ice_theme_path . '/styling/css/ice.reset.css', array('weight' => 0));
drupal_add_css($ice_theme_path . '/styling/css/ice.base.css', array('weight' => CSS_THEME));

/**
 * Implements hook_preprocess().
 *
 * This function checks to see if a hook has a preprocess file associated with
 * it, and if so, loads it.
 *
 * @param $vars
 * @param $hook
 * @return Array
 */
  /* if you rename the theme you have to change the the name of this function and of the drupal_get_path parameter */
function ice_preprocess(&$vars, $hook) {
  if (is_file(drupal_get_path('theme', 'ice') . '/preprocess/preprocess-' . str_replace('_', '-', $hook) . '.inc')) {
    include('preprocess/preprocess-' . str_replace('_', '-', $hook) . '.inc');
  }
}

/**
 * Alters
 */


/**
 * Implements hook_js_alter().
 *
 * Force all JS files to aggregate into 1 file.
 */
function ice_js_alter(&$js){
	if ((variable_get('preprocess_js', '')) && TRUE) {
	  uasort($js, 'drupal_sort_css_js');
	  $i = 0;

	  foreach($js as $name => $script) {
	    $js[$name]['weight'] = $i++;
	    $js[$name]['group'] = JS_DEFAULT;
	    $js[$name]['every_page'] = TRUE;
	    $js[$name]['preprocess'] = TRUE;
	    $js[$name]['cache'] = TRUE;
	    // $js[$name]['scope'] = 'header';
	    $js[$name]['version'] = '';
	  }
	}
}

/**
 * Implements hook_css_alter().
 *
 * Force all CSS files to aggregate into 1 file
 */
function ice_css_alter(&$css){
	if ((variable_get('preprocess_css', '')) && TRUE) {
	  uasort($css, 'drupal_sort_css_js');
	  $i = 0;

	  foreach($css as $name => $script) {
	    $css[$name]['weight'] = $i++;
	    $css[$name]['group'] = CSS_DEFAULT;
	    $css[$name]['every_page'] = TRUE;
	    // $css[$name]['preprocess'] = TRUE;
	  }
	}
}