<?php
/**
 * @file
 * record.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function record_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-title:node/add/record
  $menu_links['main-menu_add-title:node/add/record'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/record',
    'router_path' => 'node/add',
    'link_title' => 'Add Title',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-title:node/add/record',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Title');


  return $menu_links;
}
