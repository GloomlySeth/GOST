<?php
/**
 * @file
 * menu_left_menu_top.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_left_menu_top_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-left-menu_--:menutoken/58373ea2639e9.
  $menu_links['menu-left-menu_--:menutoken/58373ea2639e9'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'menutoken/58373ea2639e9',
    'router_path' => 'menutoken/%',
    'link_title' => 'Информация о компании',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/58373dfb7b55e',
      'menu_token_link_path' => 'user/[current-user:uid]/edit/company_info',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'identifier' => 'menu-left-menu_--:menutoken/58373ea2639e9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-left-menu_-:menutoken/58373e3107af8.
  $menu_links['menu-left-menu_-:menutoken/58373e3107af8'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'menutoken/58373e3107af8',
    'router_path' => 'menutoken/%',
    'link_title' => 'Личная информация',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/583737cf71fa8',
      'menu_token_link_path' => 'user/[current-user:uid]/edit',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'identifier' => 'menu-left-menu_-:menutoken/58373e3107af8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-left-menu_-:node/add/demand-create.
  $menu_links['menu-left-menu_-:node/add/demand-create'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'node/add/demand-create',
    'router_path' => 'node/add/demand-create',
    'link_title' => 'Формирование требований',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/58373e5b7e681',
      'identifier' => 'menu-left-menu_-:node/add/demand-create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-left-menu_-:requirements_list.
  $menu_links['menu-left-menu_-:requirements_list'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'requirements_list',
    'router_path' => 'requirements_list',
    'link_title' => 'Список требований',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_-:requirements_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_:<front>.
  $menu_links['menu-top-menu_:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Отзывы',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Информация о компании');
  t('Личная информация');
  t('Отзывы');
  t('Список требований');
  t('Формирование требований');

  return $menu_links;
}
