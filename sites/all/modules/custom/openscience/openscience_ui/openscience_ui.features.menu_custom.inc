<?php
/**
 * @file
 * openscience_ui.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openscience_ui_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secondary menu');


  return $menus;
}
