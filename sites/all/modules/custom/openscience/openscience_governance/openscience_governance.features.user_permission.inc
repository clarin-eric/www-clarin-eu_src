<?php
/**
 * @file
 * openscience_governance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openscience_governance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'General' => 'General',
      'Major' => 'Major',
    ),
    'module' => 'draggableviews',
  );

  return $permissions;
}
