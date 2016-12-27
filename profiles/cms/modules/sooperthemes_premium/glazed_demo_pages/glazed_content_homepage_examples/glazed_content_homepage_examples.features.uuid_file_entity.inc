<?php
/**
 * @file
 * glazed_content_homepage_examples.features.uuid_file_entity.inc
 */

/**
 * Implements hook_uuid_features_default_file_entities().
 */
function glazed_content_homepage_examples_uuid_features_default_file_entities() {
  $files = array();

  $files[] = array(
    'filename' => 'goog-play.png',
    'uri' => 'public://page-attachments/goog-play.png',
    'filemime' => 'image/png',
    'filesize' => 5070,
    'status' => 1,
    'type' => 'image',
    'uuid' => '2966ad96-8613-4e9f-b1fa-1d8cfac88645',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'rdf_mapping' => array(),
    'metadata' => array(
      'height' => 60,
      'width' => 183,
    ),
    'alt' => '',
    'title' => '',
    'height' => 60,
    'width' => 183,
    'uuid_features_packaged_file_path' => 'assets/goog-play.png',
    'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
  );
  $files[] = array(
    'filename' => 'app-store.png',
    'uri' => 'public://page-attachments/app-store.png',
    'filemime' => 'image/png',
    'filesize' => 4041,
    'status' => 1,
    'type' => 'image',
    'uuid' => '9dccc913-9a2a-4b0b-92e4-e82e8229097b',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'rdf_mapping' => array(),
    'metadata' => array(
      'height' => 80,
      'width' => 270,
    ),
    'alt' => '',
    'title' => '',
    'height' => 80,
    'width' => 270,
    'uuid_features_packaged_file_path' => 'assets/app-store.png',
    'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
  );
  return $files;
}
