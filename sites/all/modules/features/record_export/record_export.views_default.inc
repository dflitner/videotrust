<?php
/**
 * @file
 * record_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function record_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export_records';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export Records';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'type' => 'type',
    'field_availability' => 'field_availability',
    'field_price' => 'field_price',
    'field_date_checked' => 'field_date_checked',
    'field_notes' => 'field_notes',
    'field_worldcat_record_collection' => 'field_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_availability' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_checked' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_worldcat_record_collection' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_record_reference_target_id']['id'] = 'field_record_reference_target_id';
  $handler->display->display_options['relationships']['field_record_reference_target_id']['table'] = 'field_data_field_record_reference';
  $handler->display->display_options['relationships']['field_record_reference_target_id']['field'] = 'field_record_reference_target_id';
  $handler->display->display_options['relationships']['field_record_reference_target_id']['label'] = 'record referenced';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_record_reference_target_id';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Search Type';
  /* Field: Content: Found */
  $handler->display->display_options['fields']['field_found']['id'] = 'field_found';
  $handler->display->display_options['fields']['field_found']['table'] = 'field_data_field_found';
  $handler->display->display_options['fields']['field_found']['field'] = 'field_found';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  /* Field: Content: Date Checked */
  $handler->display->display_options['fields']['field_date_checked']['id'] = 'field_date_checked';
  $handler->display->display_options['fields']['field_date_checked']['table'] = 'field_data_field_date_checked';
  $handler->display->display_options['fields']['field_date_checked']['field'] = 'field_date_checked';
  $handler->display->display_options['fields']['field_date_checked']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Local Identifier */
  $handler->display->display_options['fields']['field_local_id']['id'] = 'field_local_id';
  $handler->display->display_options['fields']['field_local_id']['table'] = 'field_data_field_local_id';
  $handler->display->display_options['fields']['field_local_id']['field'] = 'field_local_id';
  $handler->display->display_options['fields']['field_local_id']['relationship'] = 'field_record_reference_target_id';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Field: Content: WorldCat Record */
  $handler->display->display_options['fields']['field_worldcat_record_collection']['id'] = 'field_worldcat_record_collection';
  $handler->display->display_options['fields']['field_worldcat_record_collection']['table'] = 'field_data_field_worldcat_record_collection';
  $handler->display->display_options['fields']['field_worldcat_record_collection']['field'] = 'field_worldcat_record_collection';
  $handler->display->display_options['fields']['field_worldcat_record_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_worldcat_record_collection']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_worldcat_record_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_worldcat_record_collection']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_record_reference_target_id';
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
    'additional_search' => 'additional_search',
    'amazon_search' => 'amazon_search',
    'distributor_search' => 'distributor_search',
    'web_search' => 'web_search',
    'worldcat_search' => 'worldcat_search',
  );
  /* Filter criterion: User: Institution (field_institution) */
  $handler->display->display_options['filters']['field_institution_tid']['id'] = 'field_institution_tid';
  $handler->display->display_options['filters']['field_institution_tid']['table'] = 'field_data_field_institution';
  $handler->display->display_options['filters']['field_institution_tid']['field'] = 'field_institution_tid';
  $handler->display->display_options['filters']['field_institution_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_institution_tid']['value'] = '';
  $handler->display->display_options['filters']['field_institution_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_institution_tid']['expose']['operator_id'] = 'field_institution_tid_op';
  $handler->display->display_options['filters']['field_institution_tid']['expose']['label'] = 'Institution';
  $handler->display->display_options['filters']['field_institution_tid']['expose']['operator'] = 'field_institution_tid_op';
  $handler->display->display_options['filters']['field_institution_tid']['expose']['identifier'] = 'field_institution_tid';
  $handler->display->display_options['filters']['field_institution_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_institution_tid']['vocabulary'] = 'institution';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Export as XLS';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'searches/export-xls';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['link_only'] = 'yes';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'searches';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Searches for Export';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'searches/export-csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['link_only'] = 'yes';
  $handler->display->display_options['segment_size'] = '100';
  $export['export_records'] = $view;

  return $export;
}
