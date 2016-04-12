<?php
/**
 * @file
 * openscience_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openscience_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'General' => 'General',
    ),
    'module' => 'og',
  );

  return $permissions;
}
