<?php
/**
 * @file
 * lrt_showcases.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function lrt_showcases_filter_default_formats() {
  $formats = array();

  // Exported format: Unfiltered.
  $formats['unfiltered'] = array(
    'format' => 'unfiltered',
    'name' => 'Unfiltered',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
