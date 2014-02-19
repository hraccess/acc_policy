<?php
/**
 * @file
 * acc_policy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acc_policy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear acc_type_of_policy feeds'.
  $permissions['clear acc_type_of_policy feeds'] = array(
    'name' => 'clear acc_type_of_policy feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create acc_policy content'.
  $permissions['create acc_policy content'] = array(
    'name' => 'create acc_policy content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any acc_policy content'.
  $permissions['delete any acc_policy content'] = array(
    'name' => 'delete any acc_policy content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own acc_policy content'.
  $permissions['delete own acc_policy content'] = array(
    'name' => 'delete own acc_policy content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in acc_type_of_policy'.
  $permissions['delete terms in acc_type_of_policy'] = array(
    'name' => 'delete terms in acc_type_of_policy',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any acc_policy content'.
  $permissions['edit any acc_policy content'] = array(
    'name' => 'edit any acc_policy content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own acc_policy content'.
  $permissions['edit own acc_policy content'] = array(
    'name' => 'edit own acc_policy content',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in acc_type_of_policy'.
  $permissions['edit terms in acc_type_of_policy'] = array(
    'name' => 'edit terms in acc_type_of_policy',
    'roles' => array(
      'access manager' => 'access manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import acc_type_of_policy feeds'.
  $permissions['import acc_type_of_policy feeds'] = array(
    'name' => 'import acc_type_of_policy feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper acc_type_of_policy'.
  $permissions['tamper acc_type_of_policy'] = array(
    'name' => 'tamper acc_type_of_policy',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper csv_access_policy'.
  $permissions['tamper csv_access_policy'] = array(
    'name' => 'tamper csv_access_policy',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock acc_type_of_policy feeds'.
  $permissions['unlock acc_type_of_policy feeds'] = array(
    'name' => 'unlock acc_type_of_policy feeds',
    'roles' => array(
      'access manager' => 'access manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
