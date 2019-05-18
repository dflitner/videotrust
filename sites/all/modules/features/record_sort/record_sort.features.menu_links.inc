<?php
/**
 * @file
 * record_sort.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function record_sort_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_all-titles:records
  $menu_links['main-menu_all-titles:records'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'records',
    'router_path' => 'records',
    'link_title' => 'All Titles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_all-titles:records',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All Titles');


  return $menu_links;
}
