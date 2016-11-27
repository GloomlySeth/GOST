<?php
/**
 * @file
 * menu_left_menu_top.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_left_menu_top_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-left-menu.
  $menus['menu-left-menu'] = array(
    'menu_name' => 'menu-left-menu',
    'title' => 'Left menu',
    'description' => '',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Left menu');
  t('Top menu');

  return $menus;
}
