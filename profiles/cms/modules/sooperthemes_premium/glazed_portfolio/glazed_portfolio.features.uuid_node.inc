<?php
/**
 * @file
 * glazed_portfolio.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function glazed_portfolio_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Teal Team Stationary Design',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664008,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '11c371b9-66d9-40d1-9fbc-e5f34dd917e3',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">And if she hasn’t been rewritten, then they are still using her.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '778b4aa1-1378-4b58-b633-80479adf1101',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">A small river named Duden flows by their place and supplies it with the necessary regelialia.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
        'uuid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:26:48 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Tall Towers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663423,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2cf32c25-71ef-41c6-842a-ec8045d53688',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">When she reached the first hills of the Italic Mountains, she had a last view back on the skyline of her hometown Bookmarksgrove, the headline of Alphabet Village and the subline of her own road, the Line Lane.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Pityful a rethoric question ran over her cheek, then she continued her way.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '8c7583d7-cc9f-4e0f-8eeb-39cf265b958c',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">And if she hasn’t been rewritten, then they are still using her.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:17:03 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'White Walkers CD',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663374,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '30e84557-9add-4d70-96b7-0c1c83f557a9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '5805d1e3-7d94-4dd9-8a4c-381a1519d2a9',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">A small river named Duden flows by their place and supplies it with the necessary regelialia.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
        'uuid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:16:14 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Skillet Album Cover',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664175,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '46776433-49a0-4da7-bf2a-35f97342e47c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">A small river named Duden flows by their place and supplies it with the necessary regelialia.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '26979d72-a7fb-41b4-bc57-3d669645eb68',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">She packed her seven versalia, put her initial into the belt and made herself on the way.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
        'uuid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:29:35 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Train',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663476,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4c6a7753-6664-418a-b55f-609954fde50e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>On her way she met a copy.</p><p>The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p><p>But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p><p>And if she hasn’t been rewritten, then they are still using her.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '1125777b-d3dc-45ba-9f7b-9d6d4618ba06',
        'image_field_caption' => array(
          'value' => '<p>Its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p><p>But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p><p>And if she hasn’t been rewritten, then they are still using her.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:17:56 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Office B&W',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664130,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4d329c65-3aac-457d-a3ae-c6a423ae4c37',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>On her way she met a copy.</p><p>The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p><p>But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '20c69894-e270-411b-a50c-1850b0543155',
        'image_field_caption' => array(
          'value' => '<p>And if she hasn’t been rewritten, then they are still using her.</p><p>Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p><p>Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:28:50 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Mist',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663637,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5d2495b3-e749-4d75-bebe-36c7ca0bf1ce',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">A small river named Duden flows by their place and supplies it with the necessary regelialia.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'dceb0281-b444-4918-ad76-c6b8c61948dd',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:20:37 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Verns Isolated',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663703,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '66705fa9-4a74-4b5d-ba68-5d4b2b441c42',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '2de1f73e-528e-4cae-b3ff-11534f48e014',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">And if she hasn’t been rewritten, then they are still using her.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:21:43 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Maniac Typeface',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664225,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e95a721-dc10-4df8-9169-66eee9cdf916',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">She packed her seven versalia, put her initial into the belt and made herself on the way.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">When she reached the first hills of the Italic Mountains, she had a last view back on the skyline of her hometown Bookmarksgrove, the headline of Alphabet Village and the subline of her own road, the Line Lane.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '06bb1b4e-0720-4514-9cfa-38c5e06f447b',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Pityful a rethoric question ran over her cheek, then she continued her way.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">On her way she met a copy.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '27db446d-edcd-47fe-a13e-7ee94963fd31',
        'uuid' => '27db446d-edcd-47fe-a13e-7ee94963fd31',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:30:25 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Mint Coffee Club Branding',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665700,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'afa694d4-055b-4cc3-a4c6-e5235621761d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '35713b94-8514-41af-83c0-cc3a0c3dc17e',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">She packed her seven versalia, put her initial into the belt and made herself on the way.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">When she reached the first hills of the Italic Mountains, she had a last view back on the skyline of her hometown Bookmarksgrove, the headline of Alphabet Village and the subline of her own road, the Line Lane.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
        'uuid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:55:00 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'NYX Law Stationary Design',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663588,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b8b2f64a-fe6b-487f-8653-64cbbb001482',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Pityful a rethoric question ran over her cheek, then she continued her way.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">On her way she met a copy.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '996822ea-af69-46ff-8c3a-17b33d7af193',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">And if she hasn’t been rewritten, then they are still using her.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
        'uuid' => '2020ba32-3910-41ba-ab55-f688cb8984ee',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:19:48 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Mouse Traps',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663278,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ba34185f-d8b1-4acd-b89a-4cf73b60609a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">When she reached the first hills of the Italic Mountains, she had a last view back on the skyline of her hometown Bookmarksgrove, the headline of Alphabet Village and the subline of her own road, the Line Lane.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Pityful a rethoric question ran over her cheek, then she continued her way. On her way she met a copy.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '7660cbfe-e4b3-4c28-9980-6e7f7e6cf6e8',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">When she reached the first hills of the Italic Mountains, she had a last view back on the skyline of her hometown Bookmarksgrove, the headline of Alphabet Village and the subline of her own road, the Line Lane.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Pityful a rethoric question ran over her cheek, then she continued her way.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">On her way she met a copy.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
        'uuid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:14:38 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Photographer Portrait',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664214,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c212c757-b184-43ac-b207-f0e1aba66f6c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">And if she hasn’t been rewritten, then they are still using her.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '26a32d29-200a-4242-97a4-9752fd92736c',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">A small river named Duden flows by their place and supplies it with the necessary regelialia.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:30:14 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Vinyl Record Branding',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664183,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c37dce4b-4ae5-4319-bca9-bd64dd759a3b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">She packed her seven versalia, put her initial into the belt and made herself on the way.</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '388ea514-8a02-4ab6-a60a-39d5a9526a77',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">When she reached the first hills of the Italic Mountains, she had a last view back on the skyline of her hometown Bookmarksgrove, the headline of Alphabet Village and the subline of her own road, the Line Lane.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Pityful a rethoric question ran over her cheek, then she continued her way.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
        'uuid' => 'cf638595-348f-4486-a34d-ecf7cb91b9c5',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:29:43 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Unsplash Portrait',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664238,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fb2a92d6-7d92-49d8-baa2-2f45a09d7d1f',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far</p>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '2286b4e8-0a6e-47e6-9db5-be3b68cc65b1',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p><p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">A small river named Duden flows by their place and supplies it with the necessary regelialia.</p>',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_mdp_categories' => array(
    'und' => array(
      0 => array(
        'tid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
        'uuid' => '667a0e7a-4952-4fbd-ad0d-f76c165afdb2',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-27 08:30:38 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  return $nodes;
}
