<?php
/**
 * @file
 * clarin_eric_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function clarin_eric_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clarin_centres';
  $context->description = '';
  $context->tag = 'clarineric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/3822' => 'node/3822',
        'clarin-eric-datatables/centres/1' => 'clarin-eric-datatables/centres/1',
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
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'peripheral_first',
          'weight' => '-9',
        ),
        'views-df41f827af8e020964cab78e9fff8e94' => array(
          'module' => 'views',
          'delta' => 'df41f827af8e020964cab78e9fff8e94',
          'region' => 'peripheral_first',
          'weight' => '-8',
        ),
        'bean-certified-centres-description' => array(
          'module' => 'bean',
          'delta' => 'certified-centres-description',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-map-clarin-certified-centres-' => array(
          'module' => 'bean',
          'delta' => 'map-clarin-certified-centres-',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('clarineric');
  $export['clarin_centres'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_blog_portal';
  $context->description = 'CLARIN ERIC News and Blog portal';
  $context->tag = 'clarineric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-portal' => 'news-portal',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openscience_news-block_1' => array(
          'module' => 'views',
          'delta' => 'openscience_news-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-openscience_blog-block_2' => array(
          'module' => 'views',
          'delta' => 'openscience_blog-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CLARIN ERIC News and Blog portal');
  t('clarineric');
  $export['news_blog_portal'] = $context;

  return $export;
}
