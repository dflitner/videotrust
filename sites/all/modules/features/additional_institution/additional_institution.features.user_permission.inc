<?php
/**
 * @file
 * additional_institution.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function additional_institution_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag additional_institution'.
  $permissions['flag additional_institution'] = array(
    'name' => 'flag additional_institution',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag additional_institution'.
  $permissions['unflag additional_institution'] = array(
    'name' => 'unflag additional_institution',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
