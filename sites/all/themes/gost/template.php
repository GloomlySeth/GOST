<?php

function gost_preprocess_views_view(&$vars){
  if($vars['view']->name === 'requirements_list'
    || $vars['view']->name === 'document_list'){
    $vars['rows']['select']['action::views_bulk_operations_delete_item']['#value'] = t('Удалить...');
    $vars['rows']['select']['action::views_bulk_operations_delete_item']['#attributes']['class'][] = 'demand_del';
  }
}

function gost_preprocess_views_view_table(&$vars) {
  if($vars['view']->name === 'requirements_list'){
    global $user;
    foreach($vars['rows'] as $key => $value){
      $value['nothing'] == $user->uid ? $vars['rows'][$key]['nothing'] = t('Мое') : $vars['rows'][$key]['nothing'] = t('Стандартное');
    }
  }
  if($vars['view']->name === 'document_list'){
    global $user;
    foreach($vars['rows'] as $key => $value){
      $vars['rows'][$key]['nothing'] = inspected_done($value['nothing']);
    }
  }
}

function inspected_done($uri) {
  $arr = explode('/', $uri);
  $doc = $arr[count($arr)-1];
  $arr[count($arr)-1]= 'Done';
  $arr[] = $doc;
  $link = implode('/', $arr);
  if(file_exists ($link)){
    $url = '<a href="' . file_create_url($link) . '" download><img src="/sites/all/themes/gost/images/Filetype-Word-doc.ico" width="25" height="25"/></a>';
    return($url);
  }
  return NULL;
}

function gost_form_alter(&$form, &$form_state, $form_id)
{
  if($form['#id'] == 'views-exposed-form-document-list-page')
  {
    $attributes = array('onclick' => "document.getElementById('edit-submit-document-list').click()");
    $form['status']['#attributes'] = $attributes;
  }
}

function gost_select($variables) {
  $flag = FALSE;
  switch($variables['element']['#id']) {
    case 'edit-field-header-setting-color-und':
    case 'edit-field-main-font-color-und':
    case 'edit-field-table-label-color-und':
    case 'edit-field-header-setting-background-und':
    case 'edit-field-main-font-background-und':
    case 'edit-field-table-label-background-und':
    case 'edit-field-pic-label-background-und':
    case 'edit-field-pic-label-color-und':
    case 'edit-field-number-font-background-und':
    case 'edit-field-number-font-color-und':
    case 'edit-field-title-font-background-und':
    case 'edit-field-title-font-color-und':
    case 'edit-field-contents-font-background-und':
    case 'edit-field-contents-font-color-und':
    case 'edit-field-table-number-background-und':
    case 'edit-field-table-number-color-und':
    case 'edit-field-list-font-background-und':
    case 'edit-field-list-font-color-und':
      drupal_add_js(path_to_theme() . '/js/demandSelect.js', 'file');
      $flag = TRUE;
      $options = '';

      foreach($variables['element']['#options'] as $key => $value) {
        $term = taxonomy_get_term_by_name($value, 'color_text');
        $options .= '<option style="background-color: ' . $term[$key]->field_taxonomy_text[LANGUAGE_NONE][0]['rgb'] . ';" value="' . $key . '"></option>';
        $variables['element']['#attributes'] = array('class' => array('demandSelect'));
      }
      break;
  }

  $element = $variables['element'];
  element_set_attributes($element, array(
    'id',
    'name',
    'size',
  ));

  _form_set_class($element, array(
    'form-select',
  ));

  $options = ($flag) ? $options : form_select_options($element);

  return '<select' . drupal_attributes($element['#attributes']) . '>' . $options . '</select>';
}
