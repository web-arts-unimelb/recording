<?php
/**
 * @file
 * recording.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recording_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function recording_image_default_styles() {
  $styles = array();

  // Exported image style: media_listing_image.
  $styles['media_listing_image'] = array(
    'name' => 'media_listing_image',
    'label' => 'media_listing_image',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function recording_node_info() {
  $items = array(
    'recording' => array(
      'name' => t('recording'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
