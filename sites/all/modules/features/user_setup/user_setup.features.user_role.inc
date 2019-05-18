<?php
/**
 * @file
 * user_setup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_setup_user_default_roles() {
  $roles = array();

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => 4,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 3,
  );

  return $roles;
}
