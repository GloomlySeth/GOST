<?php
/**
 * @file
 * demand_create_content_type_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demand_create_content_type__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function demand_create_content_type__node_info() {
  $items = array(
    'demand_create' => array(
      'name' => t('Формирование требований'),
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
