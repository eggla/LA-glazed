<?php
/**
 * @file
 * glazed_content_elements_examples_1.features.uuid_file_entity.inc
 */

/**
 * Implements hook_uuid_features_default_file_entities().
 */
function glazed_content_elements_examples_1_uuid_features_default_file_entities() {
  $files = array();

  $files[] = array(
    'filename' => 'glazed-video-placeholder.png',
    'uri' => 'public://page-attachments/glazed-video-placeholder.png',
    'filemime' => 'image/png',
    'filesize' => 7126,
    'status' => 1,
    'type' => 'image',
    'uuid' => '6246be7a-8011-4979-813f-47d668234a2c',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'rdf_mapping' => array(),
    'metadata' => array(
      'height' => 540,
      'width' => 960,
    ),
    'alt' => '',
    'title' => '',
    'height' => 540,
    'width' => 960,
    'uuid_features_packaged_file_path' => 'assets/glazed-video-placeholder.png',
    'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
  );
  return $files;
}
