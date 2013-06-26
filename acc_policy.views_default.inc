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
  $view->tag = 'Access';
  $view->base_table = 'node';
  $view->human_name = 'Access Policy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
    200153887 => '200153887',
    52310416 => '52310416',
  );
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
  /* Field: Content: Issue on */
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Affected actors(s)/organization(s) */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected organization';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Best Practice */
  $handler->display->display_options['fields']['field_best_practice']['id'] = 'field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['table'] = 'field_data_field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['field'] = 'field_best_practice';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of issuance';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Effect on a previous policy */
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['id'] = 'field_effect_on_previous_policy';
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['table'] = 'field_data_field_effect_on_previous_policy';
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['field'] = 'field_effect_on_previous_policy';
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Issuing actor/agency/office */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Issuing Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Impact */
  $handler->display->display_options['fields']['field_policy_impact']['id'] = 'field_policy_impact';
  $handler->display->display_options['fields']['field_policy_impact']['table'] = 'field_data_field_policy_impact';
  $handler->display->display_options['fields']['field_policy_impact']['field'] = 'field_policy_impact';
  $handler->display->display_options['fields']['field_policy_impact']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_policy_impact']['delta_offset'] = '0';
  /* Field: Content: Sector(s)/Cluster(s) affected */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Source of Information */
  $handler->display->display_options['fields']['field_source_of_information']['id'] = 'field_source_of_information';
  $handler->display->display_options['fields']['field_source_of_information']['table'] = 'field_data_field_source_of_information';
  $handler->display->display_options['fields']['field_source_of_information']['field'] = 'field_source_of_information';
  /* Field: Field: Access Constraint */
  $handler->display->display_options['fields']['field_access_constraint']['id'] = 'field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['field'] = 'field_access_constraint';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Date -  start date (field_date) */
  $handler->display->display_options['arguments']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['arguments']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_date_value']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_date_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Sector(s)/Cluster(s) affected (field_clusters) */
  $handler->display->display_options['arguments']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['arguments']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Access Constraint (field_access_constraint) */
  $handler->display->display_options['arguments']['field_access_constraint_tid']['id'] = 'field_access_constraint_tid';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['field'] = 'field_access_constraint_tid';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_access_constraint_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Location (field_locations) */
  $handler->display->display_options['arguments']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['arguments']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['arguments']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['arguments']['field_locations_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_locations_tid']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_locations_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_locations_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_locations_tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Policy */
  $handler = $view->new_display('page', 'Policy', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Issue on */
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
  /* Field: Content: Type of policy (informal/formal) */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'field_data_field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['label'] = 'Type of Policy';
  $handler->display->display_options['fields']['field_type_of_policy']['element_label_colon'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'policy';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Policy';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_policy');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Field: Access Constraint */
  $handler->display->display_options['fields']['field_access_constraint']['id'] = 'field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['field'] = 'field_access_constraint';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of issuance';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Issue on */
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
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Issuing actor/agency/office */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Issuing Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Affected actors(s)/organization(s) */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected organization';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Sector(s)/Cluster(s) affected */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Effect on a previous policy */
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['id'] = 'field_effect_on_previous_policy';
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['table'] = 'field_data_field_effect_on_previous_policy';
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['field'] = 'field_effect_on_previous_policy';
  $handler->display->display_options['fields']['field_effect_on_previous_policy']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Best Practice */
  $handler->display->display_options['fields']['field_best_practice']['id'] = 'field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['table'] = 'field_data_field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['field'] = 'field_best_practice';
  /* Field: Content: Impact */
  $handler->display->display_options['fields']['field_policy_impact']['id'] = 'field_policy_impact';
  $handler->display->display_options['fields']['field_policy_impact']['table'] = 'field_data_field_policy_impact';
  $handler->display->display_options['fields']['field_policy_impact']['field'] = 'field_policy_impact';
  $handler->display->display_options['fields']['field_policy_impact']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_policy_impact']['delta_offset'] = '0';
  /* Field: Content: Source of Information */
  $handler->display->display_options['fields']['field_source_of_information']['id'] = 'field_source_of_information';
  $handler->display->display_options['fields']['field_source_of_information']['table'] = 'field_data_field_source_of_information';
  $handler->display->display_options['fields']['field_source_of_information']['field'] = 'field_source_of_information';
  $handler->display->display_options['path'] = 'path/%/%/policy.xls';
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
    t('Issue on'),
    t('Title'),
    t('Type of Policy'),
    t('Description'),
    t('Affected organization'),
    t('Best Practice'),
    t('Date of issuance'),
    t('Effect on a previous policy'),
    t('Issuing Actor'),
    t('Impact'),
    t('Sector(s)/Cluster(s) affected'),
    t('Source of Information'),
    t('Access Constraint'),
    t('Location'),
    t('All'),
    t('Data export'),
  );
  $export['policy'] = $view;

  return $export;
}
