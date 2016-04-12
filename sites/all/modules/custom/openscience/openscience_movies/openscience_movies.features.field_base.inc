<?php
/**
 * @file
 * openscience_movies.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openscience_movies_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_movie'
  $field_bases['field_movie'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_movie',
    'indexes' => array(
      'video_id' => array(
        0 => 'video_id',
      ),
    ),
    'locked' => 0,
    'module' => 'youtube',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'youtube',
  );

  return $field_bases;
}
