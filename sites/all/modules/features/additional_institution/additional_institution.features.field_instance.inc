<?php
/**
 * @file
 * additional_institution.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function additional_institution_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'flagging-additional_institution-field_local_id'.
  $field_instances['flagging-additional_institution-field_local_id'] = array(
    'bundle' => 'additional_institution',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'flagging',
    'field_name' => 'field_local_id',
    'label' => 'Local Identifier',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'flagging-additional_institution-field_notes'.
  $field_instances['flagging-additional_institution-field_notes'] = array(
    'bundle' => 'additional_institution',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'flagging',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Local Identifier');
  t('Notes');

  return $field_instances;
}
