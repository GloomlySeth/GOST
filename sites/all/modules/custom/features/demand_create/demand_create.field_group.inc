<?php
/**
 * @file
 * demand_create.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function demand_create_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_border_1|profile2|demand_create|form';
  $field_group->group_name = 'group_border_1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_margins_r2';
  $field_group->data = array(
    'label' => '',
    'weight' => '218',
    'children' => array(
      0 => 'field_main_margins_str',
      1 => 'field_main_margins_on',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-border-1 field-group-html-element n_border',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_border_1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_border_2|profile2|demand_create|form';
  $field_group->group_name = 'group_border_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_interval_r2';
  $field_group->data = array(
    'label' => '',
    'weight' => '218',
    'children' => array(
      0 => 'field_main_interval_str',
      1 => 'field_main_interval_int',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-border-2 field-group-html-element n_border',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_border_2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contents_main_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_contents_main_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contents_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '159',
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
    ),
  );
  $field_groups['group_contents_main_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contents_main|profile2|demand_create|form';
  $field_group->group_name = 'group_contents_main';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contents';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '159',
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
  $field_groups['group_contents_main|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_fields_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Поля',
    'weight' => '126',
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
  $field_groups['group_fields_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields_r2|profile2|demand_create|form';
  $field_group->group_name = 'group_fields_r2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Поля',
    'weight' => '128',
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
  $field_groups['group_fields_r2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|profile2|demand_create|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Поля',
    'weight' => '3',
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
      'formatter' => '',
    ),
  );
  $field_groups['group_fields|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_1|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_indents_1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_r1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '212',
    'children' => array(
      0 => 'group_formula_indents_r11',
      1 => 'group_formula_indents_r12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-indents-1 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_2|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_indents_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_r1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '213',
    'children' => array(
      0 => 'group_formula_indents_r13',
      1 => 'group_formula_indents_r14',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-indents-2 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r11|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r11';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '212',
    'children' => array(
      0 => 'field_formula_indents_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-indents-r11 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r11|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r12|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r12';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_1';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '213',
    'children' => array(
      0 => 'field_formula_indents_text2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-indents-r12 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r12|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r13|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r13';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_2';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '212',
    'children' => array(
      0 => 'field_formula_indents_formula',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-indents-r13 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r13|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_indents_r14|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r14';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_2';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '213',
    'children' => array(
      0 => 'field_formula_indents_formula2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-indents-r14 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_indents_r14|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_number_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_number_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_number';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '159',
    'children' => array(
      0 => 'field_formula_number_type',
      1 => 'field_formula_number_division',
      2 => 'field_formula_number_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-formula-number-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_formula_number_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formula_number|profile2|demand_create|form';
  $field_group->group_name = 'group_formula_number';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '160',
    'children' => array(
      0 => 'group_formula_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_formula_number|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_filter_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_header_filter_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_filter';
  $field_group->data = array(
    'label' => 'Фильтрация нумерации страниц',
    'weight' => '135',
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
  $field_groups['group_header_filter_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_filter|profile2|demand_create|form';
  $field_group->group_name = 'group_header_filter';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Фильтрация нумерации страниц',
    'weight' => '136',
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
  $field_groups['group_header_filter|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_number_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_header_number_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_number';
  $field_group->data = array(
    'label' => 'Расположение номера страницы',
    'weight' => '135',
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
  $field_groups['group_header_number_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_number|profile2|demand_create|form';
  $field_group->group_name = 'group_header_number';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Расположение номера страницы',
    'weight' => '135',
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
  $field_groups['group_header_number|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_1|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_r1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '159',
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
  $field_groups['group_header_setting_1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_2|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_r1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '161',
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
        'classes' => 'group-header-setting-2 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_3|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_3';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_r1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '160',
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
  $field_groups['group_header_setting_3|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r11|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r11';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '169',
    'children' => array(
      0 => 'field_header_setting_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-r11 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r11|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r12|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r12';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_1';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '170',
    'children' => array(
      0 => 'field_header_setting_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-r12 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r12|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r13|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r13';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '171',
    'children' => array(
      0 => 'field_header_setting_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-r13 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r13|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r14|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r14';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '172',
    'children' => array(
      0 => 'field_header_setting_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-r14 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r14|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r15|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r15';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '173',
    'children' => array(
      0 => 'field_header_setting_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-r15 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r15|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r16|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r16';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting_3';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '175',
    'children' => array(
      0 => 'field_header_setting_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header-setting-r16 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header_setting_r16|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_setting_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_header_setting_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_header_setting';
  $field_group->data = array(
    'label' => 'Настройка текста',
    'weight' => '135',
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
  $field_groups['group_header_setting_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_formatting_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_list_formatting_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list_formatting';
  $field_group->data = array(
    'label' => 'Форматирование',
    'weight' => '159',
    'children' => array(
      0 => 'field_list_formatting_level',
      1 => 'field_list_formatting_indentatio',
      2 => 'field_list_formatting_number',
      3 => 'field_list_formatting_main',
      4 => 'field_list_formatting_valid',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-list-formatting-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_list_formatting_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_formatting|profile2|demand_create|form';
  $field_group->group_name = 'group_list_formatting';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list';
  $field_group->data = array(
    'label' => 'Форматирование',
    'weight' => '159',
    'children' => array(
      0 => 'group_list_formatting_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_list_formatting|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_number_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_list_number_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list_number';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '159',
    'children' => array(
      0 => 'field_list_number_type',
      1 => 'field_list_number_view',
      2 => 'field_list_number_division',
      3 => 'field_list_number_main',
      4 => 'field_list_number_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-list-number-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_list_number_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_number|profile2|demand_create|form';
  $field_group->group_name = 'group_list_number';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '160',
    'children' => array(
      0 => 'group_list_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_list_number|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_f1|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_f1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_r1';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(
      0 => 'field_main_columns_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-f1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_columns_f1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_f2|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_f2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_v2';
  $field_group->data = array(
    'label' => 'Ширина и промежуток',
    'weight' => '11',
    'children' => array(
      0 => 'field_main_columns_width',
      1 => 'group_main_columns_r4',
      2 => 'group_main_columns_r5',
      3 => 'group_main_columns_r6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ширина и промежуток',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-columns-f2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_columns_f2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '148',
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
  $field_groups['group_main_columns_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r2|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_r2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_v2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '9',
    'children' => array(
      0 => 'field_main_columns_number',
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
  $field_groups['group_main_columns_r2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r3|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_r3';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_v2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '10',
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
  $field_groups['group_main_columns_r3|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r4|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_r4';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_f2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '153',
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
  $field_groups['group_main_columns_r4|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r5|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_r5';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_f2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '154',
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
  $field_groups['group_main_columns_r5|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_r6|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_r6';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_f2';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '155',
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
  $field_groups['group_main_columns_r6|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_columns_v2|profile2|demand_create|form';
  $field_group->group_name = 'group_main_columns_v2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_columns_r1';
  $field_group->data = array(
    'label' => 'Колонки',
    'weight' => '9',
    'children' => array(
      0 => 'group_main_columns_r2',
      1 => 'group_main_columns_r3',
      2 => 'group_main_columns_f2',
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
  $field_groups['group_main_columns_v2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_1|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_r1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '179',
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
  $field_groups['group_main_font_1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_2|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_r1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '180',
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
  $field_groups['group_main_font_2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r11|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_r11';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '179',
    'children' => array(
      0 => 'field_main_font_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-r11 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r11|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r12|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_r12';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_1';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '180',
    'children' => array(
      0 => 'field_main_font_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-r12 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r12|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r13|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_r13';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '179',
    'children' => array(
      0 => 'field_main_font_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-r13 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r13|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r14|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_r14';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '180',
    'children' => array(
      0 => 'field_main_font_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-r14 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r14|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r15|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_r15';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '182',
    'children' => array(
      0 => 'field_main_font_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-r15 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r15|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_font_r16|profile2|demand_create|form';
  $field_group->group_name = 'group_main_font_r16';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_font_2';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '183',
    'children' => array(
      0 => 'field_main_font_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-font-r16 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_font_r16|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_interval_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_main_interval_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_interval';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '141',
    'children' => array(
      0 => 'field_main_interval_left',
      1 => 'field_main_interval_right',
      2 => 'field_main_interval_mirror',
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
  $field_groups['group_main_interval_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_interval_r2|profile2|demand_create|form';
  $field_group->group_name = 'group_main_interval_r2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_interval';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '142',
    'children' => array(
      0 => 'field_main_interval_non',
      1 => 'field_main_interval_shift',
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
  $field_groups['group_main_interval_r2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_interval|profile2|demand_create|form';
  $field_group->group_name = 'group_main_interval';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '137',
    'children' => array(
      0 => 'group_main_interval_r1',
      1 => 'group_main_interval_r2',
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
  $field_groups['group_main_interval|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_margins_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_main_margins_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_margins';
  $field_group->data = array(
    'label' => 'Отступы',
    'weight' => '135',
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
  $field_groups['group_main_margins_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_margins_r2|profile2|demand_create|form';
  $field_group->group_name = 'group_main_margins_r2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_margins';
  $field_group->data = array(
    'label' => 'Отступы',
    'weight' => '136',
    'children' => array(
      0 => 'field_main_margins_shift',
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
  $field_groups['group_main_margins_r2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_margins|profile2|demand_create|form';
  $field_group->group_name = 'group_main_margins';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Отступы',
    'weight' => '136',
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
  $field_groups['group_main_margins|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_main_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_number_main_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '158',
    'children' => array(
      0 => 'field_number_main_type',
      1 => 'field_number_main_view',
      2 => 'field_number_main_division',
      3 => 'field_number_main_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Основные',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-number-main-r1 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_number_main_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_main|profile2|demand_create|form';
  $field_group->group_name = 'group_number_main';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '158',
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
  $field_groups['group_number_main|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_pattern_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_number_pattern_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number_pattern';
  $field_group->data = array(
    'label' => 'Шаблоны',
    'weight' => '158',
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
  $field_groups['group_number_pattern_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_pattern|profile2|demand_create|form';
  $field_group->group_name = 'group_number_pattern';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number';
  $field_group->data = array(
    'label' => 'Шаблоны',
    'weight' => '159',
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
  $field_groups['group_number_pattern|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_paper_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paper';
  $field_group->data = array(
    'label' => 'Размер бумаги',
    'weight' => '131',
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
  $field_groups['group_paper_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper_r2|profile2|demand_create|form';
  $field_group->group_name = 'group_paper_r2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_paper';
  $field_group->data = array(
    'label' => 'Размер бумаги',
    'weight' => '132',
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
  $field_groups['group_paper_r2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paper|profile2|demand_create|form';
  $field_group->group_name = 'group_paper';
  $field_group->entity_type = 'profile2';
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
  $field_groups['group_paper|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_align_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_align_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_align';
  $field_group->data = array(
    'label' => 'Размещение рисунка',
    'weight' => '159',
    'children' => array(
      0 => 'field_pic_align_pic',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-align-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_align_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_align|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_align';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Размещение рисунка',
    'weight' => '14',
    'children' => array(
      0 => 'group_pic_align_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Границы рисунка',
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
  $field_groups['group_pic_align|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_border_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_border_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_border';
  $field_group->data = array(
    'label' => 'Границы рисунка',
    'weight' => '14',
    'children' => array(
      0 => 'field_pic_border_thickness',
      1 => 'field_pic_border_type',
      2 => 'field_pic_border_color',
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
  $field_groups['group_pic_border_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_border|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_border';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Границы рисунка',
    'weight' => '13',
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
  $field_groups['group_pic_border|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_11|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_11';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r00';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '188',
    'children' => array(
      0 => 'field_pic_indents_top',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-11 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_11|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_12|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_12';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r00';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '189',
    'children' => array(
      0 => 'field_pic_indents_top2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-12 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_12|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_13|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_13';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r01';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '192',
    'children' => array(
      0 => 'field_pic_indents_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-13 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_13|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_14|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_14';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r01';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '193',
    'children' => array(
      0 => 'field_pic_indents_text2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-14 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_14|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_15|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_15';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r02';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '191',
    'children' => array(
      0 => 'field_pic_indents_pic',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-15 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_15|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_16|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_16';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r02';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '192',
    'children' => array(
      0 => 'field_pic_indents_pic2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-16 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_16|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r00|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r00';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r1';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '21',
    'children' => array(
      0 => 'group_pic_indents_11',
      1 => 'group_pic_indents_12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-r00 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_r00|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r01|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r01';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r1';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '22',
    'children' => array(
      0 => 'group_pic_indents_13',
      1 => 'group_pic_indents_14',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-indents-r01 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_indents_r01|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_indents_r02|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_indents_r02';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_indents_r1';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '23',
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
  $field_groups['group_pic_indents_r02|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_label_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_label_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_label';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '159',
    'children' => array(
      0 => 'field_pic_label_align',
      1 => 'field_pic_label_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-label-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_label_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_label|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_label';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '15',
    'children' => array(
      0 => 'group_pic_label_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_pic_label|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_number_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '159',
    'children' => array(
      0 => 'field_pic_number_type',
      1 => 'field_pic_number_view',
      2 => 'field_pic_number_division',
      3 => 'field_pic_number_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-number-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_number';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '17',
    'children' => array(
      0 => 'group_pic_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_pic_number|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_size_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_size';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '13',
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
  $field_groups['group_pic_size_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size_r2|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_size_r2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_size';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '15',
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
  $field_groups['group_pic_size_r2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size_r3|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_size_r3';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_size';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '16',
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
  $field_groups['group_pic_size_r3|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_size|profile2|demand_create|form';
  $field_group->group_name = 'group_pic_size';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic';
  $field_group->data = array(
    'label' => 'Размеры',
    'weight' => '12',
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
        'classes' => 'group-pic-size field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_size|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quotes_main_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_quotes_main_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_quotes_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '159',
    'children' => array(
      0 => 'field_quotes_main_symbol',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-quotes-main-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_quotes_main_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quotes_main|profile2|demand_create|form';
  $field_group->group_name = 'group_quotes_main';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_quotes';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '159',
    'children' => array(
      0 => 'group_quotes_main_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-quotes-main field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_quotes_main|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_11|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_11';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '198',
    'children' => array(
      0 => 'field_table_label_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-11 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_11|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_12|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_12';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '199',
    'children' => array(
      0 => 'field_table_label_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-12 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_12|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_13|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_13';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '205',
    'children' => array(
      0 => 'field_table_label_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-13 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_13|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_14|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_14';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '206',
    'children' => array(
      0 => 'field_table_label_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-14 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_14|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_15|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_15';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '207',
    'children' => array(
      0 => 'field_table_label_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-15 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_15|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_16|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_16';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_2';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '208',
    'children' => array(
      0 => 'field_table_label_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-16 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_16|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_1|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_r1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '90',
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
  $field_groups['group_table_label_1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_2|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_r1';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '91',
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
  $field_groups['group_table_label_2|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '159',
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
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-label-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_label_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label|profile2|demand_create|form';
  $field_group->group_name = 'group_table_label';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Настройки подписи',
    'weight' => '159',
    'children' => array(
      0 => 'group_table_label_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_table_label|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_table_number_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '159',
    'children' => array(
      0 => 'field_table_number_type',
      1 => 'field_table_number_view',
      2 => 'field_table_number_division',
      3 => 'field_table_number_setting',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-number-r1 field-group-html-element section-content-r',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_number_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number|profile2|demand_create|form';
  $field_group->group_name = 'group_table_number';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '160',
    'children' => array(
      0 => 'group_table_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
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
  $field_groups['group_table_number|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_main_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_title_main_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_main';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '159',
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
  $field_groups['group_title_main_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_main|profile2|demand_create|form';
  $field_group->group_name = 'group_title_main';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title';
  $field_group->data = array(
    'label' => 'Основные',
    'weight' => '159',
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
  $field_groups['group_title_main|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_number_r1|profile2|demand_create|form';
  $field_group->group_name = 'group_title_number_r1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title_number';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '159',
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
  $field_groups['group_title_number_r1|profile2|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_number|profile2|demand_create|form';
  $field_group->group_name = 'group_title_number';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_title';
  $field_group->data = array(
    'label' => 'Нумерация',
    'weight' => '160',
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
  $field_groups['group_title_number|profile2|demand_create|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Границы рисунка');
  t('Интервал');
  t('Колонки');
  t('Настройка текста');
  t('Настройки нумерации');
  t('Настройки подписи');
  t('Нумерация');
  t('Основные');
  t('Отступы');
  t('Отступы и интервалы');
  t('Поля');
  t('Размер бумаги');
  t('Размеры');
  t('Размещение рисунка');
  t('Расположение номера страницы');
  t('Фильтрация нумерации страниц');
  t('Форматирование');
  t('Шаблоны');
  t('Ширина и промежуток');
  t('Шрифт');

  return $field_groups;
}
