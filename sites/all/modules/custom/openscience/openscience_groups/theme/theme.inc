<?php
/**
 * @file
 * Theme functions for OG Extras.
 */

/**
 * Create variables for the group statistics block.
 */
function openscience_groups_preprocess_openscience_groups_group_comp(&$variables) {
  $group = og_context();

  $variables['group_node_links'] = array();
  $variables['gid'] = NULL;
  $variables['group_node'] = NULL;
  $variables['owner_uid'] = array();
  $variables['owner_link'] = NULL;
  $variables['member_uids'] = array();
  $variables['members'] = array();
  if (empty($group)) {
    return NULL;
  }

  $variables['gid'] = $group['gid'];
  $variables['group_node'] = node_load($group['gid']);

  $memberships = og_membership_load_multiple(FALSE, array('gid' => $group['gid'], 'entity_type' => 'user'));
  foreach ($memberships as $membership) {
    $variables['member_uids'][$membership->etid] = $membership->etid;
  }

  $uid = $variables['owner_uid'] = $variables['group_node']->uid;
  $account = user_load($uid);
  $variables['owner_link'] = theme('user_picture', array('account' => $account));
  $variables['owner_link'] .= theme('username', array('account' => $account));

  unset($variables['member_uids'][$uid]);
  foreach ($variables['member_uids'] as $i => $member_id) {
    $variables['members'][$i] = '';
    $account = user_load($member_id);
    $variables['members'][$i] .= theme('user_picture', array('account' => $account));
    $variables['members'][$i] .= theme('username', array('account' => $account));
  }
}

/**
 * Create variables for the group links block.
 */
function openscience_groups_preprocess_openscience_groups_group_info(&$variables) {
  $group = og_context();
  $variables['group_node_links'] = array();
  $variables['gid'] = NULL;
  $variables['group_type'] = NULL;
  $variables['group_node'] = NULL;

  if (empty($group)) {
    return NULL;
  }

  $variables['gid'] = $group['gid'];
  $variables['group_node'] = node_load($group['gid']);
  $variables['page'] = TRUE;

  $image_array = field_view_field('node', $variables['group_node'], 'field_image');
  if ((isset($image_array['#items'])) && ($image_array['#items'][0]['uri'])) {
    $variables['image'] = theme_image_style(array('style_name' => 'medium', 'path' => $image_array['#items'][0]['uri'], 'width' => NULL, 'height' => NULL));
  } else {
    $variables['image'] = '';
  }

  $variables['teaser'] = drupal_render(field_view_field('node', node_load($group['gid']), 'body', 'teaser'));
  $variables['full_description'] = drupal_render(field_view_field('node', node_load($group['gid']), 'body', array('label' => 'hidden')));
}

/**
 * Create variables for the group links block.
 */
function openscience_groups_preprocess_openscience_groups_group_links(&$variables) {
  $group = og_context();

  $variables['body'] = NULL;
  $variables['gid'] = NULL;
  $variables['group_node'] = NULL;

  if (empty($group)) {
    return NULL;
  }
  $variables['group_node_links'] = openscience_groups_node_links();
  $variables['gid'] = $group['gid'];
  $variables['group_type'] = $group['group_type'];
  $variables['group_node'] = node_load($group['gid']);

}