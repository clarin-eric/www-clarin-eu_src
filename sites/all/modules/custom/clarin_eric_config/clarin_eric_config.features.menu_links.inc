<?php
/**
 * @file
 * clarin_eric_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function clarin_eric_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:events/P50Y
  $menu_links['main-menu:events/P50Y'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events/P50Y',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: main-menu:http://example.com/1
  $menu_links['main-menu:http://example.com/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/1',
    'router_path' => '',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'a' => '1',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:http://example.com/10
  $menu_links['main-menu:http://example.com/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/10',
    'router_path' => '',
    'link_title' => 'Folders',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/11
  $menu_links['main-menu:http://example.com/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/11',
    'router_path' => '',
    'link_title' => 'Old news',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/12
  $menu_links['main-menu:http://example.com/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/12',
    'router_path' => '',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:http://example.com/13
  $menu_links['main-menu:http://example.com/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/13',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:http://example.com/14
  $menu_links['main-menu:http://example.com/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/14',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:http://example.com/2
  $menu_links['main-menu:http://example.com/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/2',
    'router_path' => '',
    'link_title' => 'Media & press info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'a' => '2',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/4
  $menu_links['main-menu:http://example.com/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/4',
    'router_path' => '',
    'link_title' => 'Press liasons',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'a' => '4',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/5
  $menu_links['main-menu:http://example.com/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/5',
    'router_path' => '',
    'link_title' => 'Press releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/6
  $menu_links['main-menu:http://example.com/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/6',
    'router_path' => '',
    'link_title' => 'Showcases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/7
  $menu_links['main-menu:http://example.com/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/7',
    'router_path' => '',
    'link_title' => 'Movies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/8
  $menu_links['main-menu:http://example.com/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/8',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:http://example.com/9
  $menu_links['main-menu:http://example.com/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://example.com/9',
    'router_path' => '',
    'link_title' => 'Leaflet materials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: main-menu:node/727
  $menu_links['main-menu:node/727'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/727',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'a' => '3',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://example.com/1',
  );
  // Exported menu link: menu-secondary-menu:http://example.com/15
  $menu_links['menu-secondary-menu:http://example.com/15'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'http://example.com/15',
    'router_path' => '',
    'link_title' => 'Legal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-secondary-menu:http://example.com/16
  $menu_links['menu-secondary-menu:http://example.com/16'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'http://example.com/16',
    'router_path' => '',
    'link_title' => 'Standards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-secondary-menu:http://example.com/17
  $menu_links['menu-secondary-menu:http://example.com/17'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'http://example.com/17',
    'router_path' => '',
    'link_title' => 'Technical Stuff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-secondary-menu:http://example.com/18
  $menu_links['menu-secondary-menu:http://example.com/18'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'http://example.com/18',
    'router_path' => '',
    'link_title' => 'National Consortia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-secondary-menu:http://example.com/19
  $menu_links['menu-secondary-menu:http://example.com/19'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'http://example.com/19',
    'router_path' => '',
    'link_title' => 'Downloads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-secondary-menu:taxonomy/term/6
  $menu_links['menu-secondary-menu:taxonomy/term/6'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Governance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('Contact');
  t('Downloads');
  t('Events');
  t('Folders');
  t('Governance');
  t('Leaflet materials');
  t('Legal');
  t('Media');
  t('Media & press info');
  t('Movies');
  t('National Consortia');
  t('News');
  t('Old news');
  t('Press liasons');
  t('Press releases');
  t('Services');
  t('Showcases');
  t('Standards');
  t('Technical Stuff');


  return $menu_links;
}
