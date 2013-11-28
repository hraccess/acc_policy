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

  // Exported permission: 'administer acc_type_of_polict vocabulary terms'.
  $permissions['administer acc_type_of_polict vocabulary terms'] = array(
    'name' => 'administer acc_type_of_polict vocabulary terms',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'clear acc_csv_policy_type feeds'.
  $permissions['clear acc_csv_policy_type feeds'] = array(
    'name' => 'clear acc_csv_policy_type feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'delete terms in acc_type_of_polict'.
  $permissions['delete terms in acc_type_of_polict'] = array(
    'name' => 'delete terms in acc_type_of_polict',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_type_of_polict'.
  $permissions['edit terms in acc_type_of_polict'] = array(
    'name' => 'edit terms in acc_type_of_polict',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import acc_csv_policy_type feeds'.
  $permissions['import acc_csv_policy_type feeds'] = array(
    'name' => 'import acc_csv_policy_type feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper acc_csv_policy_type'.
  $permissions['tamper acc_csv_policy_type'] = array(
    'name' => 'tamper acc_csv_policy_type',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock acc_csv_policy_type feeds'.
  $permissions['unlock acc_csv_policy_type feeds'] = array(
    'name' => 'unlock acc_csv_policy_type feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
