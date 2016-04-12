<?php
/**
 * @file
 * openscience.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openscience_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm wmv ico crt zip';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '';
  $export['file_entity_max_filesize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files_private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_administrator_bypass_defaults';
  $strongarm->value = array(
    'up_name' => 0,
    'up_mail' => 0,
    'up_pass' => 0,
    'up_status' => 0,
    'up_roles' => 0,
    'up_openid' => 0,
    'up_cancel' => 0,
    'up_edit' => 0,
  );
  $export['userprotect_administrator_bypass_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_autoprotect';
  $strongarm->value = 0;
  $export['userprotect_autoprotect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_protection_defaults';
  $strongarm->value = array(
    'up_status' => 'up_status',
    'up_cancel' => 'up_cancel',
    'up_name' => 0,
    'up_mail' => 0,
    'up_pass' => 0,
    'up_roles' => 0,
    'up_openid' => 0,
    'up_edit' => 0,
  );
  $export['userprotect_protection_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_role_protections';
  $strongarm->value = array(
    2 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 0,
      'up_openid' => 0,
      'up_cancel' => 0,
      'up_edit' => 0,
    ),
    4 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 0,
      'up_openid' => 1,
      'up_cancel' => 1,
      'up_edit' => 1,
    ),
  );
  $export['userprotect_role_protections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '0';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = TRUE;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '2';
  $export['user_register'] = $strongarm;

  return $export;
}
