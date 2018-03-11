<?php
/**
 * @file
 * demand_create_content_type_.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function demand_create_content_type__field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_border_1|node|demand_create|form';
  $field_group->group_name = 'group_border_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_margins_r2';
  $field_group->data = array(
    'label' => '',
    'weight' => '85',
    'children' => array(
      0 => 'field_main_margins_str',
      1 => 'field_main_margins_on',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-border-1 field-group-html-element n_border',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_border_1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_border_2|node|demand_create|form';
  $field_group->group_name = 'group_border_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_interval_r2';
  $field_group->data = array(
    'label' => '',
    'weight' => '30',
    'children' => array(
      0 => 'field_main_interval_str',
      1 => 'field_main_interval_int',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-border-2 field-group-html-element n_border',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_border_2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contents_main_r1|node|demand_create|form';
  $field_group->group_name = 'group_contents_main_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contents_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '137',
    'children' => array(
      0 => 'field_contents_main_position',
      1 => 'field_contents_main_division',
      2 => 'field_contents_main_setting',
      3 => 'field_contents_main_list',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contents-main-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_contents_main_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contents_main|node|demand_create|form';
  $field_group->group_name = 'group_contents_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contents';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '32',
    'children' => array(
      0 => 'group_contents_main_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contents-main field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_contents_main|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contents|node|demand_create|form';
  $field_group->group_name = 'group_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Содержание',
    'weight' => '9',
    'children' => array(
      0 => 'group_contents_main',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-contents field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contents|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields_r1|node|demand_create|form';
  $field_group->group_name = 'group_fields_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Поля',
    'weight' => '6',
    'children' => array(
      0 => 'field_fields_top',
      1 => 'field_fields_bottom',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Поля',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fields-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_fields_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields_r2|node|demand_create|form';
  $field_group->group_name = 'group_fields_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Поля',
    'weight' => '7',
    'children' => array(
      0 => 'field_fields_left',
      1 => 'field_fields_right',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Поля',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fields-r2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_fields_r2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|node|demand_create|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Поля',
    'weight' => '2',
    'children' => array(
      0 => 'group_fields_r1',
      1 => 'group_fields_r2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Поля',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_fields|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_1|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_r1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '166',
    'children' => array(
      0 => 'group_formula_indents_r11',
      1 => 'group_formula_indents_r12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_2|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_r1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '170',
    'children' => array(
      0 => 'group_formula_indents_r13',
      1 => 'group_formula_indents_r14',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-2 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r11|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '166',
    'children' => array(
      0 => 'field_formula_indents_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-r11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r12|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '167',
    'children' => array(
      0 => 'field_formula_indents_text2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-r12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r13|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_2';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '170',
    'children' => array(
      0 => 'field_formula_indents_formula',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-r13 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r13|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r14|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_2';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '171',
    'children' => array(
      0 => 'field_formula_indents_formula2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-r14 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r14|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r1|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '167',
    'children' => array(
      0 => 'group_formula_indents_1',
      1 => 'group_formula_indents_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '166',
    'children' => array(
      0 => 'group_formula_indents_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-indents field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_formula_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_number';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '152',
    'children' => array(
      0 => 'field_formula_number_type',
      1 => 'field_formula_number_setting',
      2 => 'field_formula_number_view',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки нумерации',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-number-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_number_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_number|node|demand_create|form';
  $field_group->group_name = 'group_formula_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '168',
    'children' => array(
      0 => 'group_formula_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки нумерации',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-formula-number field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_formula_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula|node|demand_create|form';
  $field_group->group_name = 'group_formula';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Формулы',
    'weight' => '11',
    'children' => array(
      0 => 'group_formula_indents',
      1 => 'group_formula_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-formula field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_filter_r1|node|demand_create|form';
  $field_group->group_name = 'group_header_filter_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_filter';
  $field_group->data = array(
    'label' => 'Фильтрация нумерации страниц',
    'weight' => '25',
    'children' => array(
      0 => 'field_header_filter_from',
      1 => 'field_header_filter_skip',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Фильтрация нумерации страниц',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-filter-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_filter_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_filter|node|demand_create|form';
  $field_group->group_name = 'group_header_filter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Фильтрация нумерации страниц',
    'weight' => '25',
    'children' => array(
      0 => 'group_header_filter_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Фильтрация нумерации страниц',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-filter field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_filter|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_header_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_number';
  $field_group->data = array(
    'label' => 'Расположение номера страницы',
    'weight' => '79',
    'children' => array(
      0 => 'field_header_number_page',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Расположение номера страницы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-number-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_number_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_number|node|demand_create|form';
  $field_group->group_name = 'group_header_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Расположение номера страницы',
    'weight' => '23',
    'children' => array(
      0 => 'group_header_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Расположение номера страницы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-number field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_1|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_r1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '65',
    'children' => array(
      0 => 'group_header_setting_r11',
      1 => 'group_header_setting_r12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-1 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_2|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_r1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '67',
    'children' => array(
      0 => 'field_header_setting_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_3|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_r1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '66',
    'children' => array(
      0 => 'group_header_setting_r13',
      1 => 'group_header_setting_r14',
      2 => 'group_header_setting_r15',
      3 => 'group_header_setting_r16',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-3 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_3|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r11|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '65',
    'children' => array(
      0 => 'field_header_setting_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r12|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '66',
    'children' => array(
      0 => 'field_header_setting_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r13|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '69',
    'children' => array(
      0 => 'field_header_setting_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r13 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r13|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r14|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '70',
    'children' => array(
      0 => 'field_header_setting_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r14 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r14|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r15|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r15';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '71',
    'children' => array(
      0 => 'field_header_setting_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r15 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r15|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r16|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r16';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '72',
    'children' => array(
      0 => 'field_header_setting_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r16 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r16|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r1|node|demand_create|form';
  $field_group->group_name = 'group_header_setting_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '22',
    'children' => array(
      0 => 'group_header_setting_1',
      1 => 'group_header_setting_2',
      2 => 'group_header_setting_3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting|node|demand_create|form';
  $field_group->group_name = 'group_header_setting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '17',
    'children' => array(
      0 => 'group_header_setting_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройка текста',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-header-setting field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header_setting|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|demand_create|form';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Колонтитулы',
    'weight' => '5',
    'children' => array(
      0 => 'group_header_filter',
      1 => 'group_header_number',
      2 => 'group_header_setting',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Колонтитулы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_formatting_r1|node|demand_create|form';
  $field_group->group_name = 'group_list_formatting_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list_formatting';
  $field_group->data = array(
    'label' => 'Форматирование',
    'weight' => '120',
    'children' => array(
      0 => 'field_list_formatting_level',
      1 => 'field_list_formatting_indentatio',
      2 => 'field_list_formatting_number',
      3 => 'field_list_formatting_main',
      4 => 'field_list_formatting_valid',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Форматирование',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-list-formatting-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_formatting_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_formatting|node|demand_create|form';
  $field_group->group_name = 'group_list_formatting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list';
  $field_group->data = array(
    'label' => 'Форматирование',
    'weight' => '29',
    'children' => array(
      0 => 'group_list_formatting_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Форматирование',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-list-formatting field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_formatting|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_list_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list_number';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '154',
    'children' => array(
      0 => 'field_list_number_1',
      1 => 'field_list_number_type',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-list-number-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_number_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_number|node|demand_create|form';
  $field_group->group_name = 'group_list_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '38',
    'children' => array(
      0 => 'group_list_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-list-number field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|node|demand_create|form';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Списки',
    'weight' => '12',
    'children' => array(
      0 => 'group_list_formatting',
      1 => 'group_list_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-list field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_list|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_f1|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_f1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_r1';
  $field_group->data = array(
    'label' => '',
    'weight' => '97',
    'children' => array(
      0 => 'field_main_columns_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-columns-f1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_f1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_f2|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_f2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_v2';
  $field_group->data = array(
    'label' => 'Ширина и промежуток',
    'weight' => '101',
    'children' => array(
      0 => 'field_main_columns_width',
      1 => 'group_main_columns_r4',
      2 => 'group_main_columns_r5',
      3 => 'group_main_columns_r6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-columns-f2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_f2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r1|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '27',
    'children' => array(
      0 => 'group_main_columns_f1',
      1 => 'group_main_columns_v2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r2|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_v2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '99',
    'children' => array(
      0 => 'field_main_columns_number',
      1 => 'field_main_columns_division',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-r2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_r2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r3|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_r3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_v2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '100',
    'children' => array(
      0 => 'field_main_columns_division',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-r3 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_r3|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r4|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_r4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_f2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '103',
    'children' => array(
      0 => 'field_main_width_number1',
      1 => 'field_main_width_number2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-r4 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_r4|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r5|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_r5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_f2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '104',
    'children' => array(
      0 => 'field_main_width_width',
      1 => 'field_main_width_width2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-r5 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_r5|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r6|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_r6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_f2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '105',
    'children' => array(
      0 => 'field_main_width_space',
      1 => 'field_main_width_space2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-r6 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_r6|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_v2|node|demand_create|form';
  $field_group->group_name = 'group_main_columns_v2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_r1';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '98',
    'children' => array(
      0 => 'group_main_columns_f2',
      1 => 'group_main_columns_r2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-v2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns_v2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns|node|demand_create|form';
  $field_group->group_name = 'group_main_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '23',
    'children' => array(
      0 => 'group_main_columns_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Колонки',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_columns|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_1|node|demand_create|form';
  $field_group->group_name = 'group_main_font_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_r1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '154',
    'children' => array(
      0 => 'group_main_font_r11',
      1 => 'group_main_font_r12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-1 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_2|node|demand_create|form';
  $field_group->group_name = 'group_main_font_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_r1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '158',
    'children' => array(
      0 => 'group_main_font_r13',
      1 => 'group_main_font_r14',
      2 => 'group_main_font_r15',
      3 => 'group_main_font_r16',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-2 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r11|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '154',
    'children' => array(
      0 => 'field_main_font_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r12|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '155',
    'children' => array(
      0 => 'field_main_font_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r13|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '158',
    'children' => array(
      0 => 'field_main_font_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r13 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r13|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r14|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '159',
    'children' => array(
      0 => 'field_main_font_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r14 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r14|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r15|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r15';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '160',
    'children' => array(
      0 => 'field_main_font_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r15 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r15|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r16|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r16';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '161',
    'children' => array(
      0 => 'field_main_font_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r16 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r16|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r1|node|demand_create|form';
  $field_group->group_name = 'group_main_font_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '21',
    'children' => array(
      0 => 'group_main_font_1',
      1 => 'group_main_font_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font|node|demand_create|form';
  $field_group->group_name = 'group_main_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '20',
    'children' => array(
      0 => 'group_main_font_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-font field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_font|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_interval_r1|node|demand_create|form';
  $field_group->group_name = 'group_main_interval_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_interval';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '93',
    'children' => array(
      0 => 'field_main_interval_page',
      1 => 'field_main_interval_left',
      2 => 'field_main_interval_right',
      3 => 'field_main_interval_mirror',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-interval-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_interval_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_interval_r2|node|demand_create|form';
  $field_group->group_name = 'group_main_interval_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_interval';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '94',
    'children' => array(
      0 => 'field_main_interval_page2',
      1 => 'field_main_margins_shift',
      2 => 'group_border_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-interval-r2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_interval_r2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_interval|node|demand_create|form';
  $field_group->group_name = 'group_main_interval';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '22',
    'children' => array(
      0 => 'field_main_interval_non',
      1 => 'group_main_interval_r1',
      2 => 'group_main_interval_r2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Интервал',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-interval field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_interval|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_margins_r1|node|demand_create|form';
  $field_group->group_name = 'group_main_margins_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_margins';
  $field_group->data = array(
    'label' => 'Отступы',
    'weight' => '81',
    'children' => array(
      0 => 'field_main_margins_left',
      1 => 'field_main_margins_right',
      2 => 'field_main_margins_mirror',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-margins-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_margins_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_margins_r2|node|demand_create|form';
  $field_group->group_name = 'group_main_margins_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_margins';
  $field_group->data = array(
    'label' => 'Отступы',
    'weight' => '82',
    'children' => array(
      0 => 'field_main_interval_shift',
      1 => 'group_border_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-margins-r2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_margins_r2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_margins|node|demand_create|form';
  $field_group->group_name = 'group_main_margins';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Отступы',
    'weight' => '21',
    'children' => array(
      0 => 'group_main_margins_r1',
      1 => 'group_main_margins_r2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-margins field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_main_margins|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|demand_create|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Основной текст',
    'weight' => '6',
    'children' => array(
      0 => 'group_main_columns',
      1 => 'group_main_font',
      2 => 'group_main_interval',
      3 => 'group_main_margins',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-main field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_main_r1|node|demand_create|form';
  $field_group->group_name = 'group_number_main_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '115',
    'children' => array(
      0 => 'field_number_main_type',
      1 => 'field_number_main_view',
      2 => 'field_number_main_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-number-main-r1 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_number_main_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_main|node|demand_create|form';
  $field_group->group_name = 'group_number_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '28',
    'children' => array(
      0 => 'group_number_main_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-number-main field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_number_main|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_pattern_r1|node|demand_create|form';
  $field_group->group_name = 'group_number_pattern_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number_pattern';
  $field_group->data = array(
    'label' => 'Шаблоны',
    'weight' => '147',
    'children' => array(
      0 => 'field_number_pattern_pic',
      1 => 'field_number_pattern_own',
      2 => 'field_number_pattern_table',
      3 => 'field_number_pattern_own2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шаблоны',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-number-pattern-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_number_pattern_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_pattern|node|demand_create|form';
  $field_group->group_name = 'group_number_pattern';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number';
  $field_group->data = array(
    'label' => 'Шаблоны',
    'weight' => '34',
    'children' => array(
      0 => 'group_number_pattern_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шаблоны',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-number-pattern field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_number_pattern|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number|node|demand_create|form';
  $field_group->group_name = 'group_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '7',
    'children' => array(
      0 => 'group_number_main',
      1 => 'group_number_pattern',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-number field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper_r1|node|demand_create|form';
  $field_group->group_name = 'group_paper_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paper';
  $field_group->data = array(
    'label' => 'Размер бумаги',
    'weight' => '6',
    'children' => array(
      0 => 'field_paper_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размер бумаги',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-paper-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_paper_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper_r2|node|demand_create|form';
  $field_group->group_name = 'group_paper_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paper';
  $field_group->data = array(
    'label' => 'Размер бумаги',
    'weight' => '7',
    'children' => array(
      0 => 'field_paper_orientation',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размер бумаги',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-paper-r2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_paper_r2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper|node|demand_create|form';
  $field_group->group_name = 'group_paper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Размер бумаги',
    'weight' => '4',
    'children' => array(
      0 => 'group_paper_r1',
      1 => 'group_paper_r2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размер бумаги',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-paper field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_paper|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_align_r1|node|demand_create|form';
  $field_group->group_name = 'group_pic_align_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_align';
  $field_group->data = array(
    'label' => 'Размещение рисунка',
    'weight' => '24',
    'children' => array(
      0 => 'field_pic_align_pic',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размещение рисунка',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-align-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_align_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_align|node|demand_create|form';
  $field_group->group_name = 'group_pic_align';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Размещение рисунка',
    'weight' => '9',
    'children' => array(
      0 => 'group_pic_align_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размещение рисунка',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-align field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_align|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_border_r1|node|demand_create|form';
  $field_group->group_name = 'group_pic_border_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_border';
  $field_group->data = array(
    'label' => 'Границы рисунка',
    'weight' => '20',
    'children' => array(
      0 => 'field_pic_border_thickness',
      1 => 'field_pic_border_color',
      2 => 'field_pic_border_type',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Границы рисунка',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-border-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_border_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_border|node|demand_create|form';
  $field_group->group_name = 'group_pic_border';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Границы рисунка',
    'weight' => '8',
    'children' => array(
      0 => 'group_pic_border_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Границы рисунка',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-border field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_border|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_11|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r00';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '39',
    'children' => array(
      0 => 'field_pic_indents_top',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_12|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r00';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '40',
    'children' => array(
      0 => 'field_pic_indents_top2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_13|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r01';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '43',
    'children' => array(
      0 => 'field_pic_indents_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-13 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_13|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_14|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r01';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '44',
    'children' => array(
      0 => 'field_pic_indents_text2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-14 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_14|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_15|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_15';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r02';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '47',
    'children' => array(
      0 => 'field_pic_indents_pic',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-15 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_15|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_16|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_16';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r02';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '48',
    'children' => array(
      0 => 'field_pic_indents_pic2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-16 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_16|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r00|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r00';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r1';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '12',
    'children' => array(
      0 => 'group_pic_indents_11',
      1 => 'group_pic_indents_12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-r00 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_r00|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r01|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r1';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '13',
    'children' => array(
      0 => 'group_pic_indents_13',
      1 => 'group_pic_indents_14',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents-r01 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_r01|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r02|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r1';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '14',
    'children' => array(
      0 => 'group_pic_indents_15',
      1 => 'group_pic_indents_16',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-r02 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_r02|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r1|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '12',
    'children' => array(
      0 => 'group_pic_indents_r00',
      1 => 'group_pic_indents_r01',
      2 => 'group_pic_indents_r02',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents|node|demand_create|form';
  $field_group->group_name = 'group_pic_indents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '11',
    'children' => array(
      0 => 'group_pic_indents_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-indents field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_label_r1|node|demand_create|form';
  $field_group->group_name = 'group_pic_label_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_label';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '26',
    'children' => array(
      0 => 'field_pic_label_align',
      1 => 'field_pic_label_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-label-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_label_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_label|node|demand_create|form';
  $field_group->group_name = 'group_pic_label';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '10',
    'children' => array(
      0 => 'group_pic_label_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group_pic_label field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_label|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_pic_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '29',
    'children' => array(
      0 => 'field_pic_number_type',
      1 => 'field_pic_number_view',
      2 => 'field_pic_number_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-number-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number|node|demand_create|form';
  $field_group->group_name = 'group_pic_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '13',
    'children' => array(
      0 => 'group_pic_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-align field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size_r1|node|demand_create|form';
  $field_group->group_name = 'group_pic_size_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_size';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '8',
    'children' => array(
      0 => 'field_pic_size_valid',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размеры',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-size-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_size_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size_r2|node|demand_create|form';
  $field_group->group_name = 'group_pic_size_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_size';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '9',
    'children' => array(
      0 => 'field_pic_size_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размеры',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-size-r2 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_size_r2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size_r3|node|demand_create|form';
  $field_group->group_name = 'group_pic_size_r3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_size';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '10',
    'children' => array(
      0 => 'field_pic_size_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размеры',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-size-r3 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_size_r3|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size|node|demand_create|form';
  $field_group->group_name = 'group_pic_size';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '7',
    'children' => array(
      0 => 'group_pic_size_r1',
      1 => 'group_pic_size_r2',
      2 => 'group_pic_size_r3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размеры',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-size-r1 field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_size|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic|node|demand_create|form';
  $field_group->group_name = 'group_pic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Картинки',
    'weight' => '10',
    'children' => array(
      0 => 'group_pic_align',
      1 => 'group_pic_border',
      2 => 'group_pic_indents',
      3 => 'group_pic_label',
      4 => 'group_pic_number',
      5 => 'group_pic_size',
      6 => 'group_table',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-pic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quotes_main_r1|node|demand_create|form';
  $field_group->group_name = 'group_quotes_main_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_quotes_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '126',
    'children' => array(
      0 => 'field_quotes_main_symbol',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-quotes-main-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_quotes_main_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quotes_main|node|demand_create|form';
  $field_group->group_name = 'group_quotes_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_quotes';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '30',
    'children' => array(
      0 => 'group_quotes_main_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-quotes-main field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_quotes_main|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quotes|node|demand_create|form';
  $field_group->group_name = 'group_quotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Кавычки',
    'weight' => '13',
    'children' => array(
      0 => 'group_quotes_main',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-quotes field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_quotes|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_11|node|demand_create|form';
  $field_group->group_name = 'group_table_label_11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '130',
    'children' => array(
      0 => 'field_table_label_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_12|node|demand_create|form';
  $field_group->group_name = 'group_table_label_12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '131',
    'children' => array(
      0 => 'field_table_label_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_13|node|demand_create|form';
  $field_group->group_name = 'group_table_label_13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '132',
    'children' => array(
      0 => 'field_table_label_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-13 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_13|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_14|node|demand_create|form';
  $field_group->group_name = 'group_table_label_14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '133',
    'children' => array(
      0 => 'field_table_label_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-14 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_14|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_15|node|demand_create|form';
  $field_group->group_name = 'group_table_label_15';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '134',
    'children' => array(
      0 => 'field_table_label_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-15 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_15|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_16|node|demand_create|form';
  $field_group->group_name = 'group_table_label_16';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '135',
    'children' => array(
      0 => 'field_table_label_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-16 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_16|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_1|node|demand_create|form';
  $field_group->group_name = 'group_table_label_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_r1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '128',
    'children' => array(
      0 => 'group_table_label_11',
      1 => 'group_table_label_12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-1 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_2|node|demand_create|form';
  $field_group->group_name = 'group_table_label_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_r1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '129',
    'children' => array(
      0 => 'group_table_label_13',
      1 => 'group_table_label_14',
      2 => 'group_table_label_15',
      3 => 'group_table_label_16',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-2 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_2|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_r1|node|demand_create|form';
  $field_group->group_name = 'group_table_label_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '34',
    'children' => array(
      0 => 'field_table_label_location',
      1 => 'field_table_label_header',
      2 => 'field_table_label_number',
      3 => 'field_table_label_line',
      4 => 'field_table_label_continue',
      5 => 'field_table_label_continue2',
      6 => 'group_table_label_1',
      7 => 'group_table_label_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label|node|demand_create|form';
  $field_group->group_name = 'group_table_label';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '31',
    'children' => array(
      0 => 'group_table_label_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group_table_label field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_table_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '36',
    'children' => array(
      0 => 'field_table_number_type',
      1 => 'field_table_number_view',
      2 => 'field_table_number_division',
      3 => 'field_table_number_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки нумерации',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-number-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_number_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number|node|demand_create|form';
  $field_group->group_name = 'group_table_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '32',
    'children' => array(
      0 => 'group_table_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки нумерации',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-number field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table|node|demand_create|form';
  $field_group->group_name = 'group_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Таблицы',
    'weight' => '14',
    'children' => array(
      0 => 'group_table_label',
      1 => 'group_table_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-table field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_main_r1|node|demand_create|form';
  $field_group->group_name = 'group_title_main_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '142',
    'children' => array(
      0 => 'field_title_main_level',
      1 => 'field_title_main_pattern',
      2 => 'field_title_main_own',
      3 => 'field_title_main_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-title-main-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_main_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_main|node|demand_create|form';
  $field_group->group_name = 'group_title_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '33',
    'children' => array(
      0 => 'group_title_main_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-title-main field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_main|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_title_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_number';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '152',
    'children' => array(
      0 => 'field_title_number_r',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-title-number-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_number_r1|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_number|node|demand_create|form';
  $field_group->group_name = 'group_title_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '37',
    'children' => array(
      0 => 'group_title_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-title-number field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_number|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|demand_create|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Заголовки',
    'weight' => '8',
    'children' => array(
      0 => 'group_title_main',
      1 => 'group_title_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-title field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_title|node|demand_create|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Границы рисунка');
  t('Заголовки');
  t('Интервал');
  t('Кавычки');
  t('Картинки');
  t('Колонки');
  t('Колонтитулы');
  t('Настройка текста');
  t('Настройки нумерации');
  t('Настройки подписи');
  t('Нумерация');
  t('Основной текст');
  t('Основные');
  t('Отступы');
  t('Отступы и интервалы');
  t('Поля');
  t('Размер бумаги');
  t('Размеры');
  t('Размещение рисунка');
  t('Расположение номера страницы');
  t('Содержание');
  t('Списки');
  t('Таблицы');
  t('Фильтрация нумерации страниц');
  t('Форматирование');
  t('Формулы');
  t('Шаблоны');
  t('Ширина и промежуток');
  t('Шрифт');

  return $field_groups;
}
