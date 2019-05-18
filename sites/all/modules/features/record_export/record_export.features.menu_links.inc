<?php
/**
 * @file
 * record_export.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function record_export_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_searches-for-export:searches
  $menu_links['main-menu_searches-for-export:searches'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'searches',
    'router_path' => 'searches',
    'link_title' => 'Searches for Export',
    'options' => array(
      'identifier' => 'main-menu_searches-for-export:searches',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Searches for Export');


  return $menu_links;
}
