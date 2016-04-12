<?php
/**
 * @file
 * openscience_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function openscience_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:add user'
  $permissions['node:group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:administer group'
  $permissions['node:group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:approve and deny subscription'
  $permissions['node:group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:create discussion content'
  $permissions['node:group:create discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:create group_files content'
  $permissions['node:group:create group_files content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:create group_page content'
  $permissions['node:group:create group_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete any discussion content'
  $permissions['node:group:delete any discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any group_files content'
  $permissions['node:group:delete any group_files content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any group_page content'
  $permissions['node:group:delete any group_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own discussion content'
  $permissions['node:group:delete own discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete own group_files content'
  $permissions['node:group:delete own group_files content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete own group_page content'
  $permissions['node:group:delete own group_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:manage members'
  $permissions['node:group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage permissions'
  $permissions['node:group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage roles'
  $permissions['node:group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:subscribe'
  $permissions['node:group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:subscribe without approval'
  $permissions['node:group:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:unsubscribe'
  $permissions['node:group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any discussion content'
  $permissions['node:group:update any discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any group_files content'
  $permissions['node:group:update any group_files content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any group_page content'
  $permissions['node:group:update any group_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update group'
  $permissions['node:group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update own discussion content'
  $permissions['node:group:update own discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update own group_files content'
  $permissions['node:group:update own group_files content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update own group_page content'
  $permissions['node:group:update own group_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
