<?php
/**
 * @file
 * acc_policy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_policy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'policy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Policy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Date of Issuance */
  $handler->display->display_options['fields']['field_date_of_issuance']['id'] = 'field_date_of_issuance';
  $handler->display->display_options['fields']['field_date_of_issuance']['table'] = 'field_data_field_date_of_issuance';
  $handler->display->display_options['fields']['field_date_of_issuance']['field'] = 'field_date_of_issuance';
  $handler->display->display_options['fields']['field_date_of_issuance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_issuance']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Type of policy (informal/formal) */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'field_data_field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['label'] = 'Type of Policy';
  $handler->display->display_options['fields']['field_type_of_policy']['element_label_colon'] = FALSE;
  /* Field: Field: Admin1/Admin2 */
  $handler->display->display_options['fields']['field_admin1_2']['id'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['label'] = 'Geographical Coverage';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
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
    'policy' => 'policy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type of policy (informal/formal) (field_type_of_policy) */
  $handler->display->display_options['filters']['field_type_of_policy_tid']['id'] = 'field_type_of_policy_tid';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['table'] = 'field_data_field_type_of_policy';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['field'] = 'field_type_of_policy_tid';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_of_policy_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_of_policy_tid']['expose']['operator_id'] = 'field_type_of_policy_tid_op';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['expose']['label'] = 'Type of Policy';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['expose']['operator'] = 'field_type_of_policy_tid_op';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['expose']['identifier'] = 'field_type_of_policy_tid';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_of_policy_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['vocabulary'] = 'policy_type';
  $handler->display->display_options['filters']['field_type_of_policy_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Date of Issuance (field_date_of_issuance) */
  $handler->display->display_options['filters']['field_date_of_issuance_value']['id'] = 'field_date_of_issuance_value';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['table'] = 'field_data_field_date_of_issuance';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['field'] = 'field_date_of_issuance_value';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_of_issuance_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_of_issuance_value']['expose']['operator_id'] = 'field_date_of_issuance_value_op';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['expose']['label'] = 'Date of Issuance';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['expose']['operator'] = 'field_date_of_issuance_value_op';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['expose']['identifier'] = 'field_date_of_issuance_value';
  $handler->display->display_options['filters']['field_date_of_issuance_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_of_issuance_value']['form_type'] = 'date_popup';

  /* Display: Policy */
  $handler = $view->new_display('page', 'Policy', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'policy';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_policy');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'path/%/%/policy';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['policy'] = array(
    t('Master'),
    t('Policy'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date of Issuance'),
    t('Title'),
    t('Type of Policy'),
    t('Geographical Coverage'),
    t('Description'),
    t('Data export'),
  );
  $export['policy'] = $view;

  return $export;
}
