<?php
/**
 * @file
 * openscience_movies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function openscience_movies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-movie-field_movie'
  $field_instances['node-movie-field_movie'] = array(
    'bundle' => 'movie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'youtube_autoplay' => 1,
          'youtube_height' => 879,
          'youtube_size' => '640x480',
          'youtube_width' => 1049,
        ),
        'type' => 'youtube_video',
        'weight' => 1,
      ),
      'openscience_groups_tile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'semi_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_movie',
    'label' => 'Movie',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'youtube',
      'settings' => array(),
      'type' => 'youtube',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Movie');

  return $field_instances;
}
