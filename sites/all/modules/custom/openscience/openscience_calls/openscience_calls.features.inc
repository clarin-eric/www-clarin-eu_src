<?php
/**
 * @file
 * openscience_calls.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openscience_calls_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openscience_calls_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openscience_calls_node_info() {
  $items = array(
    'call' => array(
      'name' => t('Call'),
      'base' => 'node_content',
      'description' => t('A Call for CLARIN-NL projects. Calls can be opened and closed and are listed in the Calls table. Choose this content type only when Clarin starts a new Call.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
