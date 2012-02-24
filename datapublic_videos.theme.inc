<?php
// $Id$

/**
 * @file
 * Provides all the necessary theming functions for the oembed thumbnail
 */


/**
 * Implements hook_theme().
 * Adding re_oembed_mods oembed field template suggestion.
 */ 
/*
function re_oembed_mods_theme($existing) {
  $module_theme_path = drupal_get_path('module', 're_oembed_mods') . '/theme';
  $item = $existing['oembed'];
  $item['path'] = drupal_get_path('module', 're_oembed_mods') ."/theme";
  return array("oembed" => $item); 
}
*/


/**
 * Implements of hook_theme().
 */
function datapublic_videos_theme($existing, $type, $theme, $path) {
  $oembed_field = isset($existing['oembed']) ? $existing['oembed'] : array();
  $oembed_field['path'] = $path . '/theme';
  $oembed_field['template'] = 'oembed--field-video-link';
  dpm($oembed_field);
  return array(
    'oembed__field_video_link' => $oembed_field,
  );

  /*
  // Provide template for photo gallery image field:
  $oembed_field = isset($existing['field']) ? $existing['field'] : array();
  $oembed_field['path'] = $path . '/theme';
  $oembed_field['template'] = 'field--field-photo-gallery-image';
  return array(
    'field__field_photo_gallery_image' => $oembed_field,
  );
  */
} // datapublic_videos_theme()

function datapublic_videos_theme_registry_alter(&$theme_registry) {
  //dpm($foo['oembed']);
  //dpm($theme_registry);
}