<?php
/**
 * @file
 * record.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function record_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibinfo|node|record|default';
  $field_group->group_name = 'group_bibinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'record';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bibliographic Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_distributor',
      1 => 'field_format',
      2 => 'field_isbn',
      3 => 'field_publication_date',
      4 => 'field_publication_notes',
      5 => 'field_publisher',
      6 => 'field_series',
      7 => 'field_series_title',
      8 => 'field_title',
      9 => 'field_volume_titles',
      10 => 'field_worldcat_record',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bibliographic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bibinfo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bibinfo|node|record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibinfo|node|record|form';
  $field_group->group_name = 'group_bibinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bibliographic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_distributor',
      1 => 'field_format',
      2 => 'field_isbn',
      3 => 'field_publication_date',
      4 => 'field_publication_notes',
      5 => 'field_publisher',
      6 => 'field_series',
      7 => 'field_series_title',
      8 => 'field_title',
      9 => 'field_volume_titles',
      10 => 'field_local_id',
      11 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bibliographic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bibinfo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bibinfo|node|record|form'] = $field_group;

  return $export;
}
