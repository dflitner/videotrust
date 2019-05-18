<?php
/**
 * @file
 * bios.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bios_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bios_image_default_styles() {
  $styles = array();

  // Exported image style: profile.
  $styles['profile'] = array(
    'label' => 'profile',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bios_node_info() {
  $items = array(
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
