<?php
/**
 * @file
 * record.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function record_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create record content'.
  $permissions['create record content'] = array(
    'name' => 'create record content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any record content'.
  $permissions['delete any record content'] = array(
    'name' => 'delete any record content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own record content'.
  $permissions['delete own record content'] = array(
    'name' => 'delete own record content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any record content'.
  $permissions['edit any record content'] = array(
    'name' => 'edit any record content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own record content'.
  $permissions['edit own record content'] = array(
    'name' => 'edit own record content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
