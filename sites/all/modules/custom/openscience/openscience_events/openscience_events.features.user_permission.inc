<?php
/**
 * @file
 * openscience_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openscience_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer event registration'.
  $permissions['administer event registration'] = array(
    'name' => 'administer event registration',
    'roles' => array(
      'General' => 'General',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration'.
  $permissions['create event registration'] = array(
    'name' => 'create event registration',
    'roles' => array(
      'General' => 'General',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other anonymous'.
  $permissions['create event registration other anonymous'] = array(
    'name' => 'create event registration other anonymous',
    'roles' => array(
      'General' => 'General',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other users'.
  $permissions['create event registration other users'] = array(
    'name' => 'create event registration other users',
    'roles' => array(
      'General' => 'General',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event registration'.
  $permissions['delete any event registration'] = array(
    'name' => 'delete any event registration',
    'roles' => array(
      'General' => 'General',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own event registration'.
  $permissions['delete own event registration'] = array(
    'name' => 'delete own event registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any event registration'.
  $permissions['update any event registration'] = array(
    'name' => 'update any event registration',
    'roles' => array(
      'General' => 'General',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own event registration'.
  $permissions['update own event registration'] = array(
    'name' => 'update own event registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view event registration'.
  $permissions['view event registration'] = array(
    'name' => 'view event registration',
    'roles' => array(
      'General' => 'General',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own event registration'.
  $permissions['view own event registration'] = array(
    'name' => 'view own event registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
