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
  $field_group->identifier = 'group_contents_font|node|demand_create|form';
  $field_group->group_name = 'group_contents_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contents';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '172',
    'children' => array(
      0 => 'field_contents_font_align',
      1 => 'field_contents_font_background',
      2 => 'field_contents_font_color',
      3 => 'field_contents_font_font',
      4 => 'field_contents_font_size',
      5 => 'field_contents_font_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contents-font field-group-html-element section-content-l title-left',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_contents_font|node|demand_create|form'] = $field_group;

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
    'weight' => '78',
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
    'weight' => '171',
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
      0 => 'group_contents_font',
      1 => 'group_contents_main',
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
    'weight' => '170',
    'children' => array(
      0 => 'group_formula_indents_r11',
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
    'weight' => '171',
    'children' => array(
      0 => 'group_formula_indents_r13',
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
    'weight' => '51',
    'children' => array(
      0 => 'field_formula_indents_text',
      1 => 'field_formula_indents_text2',
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
  $field_group->identifier = 'group_formula_indents_r13|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents_2';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '51',
    'children' => array(
      0 => 'field_formula_indents_formula',
      1 => 'field_formula_indents_formula2',
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
  $field_group->identifier = 'group_formula_indents_r1|node|demand_create|form';
  $field_group->group_name = 'group_formula_indents_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formula_indents';
  $field_group->data = array(
    'label' => 'Интервал',
    'weight' => '53',
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
    'weight' => '51',
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
    'weight' => '25',
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
    'weight' => '52',
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
  $field_group->identifier = 'group_indents_01|node|demand_create|form';
  $field_group->group_name = 'group_indents_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 1',
    'weight' => '180',
    'children' => array(
      0 => 'group_indents_11',
      1 => 'group_indents_12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-01 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_01|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_02|node|demand_create|form';
  $field_group->group_name = 'group_indents_02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 2',
    'weight' => '187',
    'children' => array(
      0 => 'group_indents_21',
      1 => 'group_indents_22',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-22 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_02|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_03|node|demand_create|form';
  $field_group->group_name = 'group_indents_03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 3',
    'weight' => '190',
    'children' => array(
      0 => 'group_indents_31',
      1 => 'group_indents_32',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-03 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_03|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_11|node|demand_create|form';
  $field_group->group_name = 'group_indents_11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents_01';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 11',
    'weight' => '193',
    'children' => array(
      0 => 'field_table_indents_top',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 11',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_12|node|demand_create|form';
  $field_group->group_name = 'group_indents_12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents_01';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 12',
    'weight' => '195',
    'children' => array(
      0 => 'field_table_indents_top2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 12',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_21|node|demand_create|form';
  $field_group->group_name = 'group_indents_21';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents_02';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 21',
    'weight' => '188',
    'children' => array(
      0 => 'field_table_indents_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 21',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-21 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_21|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_22|node|demand_create|form';
  $field_group->group_name = 'group_indents_22';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents_02';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 22',
    'weight' => '190',
    'children' => array(
      0 => 'field_table_indents_text2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 22',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-22 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_22|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_31|node|demand_create|form';
  $field_group->group_name = 'group_indents_31';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents_03';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 31',
    'weight' => '184',
    'children' => array(
      0 => 'field_table_indents_pic',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 31',
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
  $field_groups['group_indents_31|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents_32|node|demand_create|form';
  $field_group->group_name = 'group_indents_32';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indents_03';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы 32',
    'weight' => '185',
    'children' => array(
      0 => 'field_table_indents_pic2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы 32',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-32 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents_32|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indents|node|demand_create|form';
  $field_group->group_name = 'group_indents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_l5';
  $field_group->data = array(
    'label' => 'Отступы и интервалы таблицы',
    'weight' => '186',
    'children' => array(
      0 => 'group_indents_01',
      1 => 'group_indents_02',
      2 => 'group_indents_03',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы таблицы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indents-22 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_indents|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_font|node|demand_create|form';
  $field_group->group_name = 'group_list_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_list';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '28',
    'children' => array(
      0 => 'field_list_font_align',
      1 => 'field_list_font_background',
      2 => 'field_list_font_color',
      3 => 'field_list_font_font',
      4 => 'field_list_font_size',
      5 => 'field_list_font_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-list-font field-group-html-element section-content-l title-left',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_font|node|demand_create|form'] = $field_group;

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
    'weight' => '30',
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
    'weight' => '25',
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
      2 => 'group_pic_number_r2',
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
    'weight' => '26',
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
      0 => 'group_list_font',
      1 => 'group_list_formatting',
      2 => 'group_list_number',
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
      1 => 'group_border_2',
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
  $field_group->identifier = 'group_number_font|node|demand_create|form';
  $field_group->group_name = 'group_number_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '30',
    'children' => array(
      0 => 'field_number_font_font',
      1 => 'field_number_font_size',
      2 => 'field_number_font_typeface',
      3 => 'field_number_font_color',
      4 => 'field_number_font_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-number-font field-group-html-element section-content-l title-left',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_number_font|node|demand_create|form'] = $field_group;

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
    'weight' => '29',
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
      0 => 'group_number_font',
      1 => 'group_number_main',
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
    'weight' => '172',
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
    'weight' => '178',
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
    'weight' => '177',
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
    'weight' => '177',
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
    'weight' => '112',
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
    'weight' => '114',
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
    'weight' => '48',
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
    'weight' => '49',
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
    'weight' => '137',
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
    'weight' => '138',
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
    'weight' => '122',
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
    'weight' => '123',
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
    'weight' => '124',
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
    'weight' => '109',
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
    'weight' => '180',
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
    'weight' => '172',
    'children' => array(
      0 => 'field_pic_label_setting',
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
    'weight' => '179',
    'children' => array(
      0 => 'field_pic_label_align',
      1 => 'field_pic_label_background',
      2 => 'field_pic_label_color',
      3 => 'field_pic_label_font',
      4 => 'field_pic_label_size',
      5 => 'field_pic_label_typeface',
      6 => 'group_pic_label_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Настройки подписи',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group_pic_label field-group-html-element section-content-l title-left',
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
  $field_group->identifier = 'group_pic_number_r11|node|demand_create|form';
  $field_group->group_name = 'group_pic_number_r11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number_r1';
  $field_group->data = array(
    'label' => 'Нумерация картинки 1',
    'weight' => '2',
    'children' => array(
      0 => 'field_number_pattern_pic',
      1 => 'field_number_pattern_own',
      2 => 'field_pic_font_font',
      3 => 'field_pic_font_size',
      4 => 'field_pic_font_typeface',
      5 => 'field_pic_font_color',
      6 => 'field_pic_font_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация картинки 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-number-r11 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number_r12|node|demand_create|form';
  $field_group->group_name = 'group_pic_number_r12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number_r1';
  $field_group->data = array(
    'label' => 'Нумерация картинки 2',
    'weight' => '1',
    'children' => array(
      0 => 'group_pic_number_r21',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация картинки 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-number-r12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number_r13|node|demand_create|form';
  $field_group->group_name = 'group_pic_number_r13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number_r1';
  $field_group->data = array(
    'label' => 'Нумерация картинки 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_pic_number_view',
      1 => 'field_pic_number_setting',
      2 => 'field_pic_number_own2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация картинки 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-number-r13 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r13|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_number_r14|node|demand_create|form';
  $field_group->group_name = 'group_pic_number_r14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number_r1';
  $field_group->data = array(
    'label' => 'Нумерация картинки 4',
    'weight' => '4',
    'children' => array(
      0 => 'field_pic_number_font',
      1 => 'field_pic_number_size',
      2 => 'field_pic_number_typeface',
      3 => 'field_pic_number_color',
      4 => 'field_pic_number_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-number-r14 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r14|node|demand_create|form'] = $field_group;

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
    'weight' => '137',
    'children' => array(
      0 => 'group_pic_number_r11',
      1 => 'group_pic_number_r12',
      2 => 'group_pic_number_r13',
      3 => 'group_pic_number_r14',
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
  $field_group->identifier = 'group_pic_number_r21|node|demand_create|form';
  $field_group->group_name = 'group_pic_number_r21';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pic_number_r12';
  $field_group->data = array(
    'label' => 'Нумерация картинки 21',
    'weight' => '217',
    'children' => array(
      0 => 'field_pic_number_type',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-pic-number-r21 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pic_number_r21|node|demand_create|form'] = $field_group;

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
    'weight' => '181',
    'children' => array(
      0 => 'group_pic_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic-number field-group-html-element section-content-l title-left',
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
    'weight' => '172',
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
    'weight' => '173',
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
    'weight' => '174',
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
    'weight' => '176',
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
    'label' => 'РИСУНКИ (ИЛЛЮСТРАЦИИ)',
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
      'label' => 'РИСУНКИ (ИЛЛЮСТРАЦИИ)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pic field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pic|node|demand_create|form'] = $field_group;

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
    'weight' => '14',
    'children' => array(
      0 => 'field_quotes_main_symbol',
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
  $field_group->identifier = 'group_tabe_header_font_10|node|demand_create|form';
  $field_group->group_name = 'group_tabe_header_font_10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_00';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 10',
    'weight' => '1',
    'children' => array(
      0 => 'group_table_header_11',
      1 => 'group_table_header_font_12',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-tabe-header-font-10 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tabe_header_font_10|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_border_10|node|demand_create|form';
  $field_group->group_name = 'group_table_border_10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Границы таблицы',
    'weight' => '51',
    'children' => array(
      0 => 'group_table_border_11',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Границы таблицы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-border-10 field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_border_10|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_border_11|node|demand_create|form';
  $field_group->group_name = 'group_table_border_11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_border_10';
  $field_group->data = array(
    'label' => 'Границы таблицы 1',
    'weight' => '53',
    'children' => array(
      0 => 'field_table_border_thickness',
      1 => 'field_table_border_color',
      2 => 'field_table_border_type',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Границы таблицы 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-border-11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_border_11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_font|node|demand_create|form';
  $field_group->group_name = 'group_table_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number_font';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '45',
    'children' => array(
      0 => 'field_table_number_background',
      1 => 'field_table_number_color',
      2 => 'field_table_number_font',
      3 => 'field_table_number_size',
      4 => 'field_table_number_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-font field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_font|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_00|node|demand_create|form';
  $field_group->group_name = 'group_table_header_00';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_font';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 00',
    'weight' => '224',
    'children' => array(
      0 => 'group_tabe_header_font_10',
      1 => 'group_table_header_font_20',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 00',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-header-00 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_header_00|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_11|node|demand_create|form';
  $field_group->group_name = 'group_table_header_11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabe_header_font_10';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 11',
    'weight' => '1',
    'children' => array(
      0 => 'field_table_headre_font_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 11',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-header-11 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_header_11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_font_12|node|demand_create|form';
  $field_group->group_name = 'group_table_header_font_12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabe_header_font_10';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 12',
    'weight' => '2',
    'children' => array(
      0 => 'field_table_header_font_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 12',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-header-font-12 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_header_font_12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_font_20|node|demand_create|form';
  $field_group->group_name = 'group_table_header_font_20';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_00';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 20',
    'weight' => '2',
    'children' => array(
      0 => 'group_table_headre_font_21',
      1 => 'group_table_headre_font_22',
      2 => 'group_table_header_font_23',
      3 => 'group_table_header_font_24',
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
  $field_groups['group_table_header_font_20|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_font_23|node|demand_create|form';
  $field_group->group_name = 'group_table_header_font_23';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_font_20';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 23',
    'weight' => '3',
    'children' => array(
      0 => 'field_table_header_font_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 23',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-header-font-23 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_header_font_23|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_font_24|node|demand_create|form';
  $field_group->group_name = 'group_table_header_font_24';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_font_20';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 24',
    'weight' => '4',
    'children' => array(
      0 => 'field_table_header_font_backgrou',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 24',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-header-font-24 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_header_font_24|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_header_font|node|demand_create|form';
  $field_group->group_name = 'group_table_header_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы',
    'weight' => '52',
    'children' => array(
      0 => 'group_table_header_00',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-header-font field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_header_font|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_headre_font_21|node|demand_create|form';
  $field_group->group_name = 'group_table_headre_font_21';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_font_20';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 21',
    'weight' => '1',
    'children' => array(
      0 => 'field_table_header_font_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 21',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-headre-font-21 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_headre_font_21|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_headre_font_22|node|demand_create|form';
  $field_group->group_name = 'group_table_headre_font_22';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_header_font_20';
  $field_group->data = array(
    'label' => 'Шрифт шапки таблицы 22',
    'weight' => '2',
    'children' => array(
      0 => 'field_table_header_font_typef',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт шапки таблицы 22',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-headre-font-22 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_headre_font_22|node|demand_create|form'] = $field_group;

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
    'weight' => '126',
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
    'weight' => '127',
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
    'weight' => '126',
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
    'weight' => '127',
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
    'weight' => '128',
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
    'weight' => '129',
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
  $field_group->identifier = 'group_table_label_17|node|demand_create|form';
  $field_group->group_name = 'group_table_label_17';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label';
  $field_group->data = array(
    'label' => 'Размещение таблицы',
    'weight' => '218',
    'children' => array(
      0 => 'group_table_label_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размещение таблицы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-17 field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_17|node|demand_create|form'] = $field_group;

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
    'weight' => '55',
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
    'weight' => '56',
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
  $field_group->identifier = 'group_table_label_align|node|demand_create|form';
  $field_group->group_name = 'group_table_label_align';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_label_17';
  $field_group->data = array(
    'label' => 'Размещение таблицы',
    'weight' => '218',
    'children' => array(
      0 => 'field_table_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Размещение таблицы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-label-align field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_align|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_label_l5|node|demand_create|form';
  $field_group->group_name = 'group_table_label_l5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Отступы и интервалы',
    'weight' => '55',
    'children' => array(
      0 => 'group_indents',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Отступы и интервалы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group_table_label_l5 field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_label_l5|node|demand_create|form'] = $field_group;

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
    'weight' => '46',
    'children' => array(
      0 => 'field_table_label_location',
      1 => 'field_table_label_header',
      2 => 'field_table_label_number',
      3 => 'field_table_label_line',
      4 => 'field_table_label_continue',
      5 => 'group_table_label_1',
      6 => 'group_table_label_2',
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
    'weight' => '54',
    'children' => array(
      0 => 'group_table_label_r1',
      1 => 'group_table_label_17',
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
  $field_group->identifier = 'group_table_number_all|node|demand_create|form';
  $field_group->group_name = 'group_table_number_all';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number';
  $field_group->data = array(
    'label' => 'Нумерация таблицы обертка',
    'weight' => '218',
    'children' => array(
      0 => 'group_table_number_font',
      1 => 'group_table_number_r',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация таблицы обертка',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-number-all field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_number_all|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number_font|node|demand_create|form';
  $field_group->group_name = 'group_table_number_font';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number_all';
  $field_group->data = array(
    'label' => 'Шрифт',
    'weight' => '45',
    'children' => array(
      0 => 'group_table_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-number-font field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_number_font|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number_int_00|node|demand_create|form';
  $field_group->group_name = 'group_table_number_int_00';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number_int';
  $field_group->data = array(
    'label' => 'Шрифт цифр номера 00',
    'weight' => '227',
    'children' => array(
      0 => 'field_int_font',
      1 => 'field_int_size',
      2 => 'field_int_typeface',
      3 => 'field_int_color',
      4 => 'field_int_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт цифр номера 00',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-number-int-00 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_number_int_00|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number_int|node|demand_create|form';
  $field_group->group_name = 'group_table_number_int';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Шрифт цифр номера',
    'weight' => '227',
    'children' => array(
      0 => 'group_table_number_int_00',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт цифр номера',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-number-int field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_number_int|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_number_r1|node|demand_create|form';
  $field_group->group_name = 'group_table_number_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number_r';
  $field_group->data = array(
    'label' => 'Настройки нумерации',
    'weight' => '48',
    'children' => array(
      0 => 'field_number_pattern_table',
      1 => 'field_number_pattern_own2',
      2 => 'field_table_number_type',
      3 => 'field_table_number_view',
      4 => 'field_table_number_setting',
      5 => 'field_field_table_number_own2',
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
  $field_group->identifier = 'group_table_number_r|node|demand_create|form';
  $field_group->group_name = 'group_table_number_r';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_number_all';
  $field_group->data = array(
    'label' => 'Нумерация таблицы',
    'weight' => '218',
    'children' => array(
      0 => 'group_table_number_r1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-number-r field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_number_r|node|demand_create|form'] = $field_group;

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
    'label' => 'Нумерация',
    'weight' => '56',
    'children' => array(
      0 => 'group_table_number_all',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Нумерация',
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
  $field_group->identifier = 'group_table_text_00|node|demand_create|form';
  $field_group->group_name = 'group_table_text_00';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 00',
    'weight' => '224',
    'children' => array(
      0 => 'group_table_text_01',
      1 => 'group_table_text_02',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 00',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-00 field-group-html-element section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_00|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_01|node|demand_create|form';
  $field_group->group_name = 'group_table_text_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_00';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 01',
    'weight' => '218',
    'children' => array(
      0 => 'group_table_text_11',
      1 => 'group_table_text_21',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 01',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-01 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_01|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_02|node|demand_create|form';
  $field_group->group_name = 'group_table_text_02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_00';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 02',
    'weight' => '224',
    'children' => array(
      0 => 'group_table_text_12',
      1 => 'group_table_text_22',
      2 => 'group_table_text_32',
      3 => 'group_table_text_42',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-table-text-02 field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_table_text_02|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_11|node|demand_create|form';
  $field_group->group_name = 'group_table_text_11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_01';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 11',
    'weight' => '223',
    'children' => array(
      0 => 'field_table_text_font',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 11',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-11 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_11|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_12|node|demand_create|form';
  $field_group->group_name = 'group_table_text_12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_02';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 12',
    'weight' => '224',
    'children' => array(
      0 => 'field_table_text_align',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 12',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-12 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_12|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_21|node|demand_create|form';
  $field_group->group_name = 'group_table_text_21';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_01';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 21',
    'weight' => '224',
    'children' => array(
      0 => 'field_table_text_size',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 21',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-21 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_21|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_22|node|demand_create|form';
  $field_group->group_name = 'group_table_text_22';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_02';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 22',
    'weight' => '225',
    'children' => array(
      0 => 'field_table_text_typeface',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 22',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-22 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_22|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_32|node|demand_create|form';
  $field_group->group_name = 'group_table_text_32';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_02';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 32',
    'weight' => '226',
    'children' => array(
      0 => 'field_table_text_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 32',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-32 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_32|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text_42|node|demand_create|form';
  $field_group->group_name = 'group_table_text_42';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table_text_02';
  $field_group->data = array(
    'label' => 'Шрифт таблицы 42',
    'weight' => '227',
    'children' => array(
      0 => 'field_table_text_background',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы 42',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text-42 field-group-html-element  section-content-r',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text_42|node|demand_create|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table_text|node|demand_create|form';
  $field_group->group_name = 'group_table_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'demand_create';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_table';
  $field_group->data = array(
    'label' => 'Шрифт таблицы',
    'weight' => '53',
    'children' => array(
      0 => 'group_table_text_00',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Шрифт таблицы',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-table-text field-group-html-element section-content-l',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_table_text|node|demand_create|form'] = $field_group;

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
    'weight' => '182',
    'children' => array(
      0 => 'group_table_label',
      1 => 'group_table_number',
      2 => 'group_table_label_l5',
      3 => 'group_table_patern_number',
      4 => 'group_table_border_10',
      5 => 'group_table_text',
      6 => 'group_table_header_font',
      7 => 'group_table_number_int',
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
      0 => 'field_title_number_r',
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
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_title|node|demand_create|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Границы рисунка');
  t('Границы таблицы');
  t('Границы таблицы 1');
  t('Заголовки');
  t('Интервал');
  t('Кавычки');
  t('Колонки');
  t('Колонтитулы');
  t('Настройка текста');
  t('Настройки нумерации');
  t('Настройки подписи');
  t('Нумерация');
  t('Нумерация картинки 1');
  t('Нумерация картинки 2');
  t('Нумерация картинки 21');
  t('Нумерация картинки 3');
  t('Нумерация картинки 4');
  t('Нумерация таблицы');
  t('Нумерация таблицы обертка');
  t('Основной текст');
  t('Основные');
  t('Отступы');
  t('Отступы и интервалы');
  t('Отступы и интервалы таблицы');
  t('Отступы и интервалы таблицы 1');
  t('Отступы и интервалы таблицы 11');
  t('Отступы и интервалы таблицы 12');
  t('Отступы и интервалы таблицы 2');
  t('Отступы и интервалы таблицы 21');
  t('Отступы и интервалы таблицы 22');
  t('Отступы и интервалы таблицы 3');
  t('Отступы и интервалы таблицы 31');
  t('Отступы и интервалы таблицы 32');
  t('Поля');
  t('РИСУНКИ (ИЛЛЮСТРАЦИИ)');
  t('Размер бумаги');
  t('Размеры');
  t('Размещение рисунка');
  t('Размещение таблицы');
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
  t('Шрифт таблицы');
  t('Шрифт таблицы 00');
  t('Шрифт таблицы 01');
  t('Шрифт таблицы 02');
  t('Шрифт таблицы 11');
  t('Шрифт таблицы 12');
  t('Шрифт таблицы 21');
  t('Шрифт таблицы 22');
  t('Шрифт таблицы 32');
  t('Шрифт таблицы 42');
  t('Шрифт цифр номера');
  t('Шрифт цифр номера 00');
  t('Шрифт шапки таблицы');
  t('Шрифт шапки таблицы 00');
  t('Шрифт шапки таблицы 10');
  t('Шрифт шапки таблицы 11');
  t('Шрифт шапки таблицы 12');
  t('Шрифт шапки таблицы 20');
  t('Шрифт шапки таблицы 21');
  t('Шрифт шапки таблицы 22');
  t('Шрифт шапки таблицы 23');
  t('Шрифт шапки таблицы 24');

  return $field_groups;
}
