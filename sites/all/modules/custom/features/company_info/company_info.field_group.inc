<?php
/**
 * @file
 * company_info.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function company_info_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bank|profile2|company_info|form';
  $field_group->group_name = 'group_bank';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'company_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Банковские и другие реквизиты',
    'weight' => '5',
    'children' => array(
      0 => 'field_bank_unn',
      1 => 'field_bank_okpo',
      2 => 'field_bank_account',
      3 => 'field_bank_name',
      4 => 'field_bank_code',
      5 => 'field_bank_address',
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
        'classes' => 'group-bank field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_bank|profile2|company_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|company_info|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'company_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Контактная информация',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_fax',
      1 => 'field_contact_phone',
      2 => 'field_contact_email',
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
        'classes' => 'group-contact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|profile2|company_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direction|profile2|company_info|form';
  $field_group->group_name = 'group_direction';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'company_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Руководство (кто подписывает договор)',
    'weight' => '3',
    'children' => array(
      0 => 'field_direction_job',
      1 => 'field_direction_proxy',
      2 => 'field_direction_name',
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
        'classes' => 'group-direction field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_direction|profile2|company_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|profile2|company_info|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'company_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Информация о компании',
    'weight' => '0',
    'children' => array(
      0 => 'field_trade_name',
      1 => 'field_brief_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Информация о компании',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-name field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_name|profile2|company_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_post|profile2|company_info|form';
  $field_group->group_name = 'group_post';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'company_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Почтовый адрес',
    'weight' => '2',
    'children' => array(
      0 => 'field_post_state',
      1 => 'field__post_index',
      2 => 'field_post_address',
      3 => 'field_post_city',
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
        'classes' => 'group-post field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_post|profile2|company_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trade|profile2|company_info|form';
  $field_group->group_name = 'group_trade';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'company_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Юридический адрес',
    'weight' => '1',
    'children' => array(
      0 => 'field_legal_state',
      1 => 'field_legal_citi',
      2 => 'field_legal_post',
      3 => 'field_legal_address',
      4 => 'field_legal_city',
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
        'classes' => 'group-trade field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_trade|profile2|company_info|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Банковские и другие реквизиты');
  t('Информация о компании');
  t('Контактная информация');
  t('Почтовый адрес');
  t('Руководство (кто подписывает договор)');
  t('Юридический адрес');

  return $field_groups;
}
