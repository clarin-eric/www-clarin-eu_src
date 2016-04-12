<?php
/**
 * @file
 * openscience_movies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openscience_movies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openscience_movies';
  $view->description = '';
  $view->tag = 'openscience';
  $view->base_table = 'node';
  $view->human_name = 'OpenScience Movies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OpenScience Movies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all movies';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Movie */
  $handler->display->display_options['fields']['field_movie']['id'] = 'field_movie';
  $handler->display->display_options['fields']['field_movie']['table'] = 'field_data_field_movie';
  $handler->display->display_options['fields']['field_movie']['field'] = 'field_movie';
  $handler->display->display_options['fields']['field_movie']['label'] = '';
  $handler->display->display_options['fields']['field_movie']['element_type'] = '0';
  $handler->display->display_options['fields']['field_movie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_movie']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_movie']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_movie']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_movie']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_movie']['settings'] = array(
    'image_style' => 'openscience_wide_3col',
    'image_link' => 'youtube',
  );
  $handler->display->display_options['fields']['field_movie']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );

  /* Display: OpenScience Movies */
  $handler = $view->new_display('page', 'OpenScience Movies', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'movies';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Movies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-secondary-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: OpenScience Movies Front */
  $handler = $view->new_display('block', 'OpenScience Movies Front', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'OpenScience Movies Front';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all movies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $export['openscience_movies'] = $view;

  return $export;
}
