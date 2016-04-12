<?php
/**
 * @file
 * openscience_showcases.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openscience_showcases_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openscience_showcases';
  $view->description = '';
  $view->tag = 'openscience';
  $view->base_table = 'node';
  $view->human_name = 'OpenScience Showcases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Showcases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Field: Content: CLARIN Centre: */
  $handler->display->display_options['fields']['field_clarin_centre']['id'] = 'field_clarin_centre';
  $handler->display->display_options['fields']['field_clarin_centre']['table'] = 'field_data_field_clarin_centre';
  $handler->display->display_options['fields']['field_clarin_centre']['field'] = 'field_clarin_centre';
  $handler->display->display_options['fields']['field_clarin_centre']['label'] = '';
  $handler->display->display_options['fields']['field_clarin_centre']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_clarin_centre']['element_class'] = 'centre';
  $handler->display->display_options['fields']['field_clarin_centre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clarin_centre']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_clarin_centre']['element_default_classes'] = FALSE;
  /* Field: Content: Project leader */
  $handler->display->display_options['fields']['field_project_leader']['id'] = 'field_project_leader';
  $handler->display->display_options['fields']['field_project_leader']['table'] = 'field_data_field_project_leader';
  $handler->display->display_options['fields']['field_project_leader']['field'] = 'field_project_leader';
  $handler->display->display_options['fields']['field_project_leader']['label'] = '';
  $handler->display->display_options['fields']['field_project_leader']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_leader']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_project_leader']['element_wrapper_class'] = 'leader';
  $handler->display->display_options['fields']['field_project_leader']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: CLARIN Centre: (field_clarin_centre) */
  $handler->display->display_options['arguments']['field_clarin_centre_value']['id'] = 'field_clarin_centre_value';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['table'] = 'field_data_field_clarin_centre';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['field'] = 'field_clarin_centre_value';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['field_clarin_centre_value']['transform_dash'] = TRUE;
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
    'showcase' => 'showcase',
  );

  /* Display: OpenScience Showcases  */
  $handler = $view->new_display('page', 'OpenScience Showcases ', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'showcases';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Showcases';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-secondary-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: OpenScience Showcases Front */
  $handler = $view->new_display('block', 'OpenScience Showcases Front', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all showcases';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $export['openscience_showcases'] = $view;

  return $export;
}
