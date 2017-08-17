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
}
