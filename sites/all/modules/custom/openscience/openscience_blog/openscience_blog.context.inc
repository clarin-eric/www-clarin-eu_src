<?php
/**
 * @file
 * openscience_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'openscience_blog:page' => 'openscience_blog:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openscience_blog-block_1' => array(
          'module' => 'views',
          'delta' => 'openscience_blog-block_1',
          'region' => 'peripheral_first',
          'weight' => '-10',
        ),
        'views-df41f827af8e020964cab78e9fff8e94' => array(
          'module' => 'views',
          'delta' => 'df41f827af8e020964cab78e9fff8e94',
          'region' => 'peripheral_first',
          'weight' => '-9',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'Blog',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-blog',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['blog'] = $context;

  return $export;
}
