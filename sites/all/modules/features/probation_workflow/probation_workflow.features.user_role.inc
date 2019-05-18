<?php
/**
 * @file
 * probation_workflow.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function probation_workflow_user_default_roles() {
  $roles = array();

  // Exported role: Probational.
  $roles['Probational'] = array(
    'name' => 'Probational',
    'weight' => 5,
  );

  return $roles;
}
