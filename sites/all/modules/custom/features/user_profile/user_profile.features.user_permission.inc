<?php
/**
 * @file
 * bd.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
