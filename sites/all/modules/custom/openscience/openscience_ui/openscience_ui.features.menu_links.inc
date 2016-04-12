<?php
/**
 * @file
 * openscience_ui.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openscience_ui_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-secondary-menu:user/login
  $menu_links['menu-secondary-menu:user/login'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log in');


  return $menu_links;
}
