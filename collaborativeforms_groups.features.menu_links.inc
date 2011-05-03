<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function collaborativeforms_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:organizations
  $menu_links['primary-links:organizations'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'organizations',
    'router_path' => 'organizations',
    'link_title' => 'Organizations',
    'options' => array(
      'attributes' => array(
        'title' => 'Directory of all organizations',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Organizations');


  return $menu_links;
}
