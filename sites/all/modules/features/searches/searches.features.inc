<?php
/**
 * @file
 * searches.features.inc
 */

/**
 * Implements hook_views_api().
 */
function searches_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function searches_node_info() {
  $items = array(
    'additional_search' => array(
      'name' => t('Additional search'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'amazon_search' => array(
      'name' => t('Amazon search'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'distributor_search' => array(
      'name' => t('Distributor search'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'web_search' => array(
      'name' => t('Web search'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'worldcat_search' => array(
      'name' => t('WorldCat search'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
