<?php
/**
 * @file
 * openscience_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_page';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openscience_groups-openscience_groups_node_links' => array(
          'module' => 'openscience_groups',
          'delta' => 'openscience_groups_node_links',
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
  $export['group_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'groups';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openscience_groups-openscience_groups_group_info' => array(
          'module' => 'openscience_groups',
          'delta' => 'openscience_groups_group_info',
          'region' => 'peripheral_first',
          'weight' => '-10',
        ),
        'openscience_groups-openscience_groups_group_comp' => array(
          'module' => 'openscience_groups',
          'delta' => 'openscience_groups_group_comp',
          'region' => 'peripheral_first',
          'weight' => '-9',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'Groups',
      'subtitle' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['groups'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'groups_dashboard';
  $context->description = '';
  $context->tag = 'openscienc';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'openscience_my_groups:page_1' => 'openscience_my_groups:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openscience_groups-block' => array(
          'module' => 'views',
          'delta' => 'openscience_groups-block',
          'region' => 'peripheral_second',
          'weight' => '-10',
        ),
        'views-f6897ef1318bf09daf2b99921130e4e8' => array(
          'module' => 'views',
          'delta' => 'f6897ef1318bf09daf2b99921130e4e8',
          'region' => 'postblocks',
          'weight' => '-10',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'Groups',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-groups',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscienc');
  $export['groups_dashboard'] = $context;

  return $export;
}
