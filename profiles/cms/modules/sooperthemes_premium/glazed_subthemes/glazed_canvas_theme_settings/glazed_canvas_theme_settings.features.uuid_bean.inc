<?php
/**
 * @file
 * glazed_canvas_theme_settings.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function glazed_canvas_theme_settings_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'SooperThemes Copyright Drupal TM',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'sooperthemes-copyright-drupal-tm',
    'view_mode' => 'default',
    'created' => 1432657587,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'b8e00d66-264a-4d18-b4fe-fd45b03b6908',
    'uuid' => '29f27e3b-7c6e-4c8d-bdcb-f09b48f9e3da',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Copyright – Powered by Drupal. Made with <a href="http://www.sooperthemes.com/">SooperThemes Drupal Themes</a>.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'user_uuid' => 'a734c844-79cd-4971-b4f4-8f94c5b5e1d2',
  );
  $beans[] = array(
    'label' => 'Contact Block',
    'description' => NULL,
    'title' => '',
    'type' => 'cb_drag_drop_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'contact-block',
    'view_mode' => 'default',
    'created' => 1450730862,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'b890a719-a44f-4a77-ac32-1da6056f69e3',
    'uuid' => 'af442a54-e385-44e3-b24a-45b32fa5fe41',
    'field_cb_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<div data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b5" class="az-element az-text" style=""><h2>We\'d Love to Hear From You.</h2>

<p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.</p>
</div></div><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b6" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-height="200" data-azat-address="Nachtegaalstraat 35, Utrecht" data-azb="az_map" data-az-id="b7" class="az-element az-map "><iframe style="width: 100%; height: 200px;" src="https://maps.google.com/maps?q=Nachtegaalstraat+35, Utrecht&amp;iwloc=near&amp;output=embed" frameborder="0"></<iframe></iframe></div></div></div></div></div>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
    'user_uuid' => 'a734c844-79cd-4971-b4f4-8f94c5b5e1d2',
  );
  $beans[] = array(
    'label' => 'Glazed Facebook Widget',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'glazed-facebook-widget',
    'view_mode' => 'default',
    'created' => 1441800692,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '39689dfb-95a1-4360-8bed-1d6d9b77f60a',
    'uuid' => 'b832cdf9-17d9-4f8a-96db-1de475fb59c3',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&appId=568856383201152&version=v2.0";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>
<div class="fb-like-box" data-href="https://www.facebook.com/sooperthemes" data-colorscheme="light" data-width="270" data-show-faces="true" data-header="false" data-stream="false" data-show-border="true"></div>',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'user_uuid' => 'a734c844-79cd-4971-b4f4-8f94c5b5e1d2',
  );
  return $beans;
}
