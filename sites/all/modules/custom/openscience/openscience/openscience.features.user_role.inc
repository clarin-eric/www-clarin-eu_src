<?php
/**
 * @file
 * openscience.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openscience_user_default_roles() {
  $roles = array();

  // Exported role: General.
  $roles['General'] = array(
    'name' => 'General',
    'weight' => 2,
  );

  return $roles;
}
