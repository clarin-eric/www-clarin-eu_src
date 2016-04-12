<?php
/**
 * @file
 * openscience_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openscience_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'auth_portal_front';
  $context->description = 'Homepage component of auth portal context';
  $context->tag = 'clarineric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage component of auth portal context');
  t('clarineric');
  $export['auth_portal_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'auth_portal_path';
  $context->description = 'Path component of auth portal context';
  $context->tag = 'clarineric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'auth-portal' => 'auth-portal',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Path component of auth portal context');
  t('clarineric');
  $export['auth_portal_path'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'guest_portal_front';
  $context->description = 'Homepage component of guest portal context';
  $context->tag = 'clarineric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage component of guest portal context');
  t('clarineric');
  $export['guest_portal_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'guest_portal_path';
  $context->description = 'Path component of guest portal context';
  $context->tag = 'clarineric';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'guest-portal' => 'guest-portal',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Path component of guest portal context');
  t('clarineric');
  $export['guest_portal_path'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_anonymous';
  $context->description = 'Homepage for anonymous users';
  $context->tag = 'openscience';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'guest_portal_front' => 'guest_portal_front',
        'guest_portal_path' => 'guest_portal_path',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openscience_ui-block' => array(
          'module' => 'views',
          'delta' => 'openscience_ui-block',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'bean-search-for-language-resources' => array(
          'module' => 'bean',
          'delta' => 'search-for-language-resources',
          'region' => 'preblocks',
          'weight' => '-10',
        ),
        'bean-deposit-your-resources' => array(
          'module' => 'bean',
          'delta' => 'deposit-your-resources',
          'region' => 'preblocks',
          'weight' => '-9',
        ),
        'views-featured_lrt_showcase-block' => array(
          'module' => 'views',
          'delta' => 'featured_lrt_showcase-block',
          'region' => 'preblocks',
          'weight' => '-8',
        ),
        'views-portal-portal_showcase' => array(
          'module' => 'views',
          'delta' => 'portal-portal_showcase',
          'region' => 'preblocks',
          'weight' => '-7',
        ),
        'bean-searching-across-multiple-corpor' => array(
          'module' => 'bean',
          'delta' => 'searching-across-multiple-corpor',
          'region' => 'preblocks',
          'weight' => '-6',
        ),
        'bean-clarin-tweets' => array(
          'module' => 'bean',
          'delta' => 'clarin-tweets',
          'region' => 'preblocks',
          'weight' => '-5',
        ),
      ),
    ),
    'metatag_context_reaction' => array(
      'metatags' => array(
        'title' => array(
          'value' => '[current-page:title] | [site:name]',
          'default' => '[current-page:title] | [site:name]',
        ),
        'description' => array(
          'value' => '',
        ),
        'abstract' => array(
          'value' => '',
        ),
        'keywords' => array(
          'value' => '',
        ),
        'robots' => array(
          'value' => array(
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
        'news_keywords' => array(
          'value' => '',
        ),
        'standout' => array(
          'value' => '',
        ),
        'generator' => array(
          'value' => 'Drupal 7 (http://drupal.org)',
          'default' => 'Drupal 7 (http://drupal.org)',
        ),
        'copyright' => array(
          'value' => '',
        ),
        'image_src' => array(
          'value' => '',
        ),
        'canonical' => array(
          'value' => 'http://clarin.eu',
          'default' => '[current-page:url:absolute]',
        ),
        'shortlink' => array(
          'value' => '',
          'default' => '[current-page:url:unaliased]',
        ),
        'publisher' => array(
          'value' => '',
        ),
        'author' => array(
          'value' => '',
        ),
        'original-source' => array(
          'value' => '',
        ),
        'revisit-after' => array(
          'value' => '',
          'period' => '',
        ),
      ),
      'metatag_admin' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage for anonymous users');
  t('openscience');
  $export['home_anonymous'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_authenticated';
  $context->description = 'Homepage for authenticated users';
  $context->tag = 'openscience';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'auth_portal_front' => 'auth_portal_front',
        'auth_portal_path' => 'auth_portal_path',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openscience_ui-block' => array(
          'module' => 'views',
          'delta' => 'openscience_ui-block',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'bean-clarin-tweets' => array(
          'module' => 'bean',
          'delta' => 'clarin-tweets',
          'region' => 'preblocks',
          'weight' => '-10',
        ),
        'views-openscience_group_updates-block' => array(
          'module' => 'views',
          'delta' => 'openscience_group_updates-block',
          'region' => 'preblocks',
          'weight' => '-8',
        ),
        'views-openscience_events-block' => array(
          'module' => 'views',
          'delta' => 'openscience_events-block',
          'region' => 'content',
          'weight' => '-27',
        ),
        'views-openscience_news-block' => array(
          'module' => 'views',
          'delta' => 'openscience_news-block',
          'region' => 'content',
          'weight' => '-26',
        ),
        'views-openscience_blog-block' => array(
          'module' => 'views',
          'delta' => 'openscience_blog-block',
          'region' => 'content',
          'weight' => '-25',
        ),
      ),
    ),
    'metatag_context_reaction' => array(
      'metatags' => array(
        'title' => array(
          'value' => '[current-page:title] | [site:name]',
          'default' => '[current-page:title] | [site:name]',
        ),
        'description' => array(
          'value' => '',
        ),
        'abstract' => array(
          'value' => '',
        ),
        'keywords' => array(
          'value' => '',
        ),
        'robots' => array(
          'value' => array(
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
        'news_keywords' => array(
          'value' => '',
        ),
        'standout' => array(
          'value' => '',
        ),
        'generator' => array(
          'value' => 'Drupal 7 (http://drupal.org)',
          'default' => 'Drupal 7 (http://drupal.org)',
        ),
        'copyright' => array(
          'value' => '',
        ),
        'image_src' => array(
          'value' => '',
        ),
        'canonical' => array(
          'value' => 'http://clarin.eu',
          'default' => '[current-page:url:absolute]',
        ),
        'shortlink' => array(
          'value' => '',
          'default' => '[current-page:url:unaliased]',
        ),
        'publisher' => array(
          'value' => '',
        ),
        'author' => array(
          'value' => '',
        ),
        'original-source' => array(
          'value' => '',
        ),
        'revisit-after' => array(
          'value' => '',
          'period' => '',
        ),
      ),
      'metatag_admin' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage for authenticated users');
  t('openscience');
  $export['home_authenticated'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pages';
  $context->description = '';
  $context->tag = 'openscience';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
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
      ),
    ),
    'theme' => array(
      'title' => 'About',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'section-pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('openscience');
  $export['pages'] = $context;

  return $export;
}
