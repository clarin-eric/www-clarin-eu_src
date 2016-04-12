<?php
/**
* @file
* Provide views data and handlers for OpenScience Groups
*/

/**
 * Implementation of hook_views_data().
 */
function openscience_groups_views_data() {
  $data = array();

  $data['node']['openscience_groups_posts_count'] = array(
    'title' => 'OpenScience Groups Posts Count',
    'group' => 'OpenScience',
    'help' => 'Counts the posts in an OpenScience group',
    'field' => array(
      'handler' => 'views_handler_field_openscience_groups_posts_count',
    ),
  );

  $data['node']['openscience_groups_latest_post'] = array(
    'title' => 'Latest discussion',
    'group' => 'OpenScience',
    'help' => 'Find the last post in an OpenScience group',
    'field' => array(
      'handler' => 'views_handler_field_openscience_groups_latest_post',
    ),
  );

  $data['alter']['openscience_groups_acronym'] = array(
    'title' => 'Acronym',
    'help' => 'Acronym',
    'field' => array(
      'handler' => 'openscience_groups_acronym',
    ),
  );

  return $data;
}

function openscience_groups_views_data_alter(&$data) {
  // dsm($data);
  return $data;
}

class views_handler_field_openscience_groups_posts_count extends views_handler_field {
  function render($values) {
    if (isset($values->nid)) {
      $nid = $values->nid;
    }
    elseif (isset($values->node_og_membership_nid)) {
      $nid = $values->node_og_membership_nid;
    }
    $query = "SELECT n.type
                FROM {node} n
                INNER JOIN {og_membership} ogm
                ON n.nid = ogm.etid
                WHERE ogm.entity_type = 'node'
                AND ogm.gid = :nid";
    $result = db_query($query, array(':nid' => $nid))->fetchCol();
    $counts = array_count_values($result);
    if (!isset($counts['group_page'])): $counts['group_page'] = 0; endif;
    if (!isset($counts['group_files'])): $counts['group_files'] = 0; endif;
    if (!isset($counts['discussion'])): $counts['discussion'] = 0; endif;
    $items = array();
    $items['items'] = array();
    $items['items'][] = format_plural($counts['group_page'], '@count Page', '@count Pages');
    $items['items'][] = format_plural($counts['group_files'], '@count File', '@count Files');
    $items['items'][] = format_plural($counts['discussion'], '@count Discussion', '@count Discussions');
    return theme('item_list', $items);
  }
  function query() {
    $this->ensure_my_table();
  }
}

class views_handler_field_openscience_groups_latest_post extends views_handler_field {
  function render($values) {
    if (isset($values->nid)) {
      $nid = $values->nid;
    }
    elseif (isset($values->node_og_membership_nid)) {
      $nid = $values->node_og_membership_nid;
    }
    $query = "SELECT ogm.etid AS nid,
                n.title AS title,
                n.created AS created
                FROM {node} n
                INNER JOIN {og_membership} ogm
                ON n.nid = ogm.etid
                WHERE ogm.entity_type = 'node'
                AND ogm.gid = :nid
                ORDER BY n.created DESC
                LIMIT 1";
    $result = db_query($query, array(':nid' => $nid))->fetchObject();
    if (isset($result->nid)) {
      return l($result->title, "node/{$result->nid}") . format_date($result->created, 'short');
    }
    else {
      return t("no posts found");
    }
  }
  function query() {
    $this->ensure_my_table();
  }
}
