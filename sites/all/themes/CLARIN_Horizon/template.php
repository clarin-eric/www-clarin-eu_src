<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Overrides theme_preprocess_html().
 */
function CLARIN_Horizon_preprocess_html(&$vars) {
  $fontCssLinkSourceSansPro = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#attributes' => array(
      'href' =>  'https://fonts.googleapis.com/css?family=Source+Sans+Pro',
      'rel' => 'stylesheet',
      'type' => 'text/css'
    )
  );
  
  $fontCssLinkRobotoSlab = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#attributes' => array(
      'href' =>  'https://fonts.googleapis.com/css?family=Roboto+Slab',
      'rel' => 'stylesheet',
      'type' => 'text/css'
    )
  );  
  // Add header meta tag for IE to head
  drupal_add_html_head($fontCssLinkSourceSansPro, 'fontCssLinkSourceSansPro');
  drupal_add_html_head($fontCssLinkRobotoSlab, 'fontCssLinkRobotoSlab');
}

/**
 * Overrides theme_menu_link().
 */
function CLARIN_Horizon_menu_link__menu_block($variables) {
	return theme_menu_link($variables);
}
?>
