<?php

/**
 * Implements hook_views_data()
 */
function processing_views_data() {
  $data['processing']['table']['group']  = t('Processing');
  
  $data['processing']['table']['join'] = array(
    'file_managed' => array(
      'left_field' => 'fid',
      'field' => 'entity_id',
    ),
  );

  $data['processing']['status'] = array(
    'title'  => 'Status document',
    'help'   => 'Custom table processing',
    'group'  => t('Processing'),
    'field'  => array('handler' => 'views_handler_field'),
    'sort'   => array('handler' => 'views_handler_sort'),
    'filter' => array('handler' => 'views_handler_filter_string'),
  );

  $data['processing']['demand'] = array(
    'title'  => 'Demand',
    'help'   => 'Custom table processing',
    'group'  => t('Processing'),
    'field'  => array('handler' => 'views_handler_field'),
    'sort'   => array('handler' => 'views_handler_sort'),
    'filter' => array('handler' => 'views_handler_filter_string'),
  );
 
  return $data;
}