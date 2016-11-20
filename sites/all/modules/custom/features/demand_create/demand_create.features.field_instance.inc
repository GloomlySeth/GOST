<?php
/**
 * @file
 * demand_create.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function demand_create_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_list_number_1-field_list_number_division2'.
  $field_instances['field_collection_item-field_list_number_1-field_list_number_division2'] = array(
    'bundle' => 'field_list_number_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_list_number_division2',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_list_number_1-field_list_number_main2'.
  $field_instances['field_collection_item-field_list_number_1-field_list_number_main2'] = array(
    'bundle' => 'field_list_number_1',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_list_number_main2',
    'label' => 'Применить настройки основной нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_list_number_1-field_list_number_type2'.
  $field_instances['field_collection_item-field_list_number_1-field_list_number_type2'] = array(
    'bundle' => 'field_list_number_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_list_number_type2',
    'label' => 'Тип нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_list_number_1-field_list_number_view2'.
  $field_instances['field_collection_item-field_list_number_1-field_list_number_view2'] = array(
    'bundle' => 'field_list_number_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_list_number_view2',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_title_number_r-field_title_number_division2'.
  $field_instances['field_collection_item-field_title_number_r-field_title_number_division2'] = array(
    'bundle' => 'field_title_number_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_title_number_division2',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_title_number_r-field_title_number_setting2'.
  $field_instances['field_collection_item-field_title_number_r-field_title_number_setting2'] = array(
    'bundle' => 'field_title_number_r',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_title_number_setting2',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_title_number_r-field_title_number_type2'.
  $field_instances['field_collection_item-field_title_number_r-field_title_number_type2'] = array(
    'bundle' => 'field_title_number_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_title_number_type2',
    'label' => 'Тип нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_title_number_r-field_title_number_view2'.
  $field_instances['field_collection_item-field_title_number_r-field_title_number_view2'] = array(
    'bundle' => 'field_title_number_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_title_number_view2',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_contents_main_division'.
  $field_instances['profile2-demand_create-field_contents_main_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 68,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_contents_main_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_contents_main_list'.
  $field_instances['profile2-demand_create-field_contents_main_list'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 70,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_contents_main_list',
    'label' => 'Применить настройки списков',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 69,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_contents_main_position'.
  $field_instances['profile2-demand_create-field_contents_main_position'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 67,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_contents_main_position',
    'label' => 'Расположение содержания',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 66,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_contents_main_setting'.
  $field_instances['profile2-demand_create-field_contents_main_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 69,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_contents_main_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_demand_name'.
  $field_instances['profile2-demand_create-field_demand_name'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_demand_name',
    'label' => 'Название',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_demand_note'.
  $field_instances['profile2-demand_create-field_demand_note'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_demand_note',
    'label' => 'Примечание',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_fields_bottom'.
  $field_instances['profile2-demand_create-field_fields_bottom'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fields_bottom',
    'label' => 'Нижнее',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_fields_left'.
  $field_instances['profile2-demand_create-field_fields_left'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fields_left',
    'label' => 'Левое',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_fields_right'.
  $field_instances['profile2-demand_create-field_fields_right'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fields_right',
    'label' => 'Правое',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_fields_top'.
  $field_instances['profile2-demand_create-field_fields_top'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fields_top',
    'label' => 'Верхнее',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_indents_formula'.
  $field_instances['profile2-demand_create-field_formula_indents_formula'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 107,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_indents_formula',
    'label' => 'От формулы до текста:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 107,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_indents_formula2'.
  $field_instances['profile2-demand_create-field_formula_indents_formula2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 108,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_indents_formula2',
    'label' => 'От формулы до текста:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 108,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_indents_text'.
  $field_instances['profile2-demand_create-field_formula_indents_text'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_indents_text',
    'label' => 'От текста до формулы:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 105,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_indents_text2'.
  $field_instances['profile2-demand_create-field_formula_indents_text2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 106,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_indents_text2',
    'label' => 'От текста до формулы:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 106,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_number_division'.
  $field_instances['profile2-demand_create-field_formula_number_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 111,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_number_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 111,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_number_setting'.
  $field_instances['profile2-demand_create-field_formula_number_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 112,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_number_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 112,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_number_type'.
  $field_instances['profile2-demand_create-field_formula_number_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 109,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_number_type',
    'label' => 'Тип нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 109,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_formula_number_view'.
  $field_instances['profile2-demand_create-field_formula_number_view'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 110,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formula_number_view',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_header_filter_from'.
  $field_instances['profile2-demand_create-field_header_filter_from'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_filter_from',
    'label' => 'Начать с:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_header_filter_skip'.
  $field_instances['profile2-demand_create-field_header_filter_skip'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_filter_skip',
    'label' => 'Пропустить:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_header_number_page'.
  $field_instances['profile2-demand_create-field_header_number_page'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_number_page',
    'label' => 'Выбрать шаблон настроек',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_align'.
  $field_instances['profile2-demand_create-field_header_setting_align'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_align',
    'label' => 'Расположение',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_background'.
  $field_instances['profile2-demand_create-field_header_setting_background'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_background',
    'label' => 'Фон текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_color'.
  $field_instances['profile2-demand_create-field_header_setting_color'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_color',
    'label' => 'Цвет текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_font'.
  $field_instances['profile2-demand_create-field_header_setting_font'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_font',
    'label' => 'Шрифт',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_size'.
  $field_instances['profile2-demand_create-field_header_setting_size'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_size',
    'label' => 'Размер',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_text'.
  $field_instances['profile2-demand_create-field_header_setting_text'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_text',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_header_setting_typeface'.
  $field_instances['profile2-demand_create-field_header_setting_typeface'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_header_setting_typeface',
    'label' => 'Начертание',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_list_formatting_indentatio'.
  $field_instances['profile2-demand_create-field_list_formatting_indentatio'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 114,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_formatting_indentatio',
    'label' => 'Отступы от полей:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 114,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_list_formatting_level'.
  $field_instances['profile2-demand_create-field_list_formatting_level'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 113,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_formatting_level',
    'label' => 'Уровень списка:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 113,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_list_formatting_main'.
  $field_instances['profile2-demand_create-field_list_formatting_main'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 116,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_formatting_main',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 116,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_list_formatting_number'.
  $field_instances['profile2-demand_create-field_list_formatting_number'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 115,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_formatting_number',
    'label' => 'Отступы от нумерации:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 115,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_list_formatting_valid'.
  $field_instances['profile2-demand_create-field_list_formatting_valid'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 117,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_formatting_valid',
    'label' => 'Допустимые символы и знаки',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_list_number_1'.
  $field_instances['profile2-demand_create-field_list_number_1'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Добавить',
          'delete' => 'Удалить',
          'description' => TRUE,
          'edit' => 'Редактировать',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 124,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_number_1',
    'label' => 'Нумерация',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 122,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_list_number_division'.
  $field_instances['profile2-demand_create-field_list_number_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 120,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_number_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_list_number_main'.
  $field_instances['profile2-demand_create-field_list_number_main'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 121,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_number_main',
    'label' => 'Применить настройки основной нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_list_number_type'.
  $field_instances['profile2-demand_create-field_list_number_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 118,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_number_type',
    'label' => 'Тип нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_list_number_view'.
  $field_instances['profile2-demand_create-field_list_number_view'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 119,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_list_number_view',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 119,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_columns_division'.
  $field_instances['profile2-demand_create-field_main_columns_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_columns_division',
    'label' => 'Разделитель ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_columns_number'.
  $field_instances['profile2-demand_create-field_main_columns_number'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_columns_number',
    'label' => 'Число столбцов:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_columns_text'.
  $field_instances['profile2-demand_create-field_main_columns_text'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_columns_text',
    'label' => 'Текст',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_columns_width'.
  $field_instances['profile2-demand_create-field_main_columns_width'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_columns_width',
    'label' => 'Столбцы одинаковой ширины',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_font_align'.
  $field_instances['profile2-demand_create-field_main_font_align'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_font_align',
    'label' => 'Расположение',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_font_background'.
  $field_instances['profile2-demand_create-field_main_font_background'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_font_background',
    'label' => 'Фон текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_font_color'.
  $field_instances['profile2-demand_create-field_main_font_color'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_font_color',
    'label' => 'Цвет текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_font_font'.
  $field_instances['profile2-demand_create-field_main_font_font'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_font_font',
    'label' => 'Шрифт',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_font_size'.
  $field_instances['profile2-demand_create-field_main_font_size'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_font_size',
    'label' => 'Размер',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_font_typeface'.
  $field_instances['profile2-demand_create-field_main_font_typeface'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_font_typeface',
    'label' => 'Начертание',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_interval_int'.
  $field_instances['profile2-demand_create-field_main_interval_int'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_int',
    'label' => 'Значение',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_interval_left'.
  $field_instances['profile2-demand_create-field_main_interval_left'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_left',
    'label' => 'Слева',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_interval_mirror'.
  $field_instances['profile2-demand_create-field_main_interval_mirror'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_mirror',
    'label' => 'Зеркальные отступы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_interval_non'.
  $field_instances['profile2-demand_create-field_main_interval_non'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_non',
    'label' => 'Не добавлять интервал между абзацами одного стиля',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_interval_page'.
  $field_instances['profile2-demand_create-field_main_interval_page'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_page',
    'label' => 'Количество строк на страницу',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_interval_page2'.
  $field_instances['profile2-demand_create-field_main_interval_page2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_page2',
    'label' => 'Количество строк на страницу',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_interval_right'.
  $field_instances['profile2-demand_create-field_main_interval_right'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_right',
    'label' => 'Справа',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_interval_shift'.
  $field_instances['profile2-demand_create-field_main_interval_shift'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_shift',
    'label' => 'Добавить переносы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_interval_str'.
  $field_instances['profile2-demand_create-field_main_interval_str'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_interval_str',
    'label' => 'Междустрочный',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_margins_left'.
  $field_instances['profile2-demand_create-field_main_margins_left'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_margins_left',
    'label' => 'Слева',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_main_margins_mirror'.
  $field_instances['profile2-demand_create-field_main_margins_mirror'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_margins_mirror',
    'label' => 'Зеркальные отступы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_margins_on'.
  $field_instances['profile2-demand_create-field_main_margins_on'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_margins_on',
    'label' => 'На',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_margins_right'.
  $field_instances['profile2-demand_create-field_main_margins_right'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_margins_right',
    'label' => 'Справа',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_margins_shift'.
  $field_instances['profile2-demand_create-field_main_margins_shift'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_margins_shift',
    'label' => 'Добавить переносы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_margins_str'.
  $field_instances['profile2-demand_create-field_main_margins_str'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_margins_str',
    'label' => 'Правая строка',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_width_number1'.
  $field_instances['profile2-demand_create-field_main_width_number1'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_width_number1',
    'label' => 'Номер',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_width_number2'.
  $field_instances['profile2-demand_create-field_main_width_number2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_width_number2',
    'label' => 'Номер',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_width_space'.
  $field_instances['profile2-demand_create-field_main_width_space'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_width_space',
    'label' => 'Промежуток',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_width_space2'.
  $field_instances['profile2-demand_create-field_main_width_space2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_width_space2',
    'label' => 'Промежуток',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_width_width'.
  $field_instances['profile2-demand_create-field_main_width_width'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_width_width',
    'label' => 'Ширина:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_main_width_width2'.
  $field_instances['profile2-demand_create-field_main_width_width2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_main_width_width2',
    'label' => 'Ширина',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_number_main_division'.
  $field_instances['profile2-demand_create-field_number_main_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_main_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 52,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_number_main_setting'.
  $field_instances['profile2-demand_create-field_number_main_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_main_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_number_main_type'.
  $field_instances['profile2-demand_create-field_number_main_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_main_type',
    'label' => 'Тип нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_number_main_view'.
  $field_instances['profile2-demand_create-field_number_main_view'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_main_view',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_number_pattern_own'.
  $field_instances['profile2-demand_create-field_number_pattern_own'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_pattern_own',
    'label' => 'Свой вариант:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 55,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_number_pattern_own2'.
  $field_instances['profile2-demand_create-field_number_pattern_own2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_pattern_own2',
    'label' => 'Свой вариант:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_number_pattern_pic'.
  $field_instances['profile2-demand_create-field_number_pattern_pic'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_pattern_pic',
    'label' => 'Шаблон нумерации рисунка:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_number_pattern_table'.
  $field_instances['profile2-demand_create-field_number_pattern_table'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_number_pattern_table',
    'label' => 'Шаблон нумерации таблицы:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_paper_orientation'.
  $field_instances['profile2-demand_create-field_paper_orientation'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_paper_orientation',
    'label' => 'Ориентация',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_paper_size'.
  $field_instances['profile2-demand_create-field_paper_size'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_paper_size',
    'label' => 'Размер бумаги',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_align_pic'.
  $field_instances['profile2-demand_create-field_pic_align_pic'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 76,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_align_pic',
    'label' => 'Размещение рисунка',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_border_color'.
  $field_instances['profile2-demand_create-field_pic_border_color'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorfield',
        'settings' => array(
          'height' => 20,
          'width' => 20,
        ),
        'type' => 'colorfield_color_swatch',
        'weight' => 79,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_border_color',
    'label' => 'Цвет: ',
    'required' => 0,
    'settings' => array(
      'colorfield_colorpicker_type' => 'farbtastic',
      'colorfield_enable_colorpicker' => TRUE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'colorfield',
      'settings' => array(
        'colorfield_colorpicker_type' => 'farbtastic',
        'colorfield_enable_colorpicker' => TRUE,
        'colorfield_options' => array(
          'colorfield_colorpicker_type' => 'minicolors',
          'colorfield_enable_colorpicker' => 1,
        ),
      ),
      'type' => 'colorfield_unified_textfield',
      'weight' => 74,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_pic_border_thickness'.
  $field_instances['profile2-demand_create-field_pic_border_thickness'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 74,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_border_thickness',
    'label' => 'Толщина:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_border_type'.
  $field_instances['profile2-demand_create-field_pic_border_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 75,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_border_type',
    'label' => 'Тип',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 75,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_indents_pic'.
  $field_instances['profile2-demand_create-field_pic_indents_pic'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 84,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_indents_pic',
    'label' => 'Между подписью и рисунком: ',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 83,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_indents_pic2'.
  $field_instances['profile2-demand_create-field_pic_indents_pic2'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 85,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_indents_pic2',
    'label' => 'Между подписью и рисунком:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 84,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_indents_text'.
  $field_instances['profile2-demand_create-field_pic_indents_text'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 82,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_indents_text',
    'label' => 'От подписи рисунка до текста:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 81,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_indents_text2'.
  $field_instances['profile2-demand_create-field_pic_indents_text2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 83,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_indents_text2',
    'label' => 'т подписи рисунка до текста:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 82,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_indents_top'.
  $field_instances['profile2-demand_create-field_pic_indents_top'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 80,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_indents_top',
    'label' => 'От верхнего края рисунка до текста:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 79,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_indents_top2'.
  $field_instances['profile2-demand_create-field_pic_indents_top2'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 81,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_indents_top2',
    'label' => 'От верхнего края рисунка до текста:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 80,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_label_align'.
  $field_instances['profile2-demand_create-field_pic_label_align'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 77,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_label_align',
    'label' => 'Настройки подписи',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_label_setting'.
  $field_instances['profile2-demand_create-field_pic_label_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 78,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_label_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 78,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_pic_number_division'.
  $field_instances['profile2-demand_create-field_pic_number_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 88,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_number_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_number_setting'.
  $field_instances['profile2-demand_create-field_pic_number_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 89,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_number_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 88,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_number_type'.
  $field_instances['profile2-demand_create-field_pic_number_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 86,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_number_type',
    'label' => 'Тип нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 85,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_number_view'.
  $field_instances['profile2-demand_create-field_pic_number_view'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 87,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_number_view',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 86,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_size_1'.
  $field_instances['profile2-demand_create-field_pic_size_1'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 100,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 72,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_size_1',
    'label' => 'Размеры',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_size_2'.
  $field_instances['profile2-demand_create-field_pic_size_2'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 100,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_size_2',
    'label' => 'Размеры',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_pic_size_valid'.
  $field_instances['profile2-demand_create-field_pic_size_valid'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 71,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pic_size_valid',
    'label' => 'Размеры',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_quotes_main_symbol'.
  $field_instances['profile2-demand_create-field_quotes_main_symbol'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 122,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_quotes_main_symbol',
    'label' => 'Символы кавычек:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_setting'.
  $field_instances['profile2-demand_create-field_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_setting',
    'label' => 'Выбрать шаблон настроек',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_align'.
  $field_instances['profile2-demand_create-field_table_label_align'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 93,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_align',
    'label' => 'Расположение',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 92,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_label_background'.
  $field_instances['profile2-demand_create-field_table_label_background'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 96,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_background',
    'label' => 'Фон текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_color'.
  $field_instances['profile2-demand_create-field_table_label_color'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 95,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_color',
    'label' => 'Цвет текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 94,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_label_continue'.
  $field_instances['profile2-demand_create-field_table_label_continue'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 100,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_continue',
    'label' => 'Надпись: "Продолжение таблицы ХХХ"',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 99,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_label_continue2'.
  $field_instances['profile2-demand_create-field_table_label_continue2'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 101,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_continue2',
    'label' => 'Надпись: "Продолжение таблицы ХХХ"',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_font'.
  $field_instances['profile2-demand_create-field_table_label_font'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 91,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_font',
    'label' => 'Шрифт',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 90,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_header'.
  $field_instances['profile2-demand_create-field_table_label_header'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 97,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_header',
    'label' => 'Перенос шапки таблицы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 96,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_line'.
  $field_instances['profile2-demand_create-field_table_label_line'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 99,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_line',
    'label' => 'Нижняя граница при переносе',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 98,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_label_location'.
  $field_instances['profile2-demand_create-field_table_label_location'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 90,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_location',
    'label' => 'Расположение подписи:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 89,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_number'.
  $field_instances['profile2-demand_create-field_table_label_number'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 98,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_number',
    'label' => 'Перенос нумерации колонок',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 97,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_label_size'.
  $field_instances['profile2-demand_create-field_table_label_size'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 92,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_size',
    'label' => 'Размер',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 91,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_label_typeface'.
  $field_instances['profile2-demand_create-field_table_label_typeface'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 94,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_label_typeface',
    'label' => 'Начертание',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 93,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_number_division'.
  $field_instances['profile2-demand_create-field_table_number_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 104,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_number_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 103,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_table_number_setting'.
  $field_instances['profile2-demand_create-field_table_number_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 105,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_number_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 104,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_number_type'.
  $field_instances['profile2-demand_create-field_table_number_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 102,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_number_type',
    'label' => 'Тип нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_table_number_view'.
  $field_instances['profile2-demand_create-field_table_number_view'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 103,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_table_number_view',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_main_level'.
  $field_instances['profile2-demand_create-field_title_main_level'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_main_level',
    'label' => 'Уровень заголовка:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_main_own'.
  $field_instances['profile2-demand_create-field_title_main_own'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_main_own',
    'label' => 'Свой вариант:',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_main_pattern'.
  $field_instances['profile2-demand_create-field_title_main_pattern'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 60,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_main_pattern',
    'label' => 'Шаблон нумерации заголовка:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_main_text'.
  $field_instances['profile2-demand_create-field_title_main_text'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 62,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_main_text',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 61,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_title_number_division'.
  $field_instances['profile2-demand_create-field_title_number_division'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 65,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_number_division',
    'label' => 'Вид разделителя между подписью и текстом:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_number_r'.
  $field_instances['profile2-demand_create-field_title_number_r'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Добавить',
          'delete' => 'Удалить',
          'description' => TRUE,
          'edit' => 'Редактировать',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 123,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_number_r',
    'label' => 'Нумерация',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 66,
    ),
  );

  // Exported field_instance:
  // 'profile2-demand_create-field_title_number_setting'.
  $field_instances['profile2-demand_create-field_title_number_setting'] = array(
    'bundle' => 'demand_create',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 66,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_number_setting',
    'label' => 'Применить настройки основного текста',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_number_type'.
  $field_instances['profile2-demand_create-field_title_number_type'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 63,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_number_type',
    'label' => 'Тип нумерации',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'profile2-demand_create-field_title_number_view'.
  $field_instances['profile2-demand_create-field_title_number_view'] = array(
    'bundle' => 'demand_create',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 64,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_title_number_view',
    'label' => 'Вид нумерации:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 63,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Верхнее');
  t('Вид нумерации:');
  t('Вид разделителя между подписью и текстом:');
  t('Выбрать шаблон настроек');
  t('Добавить переносы');
  t('Допустимые символы и знаки');
  t('Зеркальные отступы');
  t('Значение');
  t('Количество строк на страницу');
  t('Левое');
  t('Между подписью и рисунком:');
  t('Между подписью и рисунком: ');
  t('Междустрочный');
  t('На');
  t('Надпись: "Продолжение таблицы ХХХ"');
  t('Название');
  t('Настройки подписи');
  t('Начать с:');
  t('Начертание');
  t('Не добавлять интервал между абзацами одного стиля');
  t('Нижнее');
  t('Нижняя граница при переносе');
  t('Номер');
  t('Нумерация');
  t('Ориентация');
  t('От верхнего края рисунка до текста:');
  t('От подписи рисунка до текста:');
  t('От текста до формулы:');
  t('От формулы до текста:');
  t('Отступы от нумерации:');
  t('Отступы от полей:');
  t('Перенос нумерации колонок');
  t('Перенос шапки таблицы');
  t('Правая строка');
  t('Правое');
  t('Применить настройки основного текста');
  t('Применить настройки основной нумерации');
  t('Применить настройки списков');
  t('Примечание');
  t('Промежуток');
  t('Пропустить:');
  t('Разделитель ');
  t('Размер');
  t('Размер бумаги');
  t('Размеры');
  t('Размещение рисунка');
  t('Расположение');
  t('Расположение подписи:');
  t('Расположение содержания');
  t('Свой вариант:');
  t('Символы кавычек:');
  t('Слева');
  t('Справа');
  t('Столбцы одинаковой ширины');
  t('Текст');
  t('Тип');
  t('Тип нумерации');
  t('Тип нумерации:');
  t('Толщина:');
  t('Уровень заголовка:');
  t('Уровень списка:');
  t('Фон текста');
  t('Цвет текста');
  t('Цвет: ');
  t('Число столбцов:');
  t('Шаблон нумерации заголовка:');
  t('Шаблон нумерации рисунка:');
  t('Шаблон нумерации таблицы:');
  t('Ширина');
  t('Ширина:');
  t('Шрифт');
  t('т подписи рисунка до текста:');

  return $field_instances;
}
