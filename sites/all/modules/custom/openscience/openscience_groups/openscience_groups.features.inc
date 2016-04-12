<?php
/**
 * @file
 * openscience_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openscience_groups_ctools_plugin_api($module = NULL, $api = NULL) {
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
function openscience_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function openscience_groups_flag_default_flags() {
  $flags = array();
  // Exported flag: "Visibility".
  $flags['openscience_group_visibility'] = array(
    'content_type' => 'node',
    'title' => 'Visibility',
    'global' => 1,
    'types' => array(
      0 => 'group',
    ),
    'flag_short' => 'Make public',
    'flag_long' => 'Only group membes can view group contents in current state',
    'flag_message' => '',
    'unflag_short' => 'Make private',
    'unflag_long' => 'Everyone can view group contents in current state',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 4,
      ),
      'unflag' => array(
        0 => 4,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'openscience_groups',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function openscience_groups_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Group Discussion'),
      'base' => 'node_content',
      'description' => t('Page with commenting functionality, to be used for topical discussions.'),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group_files' => array(
      'name' => t('Group Files'),
      'base' => 'node_content',
      'description' => t('Storage for a file or any number of files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group_page' => array(
      'name' => t('Group Page'),
      'base' => 'node_content',
      'description' => t('Page inside a group. Can be edited by anyone in the group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
