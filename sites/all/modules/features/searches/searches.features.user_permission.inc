<?php
/**
 * @file
 * searches.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function searches_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create additional_search content'.
  $permissions['create additional_search content'] = array(
    'name' => 'create additional_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create amazon_search content'.
  $permissions['create amazon_search content'] = array(
    'name' => 'create amazon_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create distributor_search content'.
  $permissions['create distributor_search content'] = array(
    'name' => 'create distributor_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create web_search content'.
  $permissions['create web_search content'] = array(
    'name' => 'create web_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create worldcat_search content'.
  $permissions['create worldcat_search content'] = array(
    'name' => 'create worldcat_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any additional_search content'.
  $permissions['delete any additional_search content'] = array(
    'name' => 'delete any additional_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any amazon_search content'.
  $permissions['delete any amazon_search content'] = array(
    'name' => 'delete any amazon_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any distributor_search content'.
  $permissions['delete any distributor_search content'] = array(
    'name' => 'delete any distributor_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any web_search content'.
  $permissions['delete any web_search content'] = array(
    'name' => 'delete any web_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any worldcat_search content'.
  $permissions['delete any worldcat_search content'] = array(
    'name' => 'delete any worldcat_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own additional_search content'.
  $permissions['delete own additional_search content'] = array(
    'name' => 'delete own additional_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own amazon_search content'.
  $permissions['delete own amazon_search content'] = array(
    'name' => 'delete own amazon_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own distributor_search content'.
  $permissions['delete own distributor_search content'] = array(
    'name' => 'delete own distributor_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own web_search content'.
  $permissions['delete own web_search content'] = array(
    'name' => 'delete own web_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own worldcat_search content'.
  $permissions['delete own worldcat_search content'] = array(
    'name' => 'delete own worldcat_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any additional_search content'.
  $permissions['edit any additional_search content'] = array(
    'name' => 'edit any additional_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any amazon_search content'.
  $permissions['edit any amazon_search content'] = array(
    'name' => 'edit any amazon_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any distributor_search content'.
  $permissions['edit any distributor_search content'] = array(
    'name' => 'edit any distributor_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any web_search content'.
  $permissions['edit any web_search content'] = array(
    'name' => 'edit any web_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any worldcat_search content'.
  $permissions['edit any worldcat_search content'] = array(
    'name' => 'edit any worldcat_search content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own additional_search content'.
  $permissions['edit own additional_search content'] = array(
    'name' => 'edit own additional_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own amazon_search content'.
  $permissions['edit own amazon_search content'] = array(
    'name' => 'edit own amazon_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own distributor_search content'.
  $permissions['edit own distributor_search content'] = array(
    'name' => 'edit own distributor_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own web_search content'.
  $permissions['edit own web_search content'] = array(
    'name' => 'edit own web_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own worldcat_search content'.
  $permissions['edit own worldcat_search content'] = array(
    'name' => 'edit own worldcat_search content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
