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
  $view->name = 'acc_policy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Access Policy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Access Policy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Date -  start date (field_date) */
  $handler->display->display_options['arguments']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['arguments']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_date_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type of policy (field_type_of_policy) */
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['id'] = 'field_type_of_policy_tid';
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['table'] = 'field_data_field_type_of_policy';
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['field'] = 'field_type_of_policy_tid';
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_type_of_policy_tid']['summary_options']['items_per_page'] = '25';
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
    'acc_policy' => 'acc_policy',
  );

  /* Display: Policy Page */
  $handler = $view->new_display('page', 'Policy Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
    200153887 => '200153887',
    52310416 => '52310416',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of issunce';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Issuing actor / agency';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type of policy */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'field_data_field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Type of affected organization';
  $handler->display->display_options['fields']['field_organization_type']['delta_offset'] = '0';
  /* Field: Content: Attach File */
  $handler->display->display_options['fields']['field_attach_file']['id'] = 'field_attach_file';
  $handler->display->display_options['fields']['field_attach_file']['table'] = 'field_data_field_attach_file';
  $handler->display->display_options['fields']['field_attach_file']['field'] = 'field_attach_file';
  $handler->display->display_options['fields']['field_attach_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attach_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_attach_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  $handler->display->display_options['fields']['field_attach_file']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'access/access-policy';

  /* Display: XLS Policy */
  $handler = $view->new_display('views_data_export', 'XLS Policy', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Action Taken Restrictions on movement within country (field_acc_action_taken) */
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['id'] = 'field_acc_action_taken_value';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['table'] = 'field_data_field_acc_action_taken';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['field'] = 'field_acc_action_taken_value';
  $handler->display->display_options['relationships']['field_acc_action_taken_value']['delta'] = '-1';
  /* Relationship: Content: Impact Policy (field_impact_policy) */
  $handler->display->display_options['relationships']['field_impact_policy_value']['id'] = 'field_impact_policy_value';
  $handler->display->display_options['relationships']['field_impact_policy_value']['table'] = 'field_data_field_impact_policy';
  $handler->display->display_options['relationships']['field_impact_policy_value']['field'] = 'field_impact_policy_value';
  $handler->display->display_options['relationships']['field_impact_policy_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Attach File */
  $handler->display->display_options['fields']['field_attach_file']['id'] = 'field_attach_file';
  $handler->display->display_options['fields']['field_attach_file']['table'] = 'field_data_field_attach_file';
  $handler->display->display_options['fields']['field_attach_file']['field'] = 'field_attach_file';
  $handler->display->display_options['fields']['field_attach_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attach_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_attach_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  $handler->display->display_options['fields']['field_attach_file']['delta_offset'] = '0';
  /* Field: Content: Best Practice */
  $handler->display->display_options['fields']['field_best_practice']['id'] = 'field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['table'] = 'field_data_field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['field'] = 'field_best_practice';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of issunce';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Effective dates */
  $handler->display->display_options['fields']['field_effective_dates']['id'] = 'field_effective_dates';
  $handler->display->display_options['fields']['field_effective_dates']['table'] = 'field_data_field_effective_dates';
  $handler->display->display_options['fields']['field_effective_dates']['field'] = 'field_effective_dates';
  $handler->display->display_options['fields']['field_effective_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Effects on previous policy  */
  $handler->display->display_options['fields']['field_effects_on_previous_policy']['id'] = 'field_effects_on_previous_policy';
  $handler->display->display_options['fields']['field_effects_on_previous_policy']['table'] = 'field_data_field_effects_on_previous_policy';
  $handler->display->display_options['fields']['field_effects_on_previous_policy']['field'] = 'field_effects_on_previous_policy';
  $handler->display->display_options['fields']['field_effects_on_previous_policy']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_effects_on_previous_policy']['delta_offset'] = '0';
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Issuing actor / agency';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Source of info */
  $handler->display->display_options['fields']['field_source_of_info']['id'] = 'field_source_of_info';
  $handler->display->display_options['fields']['field_source_of_info']['table'] = 'field_data_field_source_of_info';
  $handler->display->display_options['fields']['field_source_of_info']['field'] = 'field_source_of_info';
  /* Field: Content: Type of policy */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'field_data_field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Effected Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['delta_offset'] = '0';
  /* Field: Field: Access Constraint */
  $handler->display->display_options['fields']['field_access_constraint']['id'] = 'field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['field'] = 'field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field collection item: Impact */
  $handler->display->display_options['fields']['field_impact_policy_text']['id'] = 'field_impact_policy_text';
  $handler->display->display_options['fields']['field_impact_policy_text']['table'] = 'field_data_field_impact_policy_text';
  $handler->display->display_options['fields']['field_impact_policy_text']['field'] = 'field_impact_policy_text';
  $handler->display->display_options['fields']['field_impact_policy_text']['relationship'] = 'field_acc_action_taken_value';
  /* Field: Field collection item: Value */
  $handler->display->display_options['fields']['field_value']['id'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['table'] = 'field_data_field_value';
  $handler->display->display_options['fields']['field_value']['field'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['relationship'] = 'field_impact_policy_value';
  $handler->display->display_options['fields']['field_value']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Action taken date */
  $handler->display->display_options['fields']['field_action_taken_date']['id'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['table'] = 'field_data_field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['field'] = 'field_action_taken_date';
  $handler->display->display_options['fields']['field_action_taken_date']['relationship'] = 'field_acc_action_taken_value';
  /* Field: Field collection item: Action taken description */
  $handler->display->display_options['fields']['field_action_taken_description']['id'] = 'field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['table'] = 'field_data_field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['field'] = 'field_action_taken_description';
  $handler->display->display_options['fields']['field_action_taken_description']['relationship'] = 'field_acc_action_taken_value';
  /* Field: Field collection item: Action taken type */
  $handler->display->display_options['fields']['field_action_taken_type']['id'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['table'] = 'field_data_field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['field'] = 'field_action_taken_type';
  $handler->display->display_options['fields']['field_action_taken_type']['relationship'] = 'field_acc_action_taken_value';
  $handler->display->display_options['path'] = 'policy.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['acc_policy'] = array(
    t('Master'),
    t('Access Policy'),
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
    t('Title'),
    t('All'),
    t('Policy Page'),
    t('Date of issunce'),
    t('Issuing actor / agency'),
    t('Type of policy'),
    t('Type of affected organization'),
    t('Attach File'),
    t('XLS Policy'),
    t('field collection item from field_acc_action_taken'),
    t('field collection item from field_impact_policy'),
    t('Best Practice'),
    t('Description'),
    t('Effective dates'),
    t('Effects on previous policy '),
    t('Source of info'),
    t('Effected Organization Type'),
    t('Access Constraint'),
    t('Sector'),
    t('Impact'),
    t('Value'),
    t('Action taken date'),
    t('Action taken description'),
    t('Action taken type'),
  );
  $export['acc_policy'] = $view;

  return $export;
}
