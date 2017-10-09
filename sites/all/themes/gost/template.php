<?php

function gost_preprocess_views_view(&$vars){
  if($vars['view']->name === 'requirements_list'){
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
    $url = '<a href="' . file_create_url($link) . '" download>Download</a>';
    return($url);
  }
  return NULL;
}
