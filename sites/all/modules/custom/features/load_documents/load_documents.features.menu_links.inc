<?php
/**
 * @file
 * load_documents.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function load_documents_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_file-entity-paths-settings:admin/config/media/fe-paths.
  $menu_links['management_file-entity-paths-settings:admin/config/media/fe-paths'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/fe-paths',
    'router_path' => 'admin/config/media/fe-paths',
    'link_title' => 'File Entity Paths settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure custom paths for file entities',
      ),
      'alter' => TRUE,
      'identifier' => 'management_file-entity-paths-settings:admin/config/media/fe-paths',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File Entity Paths settings');

  return $menu_links;
}
