<?php
/**
 * @file
 * openscience_blog.views.inc
 */

/**
 * Implementation of hook_views_pre_render
 * @param type $view
 * @param type $query
 */
function openscience_blog_views_pre_render(&$view) {

  // ANSI SQL standard and therefore views, doesn't allow SQL aggregation on a
  // single field, so SQL GROUP BY users.uid is not allowed. Instead we have
  // to remove duplicates by doing string comparison on the serialized rows.
  // lame.
  if (($view->name == 'openscience_blog') && ($view->current_display == 'block_1')) {
    $view->result = array_map('unserialize', array_unique(array_map('serialize', $view->result)));
  }
}