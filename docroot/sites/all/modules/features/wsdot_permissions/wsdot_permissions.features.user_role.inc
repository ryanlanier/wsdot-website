<?php
/**
 * @file
 * wsdot_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wsdot_permissions_user_default_roles() {
  $roles = array();

  // Exported role: ER Editor.
  $roles['ER Editor'] = array(
    'name' => 'ER Editor',
    'weight' => 26,
  );

  // Exported role: Finance Editor.
  $roles['Finance Editor'] = array(
    'name' => 'Finance Editor',
    'weight' => 23,
  );

  // Exported role: NC Editor.
  $roles['NC Editor'] = array(
    'name' => 'NC Editor',
    'weight' => 25,
  );

  // Exported role: NW Editor.
  $roles['NW Editor'] = array(
    'name' => 'NW Editor',
    'weight' => 24,
  );

  // Exported role: OR Editor.
  $roles['OR Editor'] = array(
    'name' => 'OR Editor',
    'weight' => 29,
  );

  // Exported role: Policy Editor.
  $roles['Policy Editor'] = array(
    'name' => 'Policy Editor',
    'weight' => 21,
  );

  // Exported role: Research Editor.
  $roles['Research Editor'] = array(
    'name' => 'Research Editor',
    'weight' => 22,
  );

  // Exported role: SC Editor.
  $roles['SC Editor'] = array(
    'name' => 'SC Editor',
    'weight' => 27,
  );

  // Exported role: SW Editor.
  $roles['SW Editor'] = array(
    'name' => 'SW Editor',
    'weight' => 28,
  );

  return $roles;
}