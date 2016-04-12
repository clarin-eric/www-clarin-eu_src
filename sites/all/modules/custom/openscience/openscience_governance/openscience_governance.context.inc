<?php
/**
 * @file
 * openscience_governance.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_governance_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'governance';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/3784' => 'node/3784',
      ),
    ),
    'node' => array(
      'values' => array(
        'member' => 'member',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'governance' => 'governance',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'peripheral_first',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'node/3784',
    'theme' => array(
      'title' => 'Governance',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-governance',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['governance'] = $context;

  return $export;
}
