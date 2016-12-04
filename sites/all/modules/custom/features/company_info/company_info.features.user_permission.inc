<?php
/**
 * @file
 * company_info.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function company_info_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any company_info profile'.
  $permissions['edit any company_info profile'] = array(
    'name' => 'edit any company_info profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own company_info profile'.
  $permissions['edit own company_info profile'] = array(
    'name' => 'edit own company_info profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any company_info profile'.
  $permissions['view any company_info profile'] = array(
    'name' => 'view any company_info profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own company_info profile'.
  $permissions['view own company_info profile'] = array(
    'name' => 'view own company_info profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  return $permissions;
}
