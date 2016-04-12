<?php

$vars['title_attributes_array']['class'][] = 'block-title';


/**
 * @code We move grid- classes to the front so that we can use the CSS |= attr selector
 */
foreach ($vars['classes_array'] as $key => $class) {
  if (strpos($class, 'grid') !== FALSE) {
    unset($vars['classes_array'][$key]);
    $vars['classes_array'][0] = $class . ' ' . $vars['classes_array'][0];
  }
}

switch ($vars['elements']['#block']->module) {
  case 'menu':
  case 'menu_block':
    $vars['block_el'] = 'nav';
    break;

  case 'search':
    $vars['block_el'] = 'div';
    break;

  case 'views':
    $vars['block_el'] = 'section';
    break;

  default:
    $vars['block_el'] = 'article';
}

$nav_blocks = array('navigation', 'main-menu', 'management', 'user-menu', 'superfish', 'nice_menus', 'superfish', 'nice_menus', 'popular-block');
if (in_array($vars['block']->delta, $nav_blocks)) {
  $vars['block_el'] = 'nav';
}
