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
  $view->name = 'acc_policies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_acc_policy';
  $view->human_name = 'Access Policies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Access Policies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    229782242 => '229782242',
    147444660 => '147444660',
    52310416 => '52310416',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    30037204 => 0,
    147444660 => 0,
    229782242 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'field_source_of_info' => 'field_source_of_info',
    'field_link_description' => 'field_link_description',
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'master');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Date of issuance */
  $handler->display->display_options['fields']['field_acc_date_policy']['id'] = 'field_acc_date_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['field'] = 'field_acc_date_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Sunmitted By Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Type of policy */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_policy']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_policy']['bypass_access'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'view';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">view</a>';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'access/policies';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'table');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Date of issuance */
  $handler->display->display_options['fields']['field_acc_date_policy']['id'] = 'field_acc_date_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['field'] = 'field_acc_date_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Sunmitted By Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Type of policy */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_policy']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_policy']['bypass_access'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'view';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">view</a>';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'access/policies/table';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'access/policies/list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'policies.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Impacts */
  $handler->display->display_options['relationships']['field_acc_impacts']['id'] = 'field_acc_impacts';
  $handler->display->display_options['relationships']['field_acc_impacts']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['relationships']['field_acc_impacts']['field'] = 'field_acc_impacts';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Type of policy */
  $handler->display->display_options['fields']['field_type_of_policy']['id'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['field'] = 'field_type_of_policy';
  $handler->display->display_options['fields']['field_type_of_policy']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_policy']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_policy']['bypass_access'] = 0;
  /* Field: Indexed Node: Date of issuance */
  $handler->display->display_options['fields']['field_acc_date_policy']['id'] = 'field_acc_date_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['field'] = 'field_acc_date_policy';
  $handler->display->display_options['fields']['field_acc_date_policy']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Effective dates */
  $handler->display->display_options['fields']['field_incident_date']['id'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_incident_date']['field'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Sunmitted By Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Access Constraints */
  $handler->display->display_options['fields']['field_access_constraints']['id'] = 'field_access_constraints';
  $handler->display->display_options['fields']['field_access_constraints']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_access_constraints']['field'] = 'field_access_constraints';
  $handler->display->display_options['fields']['field_access_constraints']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_access_constraints']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_access_constraints']['bypass_access'] = 0;
  /* Field: Indexed Node: Effects on previous policy */
  $handler->display->display_options['fields']['field_eff_prev_policy']['id'] = 'field_eff_prev_policy';
  $handler->display->display_options['fields']['field_eff_prev_policy']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_eff_prev_policy']['field'] = 'field_eff_prev_policy';
  $handler->display->display_options['fields']['field_eff_prev_policy']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_eff_prev_policy']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_eff_prev_policy']['bypass_access'] = 0;
  /* Field: Indexed Node: Source of information */
  $handler->display->display_options['fields']['field_source_of_info']['id'] = 'field_source_of_info';
  $handler->display->display_options['fields']['field_source_of_info']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_source_of_info']['field'] = 'field_source_of_info';
  /* Field: Indexed Node: Best Practice */
  $handler->display->display_options['fields']['field_best_practice']['id'] = 'field_best_practice';
  $handler->display->display_options['fields']['field_best_practice']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_best_practice']['field'] = 'field_best_practice';
  /* Field: Indexed Node: Cluster */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sector/Cluster';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_clusters']['bypass_access'] = 0;
  /* Field: Field collection item: Type of impact */
  $handler->display->display_options['fields']['field_acc_impact_type']['id'] = 'field_acc_impact_type';
  $handler->display->display_options['fields']['field_acc_impact_type']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_acc_impact_type']['field'] = 'field_acc_impact_type';
  $handler->display->display_options['fields']['field_acc_impact_type']['relationship'] = 'field_acc_impacts';
  /* Field: Field collection item: Value */
  $handler->display->display_options['fields']['field_acc_impact_value']['id'] = 'field_acc_impact_value';
  $handler->display->display_options['fields']['field_acc_impact_value']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_acc_impact_value']['field'] = 'field_acc_impact_value';
  $handler->display->display_options['fields']['field_acc_impact_value']['relationship'] = 'field_acc_impacts';
  $handler->display->display_options['fields']['field_acc_impact_value']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Attach a file */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_link_description']['id'] = 'field_link_description';
  $handler->display->display_options['fields']['field_link_description']['table'] = 'search_api_index_acc_policy';
  $handler->display->display_options['fields']['field_link_description']['field'] = 'field_link_description';
  $handler->display->display_options['path'] = 'access/policies/xls';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
  );
  $translatables['acc_policies'] = array(
    t('Master'),
    t('Access Policies'),
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
    t('Node ID'),
    t('.'),
    t(','),
    t('Fulltext search'),
    t('Date of issuance'),
    t('Organization Type'),
    t('Type of policy'),
    t('view'),
    t('<a href="[url]">view</a>'),
    t('Table'),
    t('List'),
    t('XLS'),
    t('Impacts'),
    t('Title'),
    t('Effective dates'),
    t('Sunmitted By Organization Type'),
    t('Access Constraints'),
    t('Effects on previous policy'),
    t('Source of information'),
    t('Best Practice'),
    t('Sector/Cluster'),
    t('Type of impact'),
    t('Value'),
    t('Attach a file'),
    t('Description'),
  );
  $export['acc_policies'] = $view;

  return $export;
}
