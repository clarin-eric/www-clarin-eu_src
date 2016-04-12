<?php
/**
 * @file
 * openscience_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'openscience_events' => 'openscience_events',
        'openscience_events:page' => 'openscience_events:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-df41f827af8e020964cab78e9fff8e94' => array(
          'module' => 'views',
          'delta' => 'df41f827af8e020964cab78e9fff8e94',
          'region' => 'peripheral_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'Events',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-events',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_views';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'openscience_events' => 'openscience_events',
        'openscience_events:page' => 'openscience_events:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openscience_events-openscience_events_date_widget' => array(
          'module' => 'openscience_events',
          'delta' => 'openscience_events_date_widget',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['events_views'] = $context;

  return $export;
}
