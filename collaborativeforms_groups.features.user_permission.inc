<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function collaborativeforms_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer organic groups
  $permissions['administer organic groups'] = array(
    'name' => 'administer organic groups',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: can be invited to join groups
  $permissions['can be invited to join groups'] = array(
    'name' => 'can be invited to join groups',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
    ),
  );

  // Exported permission: create organization content
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete any organization content
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete own organization content
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit any organization content
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit own organization content
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  return $permissions;
}
