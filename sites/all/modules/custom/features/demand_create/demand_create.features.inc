<?php
/**
 * @file
 * demand_create.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demand_create_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function demand_create_default_profile2_type() {
  $items = array();
  $items['demand_create'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "demand_create",
    "label" : "\\u0424\\u043e\\u0440\\u043c\\u0438\\u0440\\u043e\\u0432\\u0430\\u043d\\u0438\\u0435 \\u0442\\u0440\\u0435\\u0431\\u043e\\u0432\\u0430\\u043d\\u0438\\u0439",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
