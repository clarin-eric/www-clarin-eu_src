<?php
/**
 * @file
 * lrt_showcases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lrt_showcases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lrt_showcases_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lrt_showcases_node_info() {
  $items = array(
    'lrt_showcase' => array(
      'name' => t('LRT Showcase'),
      'base' => 'node_content',
      'description' => t('A key resource chosen to exemplify what CLARIN has to offer to users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
