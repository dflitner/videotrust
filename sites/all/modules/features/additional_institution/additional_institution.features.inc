<?php
/**
 * @file
 * additional_institution.features.inc
 */

/**
 * Implements hook_views_api().
 */
function additional_institution_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function additional_institution_flag_default_flags() {
  $flags = array();
  // Exported flag: "Additional Institution".
  $flags['additional_institution'] = array(
    'entity_type' => 'node',
    'title' => 'Additional Institution',
    'global' => 0,
    'types' => array(
      0 => 'record',
    ),
    'flag_short' => 'My institution owns this!',
    'flag_long' => '',
    'flag_message' => 'Your institution has been added to this record.',
    'unflag_short' => 'My institution does not own this',
    'unflag_long' => '',
    'unflag_message' => 'Your institution will be removed from this record.',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Please enter local information',
    'unflag_confirmation' => 'Are you sure you want to remove your institution from this record?',
    'api_version' => 3,
    'module' => 'additional_institution',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
