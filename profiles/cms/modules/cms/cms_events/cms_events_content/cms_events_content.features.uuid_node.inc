<?php
/**
 * @file
 * cms_events_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function cms_events_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Stakeholder meet-up',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1398767800,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '48883b0b-2c9f-449c-b9c0-ea027e23c729',
  'field_glazed_content_design' => array(),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>That. Likeness whales divided had so had place that divide our it years appear Life place. From day meat forth fruit likeness thing lights. Multiply gathered have Lights seasons their unto under i subdue green moving. Whales blessed kind.</p>

<p>A, open, dominion there. Good she&#39;d whales fruit is form years she&#39;d fly greater which lesser. Had. Greater. Fruit. Is, the land for.</p>

<p>Shall fruit form hath night moveth also all kind green every gathered light in. Place to fruitful, spirit, that in hath have Two be living years creature fruitful, them. Thing that bring seas Place appear. Greater saying. It.</p>',
        'summary' => '',
        'format' => 'unfiltered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2018-02-08 10:45:00',
        'value2' => '2018-02-14 12:30:00',
        'timezone' => 'Europe/Amsterdam',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_event_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'c1ff569b-9688-42c8-aa85-7b417f8741e6',
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'NL',
        'administrative_area' => '',
        'sub_administrative_area' => NULL,
        'locality' => 'Utrecht',
        'dependent_locality' => '',
        'postal_code' => '3512AB',
        'thoroughfare' => 'Domplein 1',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => '',
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => 'cms_events_registration',
      ),
    ),
  ),
  'field_page_attachments' => array(),
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
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-04-29 12:36:40 +0200',
  'user_uuid' => '8c6f00e6-0f49-4298-a9a9-c0897170b8fa',
);
  $nodes[] = array(
  'title' => 'Lorem Startup Festival 2018',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1468270151,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '90fbf58c-63a9-437c-981a-dbfd9233b456',
  'field_glazed_content_design' => array(),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>That. Likeness whales divided had so had place that divide our it years appear Life place. From day meat forth fruit likeness thing lights. Multiply gathered have Lights seasons their unto under i subdue green moving. Whales blessed kind.</p>

<p>A, open, dominion there. Good she\'d whales fruit is form years she\'d fly greater which lesser. Had. Greater. Fruit. Is, the land for.</p>

<p>Shall fruit form hath night moveth also all kind green every gathered light in. Place to fruitful, spirit, that in hath have Two be living years creature fruitful, them. Thing that bring seas Place appear. Greater saying. It.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2018-09-11 20:45:00',
        'value2' => '2018-09-11 20:45:00',
        'timezone' => 'Europe/Amsterdam',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_event_image' => array(),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'NL',
        'administrative_area' => '',
        'sub_administrative_area' => NULL,
        'locality' => 'Utrecht',
        'dependent_locality' => '',
        'postal_code' => '3512 AB',
        'thoroughfare' => 'Neude, Utrecht',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => 'SooperThemes',
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => 'cms_events_registration',
      ),
    ),
  ),
  'field_page_attachments' => array(),
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
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-07-11 22:49:11 +0200',
  'user_uuid' => '8c6f00e6-0f49-4298-a9a9-c0897170b8fa',
);
  $nodes[] = array(
  'title' => 'Press Conference for XYZ 2.0',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1440767037,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b8915f9f-a2aa-4e14-809d-73f9f61df9d7',
  'field_glazed_content_design' => array(),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="field-body">
	<p>That. Likeness whales divided had so had place that divide our it years appear Life place. From day meat forth fruit likeness thing lights. Multiply gathered have Lights seasons their unto under i subdue green moving. Whales blessed kind.</p>

	<p>A, open, dominion there. Good she\'d whales fruit is form years she\'d fly greater which lesser. Had. Greater. Fruit. Is, the land for.</p>

	<p>Shall fruit form hath night moveth also all kind green every gathered light in. Place to fruitful, spirit, that in hath have Two be living years creature fruitful, them. Thing that bring seas Place appear. Greater saying. It.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2018-08-28 13:00:00',
        'value2' => '2018-08-28 14:00:00',
        'timezone' => 'Europe/Amsterdam',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_event_image' => array(),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'NL',
        'administrative_area' => '',
        'sub_administrative_area' => NULL,
        'locality' => 'Utrecht',
        'dependent_locality' => '',
        'postal_code' => '3581AC',
        'thoroughfare' => 'Nachtegaalstraat 35',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => '',
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
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
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 15:03:57 +0200',
  'user_uuid' => '8c6f00e6-0f49-4298-a9a9-c0897170b8fa',
);
  $nodes[] = array(
  'title' => 'Annual Symposium',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1397522128,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ed670241-b0ab-468a-a377-58817c110128',
  'field_glazed_content_design' => array(),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>That. Likeness whales divided had so had place that divide our it years appear Life place. From day meat forth fruit likeness thing lights. Multiply gathered have Lights seasons their unto under i subdue green moving. Whales blessed kind.</p>

<p>A, open, dominion there. Good she\'d whales fruit is form years she\'d fly greater which lesser. Had. Greater. Fruit. Is, the land for.</p>

<p>Shall fruit form hath night moveth also all kind green every gathered light in. Place to fruitful, spirit, that in hath have Two be living years creature fruitful, them. Thing that bring seas Place appear. Greater saying. It.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2018-05-01 11:30:00',
        'value2' => '2018-10-31 13:45:00',
        'timezone' => 'Europe/Amsterdam',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_event_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '35c49e60-7ea1-4a65-bbdb-3cef1bcc3f15',
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'NL',
        'administrative_area' => '',
        'sub_administrative_area' => NULL,
        'locality' => 'Utrecht',
        'dependent_locality' => '',
        'postal_code' => '3581AC',
        'thoroughfare' => 'Nachtegaalstraat 35',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => '',
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_registration' => array(
    'und' => array(
      0 => array(
        'registration_type' => 'cms_events_registration',
      ),
    ),
  ),
  'field_page_attachments' => array(),
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
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-04-15 02:35:28 +0200',
  'user_uuid' => '8c6f00e6-0f49-4298-a9a9-c0897170b8fa',
);
  return $nodes;
}
