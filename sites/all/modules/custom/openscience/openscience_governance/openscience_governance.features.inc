<?php
/**
 * @file
 * openscience_governance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openscience_governance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openscience_governance_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openscience_governance_node_info() {
  $items = array(
    'member' => array(
      'name' => t('Board member'),
      'base' => 'node_content',
      'description' => t('Board members are persons who belong to one of the Clarin-NL governance groups.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
