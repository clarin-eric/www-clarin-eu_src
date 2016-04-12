<?php
/**
 * @file
 * openscience_ui.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openscience_ui_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'General' => 'General',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'use text format safe_html'.
  $permissions['use text format safe_html'] = array(
    'name' => 'use text format safe_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
