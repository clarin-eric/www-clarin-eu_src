<?php
/**
 * @file
 * openscience_showcases.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_showcases_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'showcases';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'showcase' => 'showcase',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'openscience_showcases:page' => 'openscience_showcases:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openscience_showcases-openscience_showcases_filter' => array(
          'module' => 'openscience_showcases',
          'delta' => 'openscience_showcases_filter',
          'region' => 'peripheral_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'Showcases',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-showcases',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['showcases'] = $context;

  return $export;
}
