<?php
/**
 * @file
 * openscience.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openscience_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function openscience_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured".
  $flags['openscience_featured'] = array(
    'content_type' => 'node',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(
      0 => 'blog_post',
      1 => 'event',
      2 => 'movie',
      3 => 'news',
      4 => 'showcase',
    ),
    'flag_short' => 'Feature this',
    'flag_long' => 'Feature this content on the homepage',
    'flag_message' => 'Featured',
    'unflag_short' => 'Stop featuring',
    'unflag_long' => 'Stop featuring this content on the homepage',
    'unflag_message' => 'Un-Featured',
    'unflag_denied_text' => 'Featured',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 4,
      ),
      'unflag' => array(
        0 => 4,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'openscience',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Pinned".
  $flags['openscience_sticky'] = array(
    'content_type' => 'node',
    'title' => 'Pinned',
    'global' => 1,
    'types' => array(
      0 => 'discussion',
      1 => 'group_files',
      2 => 'group_page',
    ),
    'flag_short' => 'Pin this',
    'flag_long' => 'Pin this post to the top of content listings',
    'flag_message' => 'Pinned',
    'unflag_short' => 'Unpin this',
    'unflag_long' => 'Unpin this post from the top of content listings',
    'unflag_message' => 'Unpinned',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 4,
      ),
      'unflag' => array(
        0 => 2,
        1 => 4,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'openscience',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function openscience_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
