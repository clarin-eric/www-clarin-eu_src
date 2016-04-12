<?php
/**
 * @file
 * openscience_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'openscience_news:page' => 'openscience_news:page',
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
      'title' => 'News',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-news',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['news'] = $context;

  return $export;
}
