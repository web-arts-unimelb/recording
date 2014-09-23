<?php
/**
 * @file
 * recording.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function recording_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recording';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'recording';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: recording pager */
  $handler = $view->new_display('block', 'recording pager', 'recording_pager');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_record_media']['id'] = 'field_record_media';
  $handler->display->display_options['fields']['field_record_media']['table'] = 'field_data_field_record_media';
  $handler->display->display_options['fields']['field_record_media']['field'] = 'field_record_media';
  $handler->display->display_options['fields']['field_record_media']['label'] = '';
  $handler->display->display_options['fields']['field_record_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_record_media']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_record_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_record_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_record_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_record_media']['settings'] = array(
    'file_view_mode' => 'media_listing_image_file',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'recording' => 'recording',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Find a recording';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    1 => 0,
    11 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Content: Study area (field_record_study_area) */
  $handler->display->display_options['filters']['field_record_study_area_tid']['id'] = 'field_record_study_area_tid';
  $handler->display->display_options['filters']['field_record_study_area_tid']['table'] = 'field_data_field_record_study_area';
  $handler->display->display_options['filters']['field_record_study_area_tid']['field'] = 'field_record_study_area_tid';
  $handler->display->display_options['filters']['field_record_study_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_study_area_tid']['expose']['operator_id'] = 'field_record_study_area_tid_op';
  $handler->display->display_options['filters']['field_record_study_area_tid']['expose']['label'] = 'Search by study area';
  $handler->display->display_options['filters']['field_record_study_area_tid']['expose']['operator'] = 'field_record_study_area_tid_op';
  $handler->display->display_options['filters']['field_record_study_area_tid']['expose']['identifier'] = 'field_record_study_area_tid';
  $handler->display->display_options['filters']['field_record_study_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    1 => 0,
    11 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_record_study_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_study_area_tid']['vocabulary'] = 'foa_study_area';
  $handler->display->display_options['block_description'] = 'recording_pager';
  $export['recording'] = $view;

  return $export;
}
