<?php

// Unlike built-in $main_menu variable, this supports nested menus
if ($vars['main_menu']) {
  $pid = variable_get('menu_main_links_source', 'main-menu');
  $tree = menu_tree($pid);
  $vars['main_menu_links'] = drupal_render($tree);
} else {
  $vars['main_menu_links'] =  FALSE;
}

$vars['secondary_menu_links'] = theme('links__system_secondary_menu',
  array(
    'links' => $vars['secondary_menu'],
    'attributes' => array(
      'id' => 'secondary-menu',
      'class' => array(
        'links', 'clearfix',
      ),
    ),
  )
);