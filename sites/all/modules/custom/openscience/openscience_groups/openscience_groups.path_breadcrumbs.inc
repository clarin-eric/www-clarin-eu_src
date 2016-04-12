<?php
/**
 * @file
 * openscience_groups.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function openscience_groups_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'group_pages';
  $path_breadcrumb->name = 'Group pages';
  $path_breadcrumb->path = 'node/%nid';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Groups',
      1 => '%nid:og-group-ref:title',
    ),
    'paths' => array(
      0 => 'os-groups/mine',
      1 => '%nid:og-group-ref:url',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'nid' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group_content',
          'settings' => NULL,
          'context' => 'nid',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'nid',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['group_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'group_views';
  $path_breadcrumb->name = 'Group Views';
  $path_breadcrumb->path = 'os-groups/%view';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Groups',
    ),
    'paths' => array(
      0 => 'os-groups/mine',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'view' => array(
        'position' => 1,
        'argument' => 'string',
        'settings' => array(
          'identifier' => 'String',
          'use_tail' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -93;
  $export['group_views'] = $path_breadcrumb;

  return $export;
}
