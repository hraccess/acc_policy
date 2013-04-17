<?php
/**
 * @file
 * acc_policy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_policy_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function acc_policy_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function acc_policy_node_info() {
  $items = array(
    'policy' => array(
      'name' => t('Policy'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
