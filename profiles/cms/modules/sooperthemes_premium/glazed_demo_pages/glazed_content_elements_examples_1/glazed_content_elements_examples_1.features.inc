<?php
/**
 * @file
 * glazed_content_elements_examples_1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glazed_content_elements_examples_1_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
