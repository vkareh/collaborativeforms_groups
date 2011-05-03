<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function collaborativeforms_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function collaborativeforms_groups_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function collaborativeforms_groups_views_api() {
  return array(
    'api' => '2',
  );
}
