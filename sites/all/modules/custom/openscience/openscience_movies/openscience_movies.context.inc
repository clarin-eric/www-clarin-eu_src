<?php
/**
 * @file
 * openscience_movies.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_movies_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'movies';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'movie' => 'movie',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'openscience_movies:page' => 'openscience_movies:page',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => 'Movies',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-movies',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['movies'] = $context;

  return $export;
}
