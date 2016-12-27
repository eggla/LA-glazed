<?php
/**
 * @file
 * glazed_content_elements_examples_2.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function glazed_content_elements_examples_2_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Image Element & Slider',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277789,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0d2550e9-bc2f-42f7-9f4a-27f5ad950b94',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style="">
					<h2 style="text-align: center;">Image Element</h2>
				</div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style="">
					<p class="lead">The image element is a simple element that lets you upload images, or select them from the Drupal media library. Animation and image styling are very easy using the Carbide Builder element settings.</p>
				</div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b13" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-height="" data-azat-image="http://i.imgur.com/KJ0Cgre.jpg" data-azb="az_image" data-az-id="b14" class="az-element az-image "><img style="width: 100%;" src="http://i.imgur.com/KJ0Cgre.jpg" alt="" title=""></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b16" id="b16" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-top:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b17" class="az-element az-row row" style="padding-top:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b18" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b19" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-style="padding-bottom:3%;" data-azb="az_text" data-az-id="b20" class="az-element az-text" style="padding-bottom:3%;">
					<h2 style="text-align: center;">Image animation on scroll event</h2>
				</div><div data-azat-an_offset="70" data-azat-an_hidden="before_in" data-azat-an_in="slideInLeft" data-azat-an_start="appear" data-azat-height="" data-azat-image="http://i.imgur.com/KJ0Cgre.jpg" data-azb="az_image" style="opacity: 0;" data-az-id="b21" class="az-element az-image "><img style="width: 100%;" src="http://i.imgur.com/KJ0Cgre.jpg" alt="" title=""></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b23" id="b23" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b24" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b25" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b26" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b27" class="az-element az-text" style="">
					<h2 style="text-align: center;">Image Carousel</h2>
				</div><div data-azcnt="true" data-azb="az_text" data-az-id="b28" class="az-element az-text" style="">
					<p class="lead">The image carousel is a shortcut to creating a slider with only images in it. You don\'t need to manage separate slides and their content: just add images.</p>
				</div><hr data-azb="az_separator" data-az-id="b29" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b31" id="b31" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b32" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b33" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b34" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-style="margin-top:-5%;" data-azat-images="http://i.imgur.com/vo7Qbyw.jpg,http://i.imgur.com/8jMrhmb.jpg,http://i.imgur.com/xxZvNgI.jpg" data-azb="az_images_carousel" data-az-id="b35" id="b35" class="az-element az-images-carousel carousel slide " data-ride="carousel" style="margin-top:-5%;"><ol class="carousel-indicators"><li class="active" data-target="#b35" data-slide-to="0"></li><li class="" data-target="#b35" data-slide-to="1"></li><li class="" data-target="#b35" data-slide-to="2"></li></ol><div class="carousel-inner"><img class="item active" style="width:100%" src="http://i.imgur.com/vo7Qbyw.jpg" alt="" title=""><img class="item" style="width:100%" src="http://i.imgur.com/8jMrhmb.jpg" alt="" title=""><img class="item" style="width:100%" src="http://i.imgur.com/xxZvNgI.jpg" alt="" title=""></div><a class="left carousel-control" href="#b35" data-slide="prev"><span class="glyphicon glyphicon-chevron-left"></span></a><a class="right carousel-control" href="#b35" data-slide="next"><span class="glyphicon glyphicon-chevron-right"></span></a></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b36" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:5%;" data-azb="az_section" data-az-id="b37" id="b37" class="az-element az-section  " style="padding-top:5%;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b38" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b39" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b40" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b41" class="az-element az-text" style="">
					<h2 style="text-align: center;">Hidden next/prev controls</h2>
				</div><div data-azat-hide="prev_next_buttons" data-azat-images="http://i.imgur.com/TDPlMs6.png,http://i.imgur.com/6clRyUy.png,http://i.imgur.com/Mib79K8.png" data-azb="az_images_carousel" data-az-id="b42" id="b42" class="az-element az-images-carousel carousel slide " data-ride="carousel" style=""><ol class="carousel-indicators"><li class="active" data-target="#b42" data-slide-to="0"></li><li class="" data-target="#b42" data-slide-to="1"></li><li class="" data-target="#b42" data-slide-to="2"></li></ol><div class="carousel-inner"><img class="item active" style="width:100%" src="http://i.imgur.com/TDPlMs6.png" alt="" title=""><img class="item" style="width:100%" src="http://i.imgur.com/6clRyUy.png" alt="" title=""><img class="item" style="width:100%" src="http://i.imgur.com/Mib79K8.png" alt="" title=""></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b43" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/animate.css/animate.min.css">
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:49:49 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Revolution Slider',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1460621876,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a7f1fac-caa4-42b6-8c3e-46fef3fc12e1',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style="">
					<h2 style="text-align: center;">Revolution Slider</h2>
				</div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style="">
					<p class="lead">Revolution Slider Drupal module is included free with our Glazed theme and Carbide Builder downloads. Create your own custom slideshows with a complete slide and layer animation engine. Alternatively, import a slider from the <a href="https://revolution.themepunch.com/free-slider-exchange/">ThemePunch libary</a>*.</p>

				</div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:5%;" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style="padding-top:5%;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azb="az_block-revslider-1" data-az-id="b13" class="az-element az-cms-element " style=""></div></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-04-14 10:17:56 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Animation with Glazed & Carbide Builder',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277935,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34998698-bc3b-4056-a6b6-b793443a2edc',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="margin-top:0px;padding-top:60px;background-color:#fafafa;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="margin-top:0px;padding-top:60px;background-color:#fafafa;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="2/3" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azat-style="margin-bottom:-175%;margin-left:-20%;opacity:0.25;" data-azat-an_duration="3000" data-azat-an_infinite="yes" data-azat-an_in="floatSmall" data-azat-an_start="appear" data-azat-height="" data-azat-image="http://i.imgur.com/cxAM4jE.png" data-azb="az_image" style="" data-az-id="b5" class="az-element az-image"><img style="margin-bottom: -175%; margin-left: -20%; opacity: 0.25; width: 100%;" src="http://i.imgur.com/cxAM4jE.png" alt="" title=""></div><div data-azat-an_duration="3000" data-azat-an_infinite="yes" data-azat-an_in="float" data-azat-an_start="appear" data-azat-height="" data-azat-width="80%" data-azat-image="http://i.imgur.com/my9DPGv.png" data-azb="az_image" style="" data-az-id="b6" class="az-element az-image"><img style="width: 80%;" src="http://i.imgur.com/my9DPGv.png" alt="" title=""></div><div data-azat-style="margin-top:-12%;margin-left:15%;" data-azat-an_in_delay="300" data-azat-an_duration="3000" data-azat-an_infinite="yes" data-azat-an_in="float" data-azat-an_start="appear" data-azat-height="" data-azat-width="60%" data-azat-image="http://i.imgur.com/7o2VHAp.png" data-azb="az_image" style="" data-az-id="b7" class="az-element az-image"><img style="margin-top: -12%; margin-left: 15%; width: 60%;" src="http://i.imgur.com/7o2VHAp.png" alt="" title=""></div><div data-azat-style="margin-top:-15%;margin-left:13%;" data-azat-an_duration="3000" data-azat-an_infinite="yes" data-azat-an_in="floatSmall" data-azat-an_start="appear" data-azat-height="" data-azat-width="62%" data-azat-image="http://i.imgur.com/mMCSy3x.png" data-azb="az_image" data-az-id="b8" class="az-element az-image "><img style="margin-top: -15%; margin-left: 13%; width: 62%;" src="http://i.imgur.com/mMCSy3x.png" alt="" title=""></div></div><div data-azcnt="true" data-azat-style="padding-top:10%;" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-4" style="padding-top:10%;"><div data-azcnt="true" data-azat-an_in_delay="100" data-azat-an_duration="300" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azb="az_text" data-az-id="b10" class="az-element az-text" style="opacity: 1;"><h2>Animation<br></h2></div><div data-azcnt="true" data-azat-an_in_delay="400" data-azat-an_duration="300" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azb="az_text" data-az-id="b11" class="az-element az-text" style="opacity: 1;">
          <p class="lead"><span style="color:#747a85;">When used tastefully animations can engage your customers and amplify your message.</span></p>
        </div><div data-azcnt="true" data-azat-an_in_delay="700" data-azat-an_duration="300" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azb="az_text" data-az-id="b12" class="az-element az-text" style="opacity: 1;">
          <p class="lead"><span style="color:#747a85;">To the left we use the Glazed float animation to convey that this product is light as a feather.</span></p>
        </div></div></div></div></div><div data-azat-style="margin-top:-8%;background-position:right top;" data-azat-parallax_speed="9" data-azb="az_section" data-az-id="b13" id="b13" class="az-element az-section  " style="margin-top:-8%;background-position:right top;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b14" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-style="padding-top:30%;padding-right:10%;" data-azat-width="1/2" data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-6" style="padding-top:30%;padding-right:10%;"><div data-azcnt="true" data-azb="az_text" data-az-id="b16" class="az-element az-text" style=""><h2>Sometimes a simple scrolling background is all you need</h2>

<p class="lead">The parallax background is a special effect that is only available on the section&nbsp; element. It is typically used for animation of large background photos but in this case we use it a little differently.</p>
</div></div><div data-azcnt="true" data-azat-style="padding-right:100px;" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b17" class="az-element az-ctnr az-column  col-sm-6" style="padding-right:100px;"><div data-azat-style="margin-left:-10%;padding-bottom:50%;padding-left:10%;background-image: url(http://i.imgur.com/5tI0ROE.png);background-repeat: no-repeat;background-position:right top;" data-azat-parallax_mode="scroll" data-azat-parallax_speed="50" data-azat-effect="parallax" data-azb="az_section" data-az-id="b18" id="b18" class="az-element az-section  " style="margin-left:-10%;padding-bottom:50%;padding-left:10%;background-image: url(http://i.imgur.com/5tI0ROE.png);background-repeat: no-repeat;background-position:right top;"><div data-azcnt="true" class="az-ctnr container"><div data-azat-style="margin-left:-13%;margin-right:20%;" data-azat-an_duration="3000" data-azat-an_offset="35" data-azat-an_infinite="yes" data-azat-an_in="floatSmall" data-azat-an_start="appear" data-azat-height="" data-azat-image="http://i.imgur.com/1FyYrue.png" data-azb="az_image" data-az-id="b19" class="az-element az-image "><img style="margin-left: -13%; margin-right: 20%; width: 100%;" src="http://i.imgur.com/1FyYrue.png" alt="" title=""></div></div></div></div></div></div></div><div data-azat-style="padding-top:100px;padding-bottom:100px;background-color:#fafafa;" data-azb="az_section" data-az-id="b20" id="b20" class="az-element az-section  " style="padding-top:100px;padding-bottom:100px;background-color:#fafafa;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b21" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b23" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azcnt="true" data-azat-style="margin-top:15px;margin-bottom:40px;" data-azat-an_in_delay="500" data-azat-an_duration="300" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_text" data-az-id="b24" class="az-element az-text" style="margin-top: 15px; margin-bottom: 40px; opacity: 0;"><h2 style="text-align: center;">Animate Anything, Without Coding<br></h2><p class="lead" style="text-align: center;">Frontend development used to be complicated and error prone, especially with animation. With Glazed and Carbide Builder it\'s super easy. All the animations on this page are done just by enabling some animation presets and setting the speed. <br></p></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b25" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b26" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b27" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column  col-sm-6" style=""></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b29" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:120px;padding-bottom:120px;background-image: url(http://i.imgur.com/nB7m65I.jpg);background-repeat: no-repeat;background-size: cover;" data-azat-el_class="glazed-util-overlay-primary glazed-util-overlay-60" data-azb="az_section" data-az-id="b30" id="b30" class="az-element az-section glazed-util-overlay-primary glazed-util-overlay-60 " style="padding-top:120px;padding-bottom:120px;background-image: url(http://i.imgur.com/nB7m65I.jpg);background-repeat: no-repeat;background-size: cover;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:30px;" data-azat-an_in_delay="100" data-azat-an_hidden="before_in" data-azat-an_in="flipInX" data-azat-an_start="appear" data-azb="az_text" data-az-id="b31" class="az-element az-text" style="padding-bottom: 30px; opacity: 0;"><h1 style="text-align: center;">Top Animation Features</h1>
</div><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b32" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b33" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInLeft" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b34" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b35" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-mobile" data-azb="az_icon" data-az-id="b36" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-mobile fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b37" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b38" class="az-element az-text" style=""><h3>Responsive Animation<br></h3><p class="lead">Try this page on your mobile. All animations work great on mobile devices, even when the responsive grid is collapsed to a single column.<br></p></div></div></div></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b39" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInRight" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b40" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b41" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-hotairballoon" data-azb="az_icon" data-az-id="b42" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-hotairballoon fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b43" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b44" class="az-element az-text" style=""><h3>Scroll Animations</h3><p class="lead">With Carbide Builder you can create awesome scroll animations without any coding. Create amazing depth perception with parallax backgrounds.<br></p></div></div></div></div></div><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b45" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b46" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInLeft" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b47" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b48" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-happy" data-azb="az_icon" data-az-id="b49" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-happy fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b50" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b51" class="az-element az-text" style=""><h3>No Code</h3>

<p class="lead">Carbide Builder lets you add these beautiful animations at the click of a mouse. No coding skills needed.</p>
</div></div></div></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b52" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInRight" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b53" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b54" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-adjustments" data-azb="az_icon" data-az-id="b55" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-adjustments fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b56" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b57" class="az-element az-text" style=""><h3>Advanced Animation Settings<br></h3><p class="lead">Start with out animate.css presets and customize from there. You can change animation speed, events, transitions and more!<br></p></div></div></div></div></div><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b58" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b59" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInLeft" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b60" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b61" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-browser" data-azb="az_icon" data-az-id="b62" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-browser fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b63" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b64" class="az-element az-text" style=""><h3>Full Demo Content Included<br></h3><p class="lead">Nothing is more fun that opening up the pre-installed demo content and editing animations.<br></p></div></div></div></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b65" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInRight" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b66" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b67" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-tools" data-azb="az_icon" data-az-id="b68" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-tools fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b69" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b70" class="az-element az-text" style=""><h3>Bootstrap 3</h3>

<p class="lead">All the animations&nbsp; play nice with Bootstrap 3. In this section we stack different animations on rows and columns for a combined effect.</p>
</div></div></div></div></div><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b71" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b72" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInLeft" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b73" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b74" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-streetsign" data-azb="az_icon" data-az-id="b75" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-streetsign fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b76" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b77" class="az-element az-text" style=""><h3>Directional or On the Spot<br></h3><p class="lead">Use directional animations to move the user forward, or keep an animation centered to keep attention on your call to action.<br></p></div></div></div></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b78" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInRight" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b79" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b80" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-bike" data-azb="az_icon" data-az-id="b81" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-bike fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b82" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b83" class="az-element az-text" style=""><h3>PageSpeed Optimized</h3><p class="lead">Our customized animation library is half the size animate.css while keeping. It\'s only loaded on there pages that need it.<br></p></div></div></div></div></div><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInUp" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b84" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b85" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInLeft" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b86" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b87" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-newspaper" data-azb="az_icon" data-az-id="b88" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-newspaper fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b89" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b90" class="az-element az-text" style=""><h3>Site-wide animations</h3><p class="lead">Have you seen are mobile menu? Besides the menu Glazed supports animated page title options and more.<br></p></div></div></div></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b91" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_duration="400" data-azat-an_offset="90" data-azat-an_hidden="before_in" data-azat-an_in="fadeInRight" data-azat-an_start="appear" data-azat-device="sm" data-azb="az_row" data-az-id="b92" class="az-element az-row row" style="opacity: 0;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b93" class="az-element az-ctnr az-column  col-sm-2" style=""><div data-azat-el_class="text-right glazed-util-color-accent1" data-azat-size="fa-3x" data-azat-icon="et et-icon-heart" data-azb="az_icon" data-az-id="b94" style="" class="az-element az-icon text-right glazed-util-color-accent1"><i class="et et-icon-heart fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b95" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b96" class="az-element az-text" style=""><h3>Support &amp; Community</h3>

<p class="lead">Animations can be simple to create but it takes some experience to know the full capabilities of our animation tools. Our customer support and community are ready to help you out!</p>
</div></div></div></div></div></div></div><div data-azat-style="padding-top:15%;padding-bottom:15%;background-color:#fafafa;background-image: url(http://i.imgur.com/vt9ofZX.jpg);background-repeat: no-repeat;background-position:right bottom;" data-azat-el_class="glazed-util-overlay-white glazed-util-overlay-20" data-azb="az_section" data-az-id="b97" id="b97" class="az-element az-section glazed-util-overlay-white glazed-util-overlay-20 " style="padding-top:15%;padding-bottom:15%;background-color:#fafafa;background-image: url(http://i.imgur.com/vt9ofZX.jpg);background-repeat: no-repeat;background-position:right bottom;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b98" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b99" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-style="background-color:#fafafa;" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b100" class="az-element az-ctnr az-column  col-sm-8" style="background-color:#fafafa;"><div data-azcnt="true" data-azat-style="padding-top:20px;" data-azb="az_text" data-az-id="b101" class="az-element az-text" style="padding-top:20px;"><h2 style="text-align: center;">Technical details</h2>
</div><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b102" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b103" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-center" data-azat-speed="1000" data-azat-fontsize="72" data-azat-end="46" data-azb="az_counter" data-az-id="b104" class="az-element az-counter"><div id="b104" class="text-center" style="font-size: 72px;">0</div></div><div data-azcnt="true" data-azb="az_text" data-az-id="b105" class="az-element az-text" style=""><p style="text-align: center;"><em>Animation presets</em></p>
</div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b106" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-center" data-azat-speed="1000" data-azat-fontsize="72" data-azat-end="16" data-azb="az_counter" data-az-id="b107" class="az-element az-counter"><div id="b107" class="text-center" style="font-size: 72px;">0</div></div><div data-azcnt="true" data-azb="az_text" data-az-id="b108" class="az-element az-text" style=""><p style="text-align: center;"><em>Animation settings</em></p>
</div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b109" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-center" data-azat-speed="1000" data-azat-fontsize="72" data-azat-end="2" data-azb="az_counter" data-az-id="b110" class="az-element az-counter"><div id="b110" class="text-center" style="font-size: 72px;">0</div></div><div data-azcnt="true" data-azb="az_text" data-az-id="b111" class="az-element az-text" style=""><p style="text-align: center;">Parallax scroll types</p>
</div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b112" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-center" data-azat-postfix="kb" data-azat-speed="1000" data-azat-fontsize="72" data-azat-end="4" data-azb="az_counter" data-az-id="b113" class="az-element az-counter"><div id="b113" class="text-center" style="font-size: 72px;">0</div></div><div data-azcnt="true" data-azb="az_text" data-az-id="b114" class="az-element az-text" style=""><p style="text-align: center;">Gzipped</p>
</div></div></div></div><div data-azcnt="true" data-azat-style="background-color:#fafafa;" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b115" class="az-element az-ctnr az-column  col-sm-2" style="background-color:#fafafa;"></div></div></div></div><div data-azat-style="padding-top:5%;background-color:#ffffff;" data-azb="az_section" data-az-id="b116" id="b116" class="az-element az-section  " style="padding-top:5%;background-color:#ffffff;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b117" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b118" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b119" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_text" data-az-id="b120" class="az-element az-text" style="opacity: 0;"><p class="lead">With Glazed theme and Carbide Builder it\'s super easy to add animation to your content. Every element has an animation tab, where you can choose from a library of animate.css animations.</p>

<p class="lead">You can select when the animation starts: for example when an element scrolls into view, or into a certain height in the browser. You can control how speedy the animation is by setting the duration. And there\'s more to discover. Can\'t wait to try?&nbsp;</p>
</div><div data-azat-style="margin-top:15px;" data-azat-el_class="text-center" data-azat-an_in_delay="350" data-azat-an_hidden="before_in" data-azat-an_in="flipInX" data-azat-an_start="appear" data-azat-size="btn-lg" data-azat-type="btn-primary" data-azat-link_target="_self" data-azat-link="http://www.sooperthemes.com/pricing" data-azat-title="Join SooperThemes For $48" data-azb="az_button" style="opacity: 0;" data-az-id="b121" class="az-element az-button text-center"><a href="http://www.sooperthemes.com/pricing" type="button" class="btn btn-primary btn-lg " style="margin-top:15px;" target="_self">Join SooperThemes For $48</a></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b122" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/et-line-font/et-line-font.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/css/icon-helpers.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/animate.css/animate.min.css">
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.parallax/jquery.parallax.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery-countTo/jquery.countTo.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:52:15 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Motion Image Box',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1430066907,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '448c021f-1d62-43a3-aaa9-6111e2dca456',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style="">
					<h2 style="text-align: center;">Authentic Motion with Glazed Image Box</h2>
				</div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style="">
					<p class="lead">It\'s&nbsp;easier than ever to&nbsp;implement modern design principples like&nbsp;<em>Authentic Motion</em> to your website. Our drag and drop image boxes are ready to fit in any column size and you can easily swap out the image and update the texts!</p>
				</div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style="border: none;"><div data-azcnt="true" data-azb="az_unknown" data-az-id="b9" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b10" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b11" id="b11" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b12" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b13" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b14" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="ashanti-animation" data-az-id="b15" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--ashanti wow" data-wow-offset="556" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/PERJ4sf.png" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Ashanti Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b16" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b17" id="b17" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b18" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b19" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="lunda-animation" data-az-id="b21" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--lunda wow" data-wow-offset="583" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/odMOjGC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Lunda Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b23" id="b23" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b24" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b25" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b26" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="nyame-animation" data-az-id="b27" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--nyame wow" data-wow-offset="556" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/9CYpoKe.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Nyame Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="text-primary glazed-util-border-primary glazed-util-background-white btn stpe-borderbutton glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/" style="">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b29" id="b29" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b30" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b31" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b32" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="mawu-animation" data-az-id="b33" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--mawu wow" data-wow-offset="583" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/nCikTuz.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Mawu Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b34" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b35" id="b35" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b36" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b37" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b38" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="yoruba-animation" data-az-id="b39" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--yoruba wow" data-wow-offset="616" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/epKB2lC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Yoruba Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b40" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b41" id="b41" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b42" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b43" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b44" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="shona-animation" data-az-id="b45" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--shona wow" data-wow-offset="556" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/PERJ4sf.png" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Shona Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="text-primary glazed-util-border-primary glazed-util-background-white btn stpe-borderbutton glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/" style="">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b46" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b47" id="b47" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b48" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b49" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b50" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="sawar-animation" data-az-id="b51" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--sawar wow" data-wow-offset="583" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/odMOjGC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Sawar Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b52" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b53" id="b53" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b54" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b55" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b56" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="akan-animation" data-az-id="b57" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--akan wow" data-wow-offset="556" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/9CYpoKe.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Akan Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b58" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b59" id="b59" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b60" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b61" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b62" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="anansi-animation" data-az-id="b63" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--anansi wow" data-wow-offset="583" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/nCikTuz.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Anansi Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b64" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b65" id="b65" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b66" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b67" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b68" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="pygmy-animation" data-az-id="b69" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--pygmy wow" data-wow-offset="616" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/epKB2lC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Pygmy Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b70" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b71" id="b71" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b72" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b73" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b74" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="efik-animation" data-az-id="b75" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--efik wow" data-wow-offset="556" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/9CYpoKe.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Efik Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b76" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b77" id="b77" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b78" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b79" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b80" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="igbo-animation" data-az-id="b81" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--igbo wow" data-wow-offset="583" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/odMOjGC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Igbo Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b82" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b83" id="b83" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b84" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b85" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b86" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="loko-animation" data-az-id="b87" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure data-wow-offset="583" class="stpe-imagebox__figure stpe-imagebox__figure--loko wow" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/nCikTuz.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Loko Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b88" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b89" id="b89" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b90" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b91" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b92" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azb="loa-animation" data-az-id="b93" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Motion%20Image%20Boxes/../../carbide_builder/js/carbide.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--loa wow" data-wow-offset="616" style="visibility: hidden; animation-name: none;"><img class="stpe-imagebox__image" src="http://i.imgur.com/cNA0FRx.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Loa Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b94" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-04-26 18:48:27 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Icons',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277697,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4b2cf32d-ba09-4ba9-9879-5a9bd359b598',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Icons<br></h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">Instantly access over 1000 icons, including Glyphicons, Font Awesome icons and various line icon sets!</p>

<p class="lead">At SooperThemes we love icons and we make it easy to use them anywhere in your drag and drop pages.</p>
</div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azat-device="xs" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;"><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="bg-primary" data-azat-width="1/3" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column bg-primary col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-size="fa-5x" data-azat-icon="fa fa-heart-o" data-azb="az_icon" data-az-id="b13" style="" class="az-element az-icon text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="glazed-util-background-accent1" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b14" class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-size="fa-5x" data-azat-icon="fa fa-heart-o" data-azb="az_icon" data-az-id="b15" style="" class="az-element az-icon text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="glazed-util-background-accent2" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b16" class="az-element az-ctnr az-column glazed-util-background-accent2 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-size="fa-5x" data-azat-icon="fa fa-heart-o" data-azb="az_icon" data-az-id="b17" style="" class="az-element az-icon text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div></div><div data-azcnt="true" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azat-device="xs" data-azb="az_row" data-az-id="b18" class="az-element az-row row" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;"><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="glazed-util-background-accent2" data-azat-width="1/3" data-azb="az_column" data-az-id="b19" class="az-element az-ctnr az-column glazed-util-background-accent2 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-size="fa-5x" data-azat-icon="fa fa-heart-o" data-azb="az_icon" data-az-id="b20" style="" class="az-element az-icon text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-style="padding-top:5%;padding-bottom:5%;" data-azat-el_class="bg-primary" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b21" class="az-element az-ctnr az-column bg-primary col-xs-4" style="padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-size="fa-5x" data-azat-icon="fa fa-heart-o" data-azb="az_icon" data-az-id="b22" style="" class="az-element az-icon text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-style="padding-top:5%;padding-bottom:5%;" data-azat-el_class="glazed-util-background-accent1" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b23" class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-4" style="padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-size="fa-5x" data-azat-icon="fa fa-heart-o" data-azb="az_icon" data-az-id="b24" style="" class="az-element az-icon text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b25" id="b25" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b26" class="az-element az-text" style=""><h2 style="text-align: center;">Combine icons with animation</h2>
</div><div data-azcnt="true" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azat-device="xs" data-azb="az_row" data-az-id="b27" class="az-element az-row row" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;"><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="bg-primary" data-azat-width="1/3" data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column bg-primary col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-an_duration="3000" data-azat-an_offset="90" data-azat-an_infinite="yes" data-azat-an_in="fadeInDown" data-azat-an_start="appear" data-azat-size="fa-5x" data-azat-icon="glyphicon glyphicon-tint" data-azb="az_icon" data-az-id="b29" style="" class="az-element az-icon text-center"><i class="glyphicon glyphicon-tint fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="glazed-util-background-accent1" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-an_duration="1500" data-azat-an_offset="90" data-azat-an_in="fadeInLeftBig" data-azat-an_start="appear" data-azat-size="fa-5x" data-azat-icon="glyphicon glyphicon-leaf" data-azb="az_icon" data-az-id="b31" style="" class="az-element az-icon text-center"><i class="glyphicon glyphicon-leaf fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azat-el_class="glazed-util-background-accent2" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b32" class="az-element az-ctnr az-column glazed-util-background-accent2 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;"><div data-azat-el_class="text-center" data-azat-an_infinite="yes" data-azat-an_in="pulse" data-azat-an_start="appear" data-azat-size="fa-5x" data-azat-icon="glyphicon glyphicon-fire" data-azb="az_icon" data-az-id="b33" style="" class="az-element az-icon text-center"><i class="glyphicon glyphicon-fire fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b34" id="b34" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b35" class="az-element az-text" style=""><h2 style="text-align: center;">Or visually support your content<br></h2></div><div data-azcnt="true" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azat-device="xs" data-azb="az_row" data-az-id="b36" class="az-element az-row row" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;"><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;background-color:#8968b5;" data-azat-el_class="glazed-util-color-white" data-azat-width="1/2" data-azb="az_column" data-az-id="b37" class="az-element az-ctnr az-column glazed-util-color-white col-xs-6" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;background-color:#8968b5;"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b38" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/3" data-azb="az_column" data-az-id="b39" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azat-style="color:#57e2b9;font-size:120px;" data-azat-size="fa-5x" data-azat-icon="et et-icon-wallet" data-azb="az_icon" data-az-id="b40" style="" class="az-element az-icon "><i class="et et-icon-wallet fa-5x  undefined undefined  " style="color:#57e2b9;font-size:120px;color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 2/3" data-azb="az_column" data-az-id="b41" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b42" class="az-element az-text" style=""><h2><span style="color:#ffffff;">Budgeting for success</span></h2>

<p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

<p class="lead"><a href="http://www.sooperthemes.com/pricing">read more</a></p>
</div></div></div></div><div data-azcnt="true" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;" data-azat-el_class="glazed-util-background-accent1" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b43" class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-6" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b44" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/3" data-azb="az_column" data-az-id="b45" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azat-style="color:#f85753;font-size:150px;" data-azat-orientation="fa-flip-horizontal" data-azat-size="fa-5x" data-azat-icon="et et-icon-strategy" data-azb="az_icon" data-az-id="b46" style="" class="az-element az-icon "><i class="et et-icon-strategy fa-5x  undefined undefined  fa-flip-horizontal" style="color:#f85753;font-size:150px;color: undefined;background-color: undefined;"></i></div></div><div data-azcnt="true" data-azat-width=" 2/3" data-azb="az_column" data-az-id="b47" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b48" class="az-element az-text" style=""><h2>Strategy &amp; Tactics<br></h2><p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p><p class="lead"><a data-cke-saved-href="http://www.sooperthemes.com/pricing" href="http://www.sooperthemes.com/pricing">read more</a></p></div></div></div></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/font-awesome/css/font-awesome.min.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/css/icon-helpers.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/et-line-font/et-line-font.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/animate.css/animate.min.css">
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:48:17 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Circle Counter',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010294,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5c9b6810-6a1f-4109-9a8b-2560f5c65d0f',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Circle Counter Element</h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">Animated&nbsp;circle charts are a fun and effective way to display infographical information, like data&nbsp;that describes your website topic or information about your clients.</p></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b8" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="margin-top:60px;margin-bottom:60px;" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style="margin-top:60px;margin-bottom:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="az_section" data-az-id="b11" id="b11" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b12" class="az-element az-text" style=""><h2 style="text-align: center;">Software Skill Example</h2></div></div></div><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b13" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b14" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-border="default" data-azat-percent="99" data-azat-info="Photoshop" data-azat-fontsize="48" data-azat-text="99%" data-azat-bgcolor="#eeeeee" data-azat-fgcolor="#1488cb" data-azb="az_circle_counter" data-az-id="b15" class="az-element az-circle-counter " style=""><div style="width: 250px;" class="jquery-once-1-processed circliful" id="b15" data-dimension="250" data-text="99%" data-info="Photoshop" data-width="5" data-fontsize="48" data-type="" data-percent="99" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default"><span style="line-height: 250px; font-size: 48px;" class="circle-text">99%</span><span style="line-height: 312.5px;" class="circle-info-half">Photoshop</span><canvas style="width: 250px; height: 250px;" height="250" width="250"></canvas></div></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b16" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-border="default" data-azat-percent="75" data-azat-info="After Effects" data-azat-fontsize="48" data-azat-text="75%" data-azat-bgcolor="#eeeeee" data-azat-fgcolor="#1488cb" data-azb="az_circle_counter" data-az-id="b17" class="az-element az-circle-counter " style=""><div style="width: 250px;" class="jquery-once-1-processed circliful" id="b17" data-dimension="250" data-text="75%" data-info="After Effects" data-width="5" data-fontsize="48" data-type="" data-percent="75" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default"><span style="line-height: 250px; font-size: 48px;" class="circle-text">75%</span><span style="line-height: 312.5px;" class="circle-info-half">After Effects</span><canvas style="width: 250px; height: 250px;" height="250" width="250"></canvas></div></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b18" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-border="default" data-azat-info="Illustrator" data-azat-fontsize="48" data-azat-text="50%" data-azat-bgcolor="#eeeeee" data-azat-fgcolor="#1488cb" data-azb="az_circle_counter" data-az-id="b19" class="az-element az-circle-counter " style=""><div style="width: 250px;" class="jquery-once-1-processed circliful" id="b19" data-dimension="250" data-text="50%" data-info="Illustrator" data-width="5" data-fontsize="48" data-type="" data-percent="50" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default"><span style="line-height: 250px; font-size: 48px;" class="circle-text">50%</span><span style="line-height: 312.5px;" class="circle-info-half">Illustrator</span><canvas style="width: 250px; height: 250px;" height="250" width="250"></canvas></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-border="default" data-azat-percent="35" data-azat-info="Premiere Pro" data-azat-fontsize="48" data-azat-text="35%" data-azat-bgcolor="#eeeeee" data-azat-fgcolor="#1488cb" data-azb="az_circle_counter" data-az-id="b21" class="az-element az-circle-counter " style=""><div style="width: 250px;" class="jquery-once-1-processed circliful" id="b21" data-dimension="250" data-text="35%" data-info="Premiere Pro" data-width="5" data-fontsize="48" data-type="" data-percent="35" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default"><span style="line-height: 250px; font-size: 48px;" class="circle-text">35%</span><span style="line-height: 312.5px;" class="circle-info-half">Premiere Pro</span><canvas style="width: 250px; height: 250px;" height="250" width="250"></canvas></div></div></div></div></div></div><div data-azat-style="padding-top:100px;padding-bottom:100px;background-image: url(http://i.imgur.com/rdwONym.jpgg);background-position: center;background-repeat: no-repeat;background-size: cover;" data-azat-el_class="glazed-util-overlay-black" data-azb="az_section" data-az-id="b22" id="b22" class="az-element az-section glazed-util-overlay-black " style="padding-top:100px;padding-bottom:100px;background-image: url(http://i.imgur.com/rdwONym.jpgg);background-position: center;background-repeat: no-repeat;background-size: cover;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="az_section" data-az-id="b23" id="b23" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b24" class="az-element az-text" style=""><h2 style="text-align: center;">Dark Background Example</h2></div></div></div><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b25" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b26" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-icon_color="#33e86a" data-azat-icon_size="48" data-azat-icon="glyphicon glyphicon-leaf" data-azat-border="default" data-azat-percent="85" data-azat-width="8" data-azat-info="85% Organic Food" data-azat-fontsize="48" data-azat-dimension="280" data-azat-bgcolor="#333333" data-azat-fgcolor="#33e86a" data-azb="az_circle_counter" data-az-id="b27" class="az-element az-circle-counter " style=""><div style="width: 280px;" class="jquery-once-1-processed circliful" id="b27" data-dimension="280" data-text="" data-info="85% Organic Food" data-width="8" data-fontsize="48" data-type="" data-percent="85" data-fgcolor="#33e86a" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" glyphicon glyphicon-leaf" data-iconsize="48" data-iconcolor="#33e86a"><span style="line-height: 280px; font-size: 48px;" class="circle-text"><i style="color: rgb(51, 232, 106); font-size: 48px;" class="fa glyphicon glyphicon-leaf"></i></span><span style="line-height: 350px;" class="circle-info-half">85% Organic Food</span><canvas style="width: 280px; height: 280px;" height="280" width="280"></canvas></div></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-icon_color="#ffea4c" data-azat-icon_size="48" data-azat-icon="fa fa-pagelines" data-azat-border="default" data-azat-percent="75" data-azat-width="7" data-azat-info="75% Home Grown" data-azat-fontsize="48" data-azat-dimension="280" data-azat-bgcolor="#333333" data-azat-fgcolor="#ffea4c" data-azb="az_circle_counter" data-az-id="b29" class="az-element az-circle-counter " style=""><div style="width: 280px;" class="jquery-once-1-processed circliful" id="b29" data-dimension="280" data-text="" data-info="75% Home Grown" data-width="7" data-fontsize="48" data-type="" data-percent="75" data-fgcolor="#ffea4c" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" fa fa-pagelines" data-iconsize="48" data-iconcolor="#ffea4c"><span style="line-height: 280px; font-size: 48px;" class="circle-text"><i style="color: rgb(255, 234, 76); font-size: 48px;" class="fa fa-pagelines"></i></span><span style="line-height: 350px;" class="circle-info-half">75% Home Grown</span><canvas style="width: 280px; height: 280px;" height="280" width="280"></canvas></div></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-icon_color="#3ce2ff" data-azat-icon_size="48" data-azat-icon="glyphicon glyphicon-tint" data-azat-border="default" data-azat-percent="35" data-azat-width="7" data-azat-info="35% Less Water Wastage" data-azat-fontsize="48" data-azat-dimension="280" data-azat-bgcolor="#333333" data-azat-fgcolor="#3ce2ff" data-azb="az_circle_counter" data-az-id="b31" class="az-element az-circle-counter " style=""><div style="width: 280px;" class="jquery-once-1-processed circliful" id="b31" data-dimension="280" data-text="" data-info="35% Less Water Wastage" data-width="7" data-fontsize="48" data-type="" data-percent="35" data-fgcolor="#3ce2ff" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" glyphicon glyphicon-tint" data-iconsize="48" data-iconcolor="#3ce2ff"><span style="line-height: 280px; font-size: 48px;" class="circle-text"><i style="color: rgb(60, 226, 255); font-size: 48px;" class="fa glyphicon glyphicon-tint"></i></span><span style="line-height: 350px;" class="circle-info-half">35% Less Water Wastage</span><canvas style="width: 280px; height: 280px;" height="280" width="280"></canvas></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b32" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-icon_color="#f213ea" data-azat-icon_size="48" data-azat-icon="fa fa-heart" data-azat-border="default" data-azat-percent="90" data-azat-width="7" data-azat-info="90% Fair Trade" data-azat-dimension="280" data-azat-bgcolor="#333333" data-azat-fgcolor="#f213ea" data-azb="az_circle_counter" data-az-id="b33" class="az-element az-circle-counter " style=""><div style="width: 280px;" class="jquery-once-1-processed circliful" id="b33" data-dimension="280" data-text="" data-info="90% Fair Trade" data-width="7" data-fontsize="16" data-type="" data-percent="90" data-fgcolor="#f213ea" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" fa fa-heart" data-iconsize="48" data-iconcolor="#f213ea"><span style="line-height: 280px; font-size: 16px;" class="circle-text"><i style="color: rgb(242, 19, 234); font-size: 48px;" class="fa fa-heart"></i></span><span style="line-height: 350px;" class="circle-info-half">90% Fair Trade</span><canvas style="width: 280px; height: 280px;" height="280" width="280"></canvas></div></div></div></div></div></div><div data-azat-style="margin-top:60px;margin-bottom:60px;padding-top:90px;padding-bottom:90px;background-color:#f1f1f1;" data-azb="az_section" data-az-id="b34" id="b34" class="az-element az-section  " style="margin-top:60px;margin-bottom:60px;padding-top:90px;padding-bottom:90px;background-color:#f1f1f1;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b35" class="az-element az-text" style=""><h2 style="text-align: center;"><em>Completely Customizable</em></h2></div><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b36" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/3" data-azb="az_column" data-az-id="b37" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azat-icon_color="#8224e3" data-azat-icon_size="36" data-azat-icon="fa fa-paint-brush" data-azat-border="inline" data-azat-percent="85" data-azat-width="10" data-azat-info="85% Purple" data-azat-fontsize="32" data-azat-dimension="175" data-azat-bgcolor="#d7cce2" data-azat-fgcolor="#8224e3" data-azb="az_circle_counter" data-az-id="b38" class="az-element az-circle-counter " style=""><div id="b38" data-dimension="175" data-text="" data-info="85% Purple" data-width="10" data-fontsize="32" data-type="" data-percent="85" data-fgcolor="#8224e3" data-bgcolor="#d7cce2" data-fill="" data-border="inline" data-icon=" fa fa-paint-brush" data-iconsize="36" data-iconcolor="#8224e3"></div></div></div><div data-azcnt="true" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b39" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azat-icon_color="#dd3333" data-azat-icon_size="48" data-azat-icon="glyphicon glyphicon-fire" data-azat-border="default" data-azat-percent="98" data-azat-width="12" data-azat-info="Extremely Hot" data-azat-fontsize="32" data-azat-dimension="195" data-azat-bgcolor="#d7cce2" data-azat-fgcolor="#8224e3" data-azb="az_circle_counter" data-az-id="b40" class="az-element az-circle-counter " style=""><div id="b40" data-dimension="195" data-text="" data-info="Extremely Hot" data-width="12" data-fontsize="32" data-type="" data-percent="98" data-fgcolor="#8224e3" data-bgcolor="#d7cce2" data-fill="" data-border="default" data-icon=" glyphicon glyphicon-fire" data-iconsize="48" data-iconcolor="#dd3333"></div></div></div><div data-azcnt="true" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b41" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azat-icon_color="#2b8c4a" data-azat-icon_size="48" data-azat-icon="fa fa-dashboard" data-azat-border="default" data-azat-percent="90" data-azat-width="10" data-azat-info="Half Circle" data-azat-fontsize="32" data-azat-type="half" data-azat-bgcolor="#666666" data-azat-fgcolor="#81d742" data-azb="az_circle_counter" data-az-id="b42" class="az-element az-circle-counter " style=""><div id="b42" data-dimension="250" data-text="" data-info="Half Circle" data-width="10" data-fontsize="32" data-type="half" data-percent="90" data-fgcolor="#81d742" data-bgcolor="#666666" data-fill="" data-border="default" data-icon=" fa fa-dashboard" data-iconsize="48" data-iconcolor="#2b8c4a"></div></div></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/jquery.circliful/css/jquery.circliful.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/font-awesome/css/font-awesome.min.css">
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.circliful/js/jquery.circliful.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-05-07 16:51:34 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Drupal Blocks',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277904,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '621b040c-215e-4302-a133-ee52589bf8c4',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Drupal Blocks<br></h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">Similar to tabs, collapsibles allow you to limit information load on a section. Using Glazed you can easily create collapsible content that is mobile-friendly and&nbsp;improves user experience.</p></div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b13" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b14" class="az-element az-text" style=""><h2>User Login Block<br></h2><p>In Carbide Builder you can load any block in your drag and drop container. Here is an example of loading the user login form, but really you could load any form that is available as a block. Got a from from webform module you want to include? Just expose it as a block from the webform edit page.<br></p></div><div data-azb="az_block-glazed_config-user_register" data-az-id="b15" class="az-element az-cms-element " style=""></div><hr data-azb="az_separator" data-az-id="b16" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b17" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b18" id="b18" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b19" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b21" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b22" class="az-element az-text" style=""><h2>Admin Blocks &amp; Dashboards<br></h2><p>Even admin blocks can be loaded, imagine the awesome dashboards you can create. This is exactly what we do at SooperThemes. The downloads dashboard at sooperthemes.com is also built with Carbide Builder. Combine the Drupal blocks integration with <a href="/elements/interactive-elements/drupal-views" data-cke-saved-href="/elements/interactive-elements/drupal-views">Drupal Views</a> integration and you can build anything!<br></p><p>You don\'t need to worry about permissions because this is taken care of automatally. The cached version of this page shows the block content for anonymous users and for authenticated users the block is AJAX loaded with proper personalisation.<br></p><h3>Recent Content:</h3></div><div data-azb="az_block-node-recent" data-az-id="b23" class="az-element az-cms-element " style=""></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b24" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:51:44 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Team Box',
  'log' => 'Copy of the revision from <em class="placeholder">Tue, 03/15/2016 - 13:12</em>.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010331,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '706f5a68-da75-4834-a050-9de1b4d58fd6',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Drag and Drop Team Box Grids</h2></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b7" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b8" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-bottom:3%;" data-azb="az_section" data-az-id="b9" id="b9" class="az-element az-section  " style="padding-bottom:3%;"><div data-azcnt="true" class="az-ctnr container"><div data-azat-style="padding-bottom:5%;" data-azb="teambox-4" data-az-id="b10" class="az-element az-template " style="padding-bottom:5%;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/vendor/font-awesome/css/font-awesome.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/icon-helpers.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/social.css" rel="stylesheet" type="text/css"><div class="row">
  <div class="col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-2-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Jeffrey McHill</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-12-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Kathy Austin</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-6-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Jenny White</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-16-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Fairlyn Bodet</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>
</div></div></div></div></div><div data-azat-style="padding-bottom:3%;" data-azb="az_section" data-az-id="b11" id="b11" class="az-element az-section  " style="padding-bottom:3%;"><div data-azcnt="true" class="az-ctnr container"><div data-azat-style="padding-bottom:5%;" data-azb="teambox-3" data-az-id="b12" class="az-element az-template " style="padding-bottom:5%;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/vendor/font-awesome/css/font-awesome.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/icon-helpers.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/social.css" rel="stylesheet" type="text/css"><div class="row">
  <div class="col-sm-4">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-3-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Sarah Yu</h3>

          <h4 class="stpe-teambox__member-role">Marketing Manager</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-4">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-17-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Kenny White</h3>

          <h4 class="stpe-teambox__member-role">Production Manager</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-4">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-4-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Laura Tilly</h3>

          <h4 class="stpe-teambox__member-role">HR Manager</h4>
        </div>
      </div>
    </div>
  </div>
</div></div></div></div></div><div data-azat-style="padding-bottom:3%;" data-azb="az_section" data-az-id="b13" id="b13" class="az-element az-section  " style="padding-bottom:3%;"><div data-azcnt="true" class="az-ctnr container"><div data-azat-style="padding-bottom:5%;" data-azb="teambox-2" data-az-id="b14" class="az-element az-template " style="padding-bottom:5%;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/vendor/font-awesome/css/font-awesome.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/icon-helpers.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/social.css" rel="stylesheet" type="text/css"><div class="row">
  <div class="col-sm-6">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-5-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Tara DeVille</h3>

          <h4 class="stpe-teambox__member-role">Senior Vice President</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-6">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/carbide_elements/Team/img/portrait-1-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Rudy McIntyre</h3>

          <h4 class="stpe-teambox__member-role">CFO</h4>
        </div>
      </div>
    </div>
  </div>
</div></div></div></div></div><div data-azat-style="padding-bottom:3%;" data-azb="az_section" data-az-id="b15" id="b15" class="az-element az-section  " style="padding-bottom:3%;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b16" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b17" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b18" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="teambox-1" data-az-id="b19" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Team/../../carbide_builder/css/social.css" rel="stylesheet" type="text/css"><div class="stpe-teambox stpe-teambox--split clearfix"><img alt="" class="img-responsive" src="http://i.imgur.com/YNCSqB4.jpg"><div class="stpe-teambox__member-info"><div class="stpe-teambox__member-social"><ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">&nbsp;</li><li class="stbe-social-links__item" title="linkedin">&nbsp;</li></ul></div><div class="stpe-teambox__member-name-role"><h3 class="stpe-teambox__member-name">Paul Johnson</h3><h4 class="stpe-teambox__member-role">CEO</h4></div></div></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-05-07 16:52:11 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Social Links',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277707,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '887edc90-eb66-4e94-9757-645e9221a364',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '
<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Social Links Element<br></h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">Add links to various social accounts with this useful and retina-friendly social links element. The buttons support brand colors and are highly customizable.<br></p><p class="lead">The vector icons are powered by Font Awesome, meaning they look gorgeous on retina screens and don\'t pixelate when enlarged.<br></p></div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style=""></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:10%;" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style="padding-bottom:10%;"><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-12" style=""><ul data-azat-el_class="text-center" data-azat-st_css3_hover_effects="disc" data-azat-st_theme_bgcolor="brand" data-azat-st_size="2x" data-azat-st_style="circle" data-azat-st_type="inline" data-azat-st_social_links="RmFjZWJvb2slM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFZb3VUdWJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBVHdpdHRlciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQUdvb2dsZS1QbHVzJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBTGlua2VkaW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFFbnZlbG9wZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJw==" data-azb="st_social" data-az-id="b13" class="az-element st-social stbe-social-links text-center stbe-social-links--bgcolor-brand" style=""><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook" class="fa fa-2x fa-facebook stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube" class="fa fa-2x fa-youtube stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitter" class="fa fa-2x fa-twitter stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-plus" class="fa fa-2x fa-google-plus stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linkedin" class="fa fa-2x fa-linkedin stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="envelope" class="fa fa-2x fa-envelope stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li></ul></div></div><div data-azcnt="true" data-azat-style="padding-bottom:10%;" data-azat-device="sm" data-azb="az_row" data-az-id="b14" class="az-element az-row row" style="padding-bottom:10%;"><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-12" style=""><ul data-azat-el_class="text-center" data-azat-st_theme_bgcolor="brand" data-azat-st_size="2x" data-azat-st_style="square" data-azat-st_type="inline" data-azat-st_social_links="RmFjZWJvb2slM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFZb3VUdWJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBVHdpdHRlciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQUdvb2dsZS1QbHVzJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBTGlua2VkaW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFFbnZlbG9wZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJw==" data-azb="st_social" data-az-id="b16" class="az-element st-social stbe-social-links text-center stbe-social-links--bgcolor-brand" style=""><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook" class="fa fa-2x fa-facebook stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube" class="fa fa-2x fa-youtube stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitter" class="fa fa-2x fa-twitter stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-plus" class="fa fa-2x fa-google-plus stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linkedin" class="fa fa-2x fa-linkedin stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="envelope" class="fa fa-2x fa-envelope stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li></ul></div></div><div data-azcnt="true" data-azat-style="padding-bottom:10%;" data-azat-device="sm" data-azb="az_row" data-az-id="b17" class="az-element az-row row" style="padding-bottom:10%;"><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b18" class="az-element az-ctnr az-column  col-sm-12" style=""><ul data-azat-el_class="text-center" data-azat-st_css3_hover_effects="pulse" data-azat-st_bgcolor="#57e2b9" data-azat-st_color="#ffffff" data-azat-st_size="lg" data-azat-st_style="circle" data-azat-st_type="inline" data-azat-st_social_links="RmFjZWJvb2slM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFZb3VUdWJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBVHdpdHRlciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQUdvb2dsZS1QbHVzJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBTGlua2VkaW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFFbnZlbG9wZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJw==" data-azb="st_social" data-az-id="b19" class="az-element st-social stbe-social-links text-center" style=""><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook" class="fa fa-lg fa-facebook stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube" class="fa fa-lg fa-youtube stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitter" class="fa fa-lg fa-twitter stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-plus" class="fa fa-lg fa-google-plus stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linkedin" class="fa fa-lg fa-linkedin stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="envelope" class="fa fa-lg fa-envelope stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top" title=""></i></a></li></ul></div></div><div data-azcnt="true" data-azat-style="padding-bottom:10%;" data-azat-device="sm" data-azb="az_row" data-az-id="b20" class="az-element az-row row" style="padding-bottom:10%;"><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b21" class="az-element az-ctnr az-column  col-sm-12" style=""><ul data-azat-el_class="text-center" data-azat-st_css3_hover_effects="pulse" data-azat-st_bgcolor="#ffffff" data-azat-st_color="#f85753" data-azat-st_size="2x" data-azat-st_type="inline" data-azat-st_social_links="RmFjZWJvb2slM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFZb3VUdWJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBVHdpdHRlciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQUdvb2dsZS1QbHVzJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBTGlua2VkaW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFFbnZlbG9wZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJw==" data-azb="st_social" data-az-id="b22" class="az-element st-social stbe-social-links text-center" style=""><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook" class="fa fa-2x fa-facebook stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube" class="fa fa-2x fa-youtube stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitter" class="fa fa-2x fa-twitter stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-plus" class="fa fa-2x fa-google-plus stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linkedin" class="fa fa-2x fa-linkedin stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="envelope" class="fa fa-2x fa-envelope stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li></ul></div></div><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b23" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b24" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b25" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b26" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b27" class="az-element az-ctnr az-column  col-sm-2" style=""><ul data-azat-el_class="text-center" data-azat-st_bgcolor="#eeeeee" data-azat-st_theme_bgcolor="brand" data-azat-st_color="#ffffff" data-azat-st_size="2x" data-azat-st_style="rounded" data-azat-st_type="stacked" data-azat-st_social_links="QmVoYW5jZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQVNwb3RpZnklM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEE1MDBweCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQUZsaWNrciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQVNreXBlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20n" data-azb="st_social" data-az-id="b28" class="az-element st-social stbe-social-links text-center stbe-social-links--bgcolor-brand stbe-social-links-stacked" style=""><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="behance" class="fa fa-2x fa-behance stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="spotify" class="fa fa-2x fa-spotify stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="500px" class="fa fa-2x fa-500px stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="flickr" class="fa fa-2x fa-flickr stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="skype" class="fa fa-2x fa-skype stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top" title=""></i></a></li></ul></div><div data-azcnt="true" data-azat-width=" 5/6" data-azb="az_column" data-az-id="b29" class="az-element az-ctnr az-column  col-sm-10" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b30" class="az-element az-text" style=""><h2>Lorem ipsum dolor sit amet.</h2>

<p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>

<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

<p>Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
</div></div></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b31" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b32" id="b32" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b33" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b34" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b35" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b36" class="az-element az-text" style=""><h2 style="text-align: center;">All brand colored icons:<br></h2></div><ul data-azat-st_theme_color="brand" data-azat-st_size="4x" data-azat-st_type="inline" data-azat-st_social_links="ZW52ZWxvcGUtbyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQTUwMHB4JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBYWRuJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBYW1hem9uJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBYW5kcm9pZCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWFuZ2VsbGlzdCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWFwcGxlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBYmVoYW5jZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWJlaGFuY2Utc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBYml0YnVja2V0JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBYml0YnVja2V0LXNxdWFyZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWJpdGNvaW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFibGFjay10aWUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFidGMlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFidXlzZWxsYWRzJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBY2MtYW1leCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWNjLWRpbmVycy1jbHViJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBY2MtZGlzY292ZXIlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFjYy1qY2IlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFjYy1tYXN0ZXJjYXJkJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBY2MtcGF5cGFsJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBY2Mtc3RyaXBlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBY2MtdmlzYSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWNocm9tZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWNvZGVwZW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFjb25uZWN0ZGV2ZWxvcCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWNvbnRhbyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWNyZWF0aXZlLWNvbW1vbnMlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFjc3MzJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZGFzaGN1YmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFkZWxpY2lvdXMlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFkZXZpYW50YXJ0JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZGlnZyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWRyaWJiYmxlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZHJvcGJveCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWRydXBhbCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWVtcGlyZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWV4cGVkaXRlZHNzbCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWZhY2Vib29rJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZmFjZWJvb2stb2ZmaWNpYWwlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFmYWNlYm9vay1zcXVhcmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFmaXJlZm94JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZmxpY2tyJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZm9udGljb25zJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZm9ydW1iZWUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFmb3Vyc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZ2UlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnZXQtcG9ja2V0JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZ2clM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnZy1jaXJjbGUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnaXQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnaXQtc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZ2l0aHViJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBZ2l0aHViLWFsdCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWdpdGh1Yi1zcXVhcmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnaXR0aXAlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnb29nbGUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFnb29nbGUtcGx1cyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWdvb2dsZS1wbHVzLXNxdWFyZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWdvb2dsZS13YWxsZXQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFoYWNrZXItbmV3cyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWhvdXp6JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBaHRtbDUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFpbnN0YWdyYW0lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFpbnRlcm5ldC1leHBsb3JlciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWlveGhvc3QlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFqb29tbGElM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFqc2ZpZGRsZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWxhc3RmbSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQWxhc3RmbS1zcXVhcmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFsZWFucHViJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBbGlua2VkaW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFsaW5rZWRpbi1zcXVhcmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFsaW51eCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQW1heGNkbiUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQW1lYW5wYXRoJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBbWVkaXVtJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBb2Rub2tsYXNzbmlraSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQW9kbm9rbGFzc25pa2ktc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBb3BlbmNhcnQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFvcGVuaWQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFvcGVyYSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQW9wdGluLW1vbnN0ZXIlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFwYWdlbGluZXMlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFwYXlwYWwlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFwaWVkLXBpcGVyJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBcGllZC1waXBlci1hbHQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFwaW50ZXJlc3QlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFwaW50ZXJlc3QtcCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXBpbnRlcmVzdC1zcXVhcmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFxcSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXJhJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBcmViZWwlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFyZWRkaXQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFyZWRkaXQtc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBcmVucmVuJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc2FmYXJpJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc2VsbHN5JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc2hhcmUtYWx0JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc2hhcmUtYWx0LXNxdWFyZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXNoaXJ0c2luYnVsayUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXNpbXBseWJ1aWx0JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc2t5YXRsYXMlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFza3lwZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXNsYWNrJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc2xpZGVzaGFyZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXNvdW5kY2xvdWQlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFzcG90aWZ5JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc3RhY2stZXhjaGFuZ2UlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFzdGFjay1vdmVyZmxvdyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXN0ZWFtJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc3RlYW0tc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBc3R1bWJsZXVwb24lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEFzdHVtYmxldXBvbi1jaXJjbGUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF0ZW5jZW50LXdlaWJvJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdHJlbGxvJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdHJpcGFkdmlzb3IlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF0dW1ibHIlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF0dW1ibHItc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdHdpdGNoJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdHdpdHRlciUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXR3aXR0ZXItc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdmlhY29pbiUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXZpbWVvJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdmltZW8tc3F1YXJlJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBdmluZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXZrJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBd2VjaGF0JTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBd2VpYm8lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF3ZWl4aW4lM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF3aWtpcGVkaWEtdyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXdpbmRvd3MlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF3b3JkcHJlc3MlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF4aW5nJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBeGluZy1zcXVhcmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF5LWNvbWJpbmF0b3IlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF5YyUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXlhaG9vJTNEJ2h0dHAlM0ElMkYlMkZ3d3cuZXhhbXBsZS5jb20nJTBBeWVscCUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJyUwQXlvdXR1YmUlM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF5b3V0dWJlLXBsYXklM0QnaHR0cCUzQSUyRiUyRnd3dy5leGFtcGxlLmNvbSclMEF5b3V0dWJlLXNxdWFyZSUzRCdodHRwJTNBJTJGJTJGd3d3LmV4YW1wbGUuY29tJw" data-azb="st_social" data-az-id="b37" class="az-element st-social stbe-social-links  stbe-social-links--color-brand" style=""><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="envelope-o" class="fa fa-4x fa-envelope-o stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="500px" class="fa fa-4x fa-500px stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="adn" class="fa fa-4x fa-adn stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="amazon" class="fa fa-4x fa-amazon stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="android" class="fa fa-4x fa-android stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="angellist" class="fa fa-4x fa-angellist stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="apple" class="fa fa-4x fa-apple stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="behance" class="fa fa-4x fa-behance stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="behance-square" class="fa fa-4x fa-behance-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="bitbucket" class="fa fa-4x fa-bitbucket stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="bitbucket-square" class="fa fa-4x fa-bitbucket-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="bitcoin" class="fa fa-4x fa-bitcoin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="black-tie" class="fa fa-4x fa-black-tie stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="btc" class="fa fa-4x fa-btc stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="buysellads" class="fa fa-4x fa-buysellads stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-amex" class="fa fa-4x fa-cc-amex stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-diners-club" class="fa fa-4x fa-cc-diners-club stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-discover" class="fa fa-4x fa-cc-discover stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-jcb" class="fa fa-4x fa-cc-jcb stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-mastercard" class="fa fa-4x fa-cc-mastercard stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-paypal" class="fa fa-4x fa-cc-paypal stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-stripe" class="fa fa-4x fa-cc-stripe stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="cc-visa" class="fa fa-4x fa-cc-visa stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="chrome" class="fa fa-4x fa-chrome stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="codepen" class="fa fa-4x fa-codepen stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="connectdevelop" class="fa fa-4x fa-connectdevelop stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="contao" class="fa fa-4x fa-contao stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="creative-commons" class="fa fa-4x fa-creative-commons stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="css3" class="fa fa-4x fa-css3 stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="dashcube" class="fa fa-4x fa-dashcube stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="delicious" class="fa fa-4x fa-delicious stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="deviantart" class="fa fa-4x fa-deviantart stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="digg" class="fa fa-4x fa-digg stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="dribbble" class="fa fa-4x fa-dribbble stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="dropbox" class="fa fa-4x fa-dropbox stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="drupal" class="fa fa-4x fa-drupal stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="empire" class="fa fa-4x fa-empire stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="expeditedssl" class="fa fa-4x fa-expeditedssl stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook" class="fa fa-4x fa-facebook stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook-official" class="fa fa-4x fa-facebook-official stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="facebook-square" class="fa fa-4x fa-facebook-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="firefox" class="fa fa-4x fa-firefox stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="flickr" class="fa fa-4x fa-flickr stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="fonticons" class="fa fa-4x fa-fonticons stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="forumbee" class="fa fa-4x fa-forumbee stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="foursquare" class="fa fa-4x fa-foursquare stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="ge" class="fa fa-4x fa-ge stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="get-pocket" class="fa fa-4x fa-get-pocket stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="gg" class="fa fa-4x fa-gg stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="gg-circle" class="fa fa-4x fa-gg-circle stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="git" class="fa fa-4x fa-git stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="git-square" class="fa fa-4x fa-git-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="github" class="fa fa-4x fa-github stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="github-alt" class="fa fa-4x fa-github-alt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="github-square" class="fa fa-4x fa-github-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="gittip" class="fa fa-4x fa-gittip stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google" class="fa fa-4x fa-google stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-plus" class="fa fa-4x fa-google-plus stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-plus-square" class="fa fa-4x fa-google-plus-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="google-wallet" class="fa fa-4x fa-google-wallet stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="hacker-news" class="fa fa-4x fa-hacker-news stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="houzz" class="fa fa-4x fa-houzz stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="html5" class="fa fa-4x fa-html5 stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="instagram" class="fa fa-4x fa-instagram stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="internet-explorer" class="fa fa-4x fa-internet-explorer stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="ioxhost" class="fa fa-4x fa-ioxhost stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="joomla" class="fa fa-4x fa-joomla stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="jsfiddle" class="fa fa-4x fa-jsfiddle stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="lastfm" class="fa fa-4x fa-lastfm stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="lastfm-square" class="fa fa-4x fa-lastfm-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="leanpub" class="fa fa-4x fa-leanpub stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linkedin" class="fa fa-4x fa-linkedin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linkedin-square" class="fa fa-4x fa-linkedin-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="linux" class="fa fa-4x fa-linux stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="maxcdn" class="fa fa-4x fa-maxcdn stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="meanpath" class="fa fa-4x fa-meanpath stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="medium" class="fa fa-4x fa-medium stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="odnoklassniki" class="fa fa-4x fa-odnoklassniki stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="odnoklassniki-square" class="fa fa-4x fa-odnoklassniki-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="opencart" class="fa fa-4x fa-opencart stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="openid" class="fa fa-4x fa-openid stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="opera" class="fa fa-4x fa-opera stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="optin-monster" class="fa fa-4x fa-optin-monster stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="pagelines" class="fa fa-4x fa-pagelines stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="paypal" class="fa fa-4x fa-paypal stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="pied-piper" class="fa fa-4x fa-pied-piper stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="pied-piper-alt" class="fa fa-4x fa-pied-piper-alt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="pinterest" class="fa fa-4x fa-pinterest stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="pinterest-p" class="fa fa-4x fa-pinterest-p stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="pinterest-square" class="fa fa-4x fa-pinterest-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="qq" class="fa fa-4x fa-qq stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="ra" class="fa fa-4x fa-ra stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="rebel" class="fa fa-4x fa-rebel stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="reddit" class="fa fa-4x fa-reddit stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="reddit-square" class="fa fa-4x fa-reddit-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="renren" class="fa fa-4x fa-renren stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="safari" class="fa fa-4x fa-safari stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="sellsy" class="fa fa-4x fa-sellsy stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="share-alt" class="fa fa-4x fa-share-alt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="share-alt-square" class="fa fa-4x fa-share-alt-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="shirtsinbulk" class="fa fa-4x fa-shirtsinbulk stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="simplybuilt" class="fa fa-4x fa-simplybuilt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="skyatlas" class="fa fa-4x fa-skyatlas stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="skype" class="fa fa-4x fa-skype stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="slack" class="fa fa-4x fa-slack stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="slideshare" class="fa fa-4x fa-slideshare stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="soundcloud" class="fa fa-4x fa-soundcloud stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="spotify" class="fa fa-4x fa-spotify stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="stack-exchange" class="fa fa-4x fa-stack-exchange stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="stack-overflow" class="fa fa-4x fa-stack-overflow stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="steam" class="fa fa-4x fa-steam stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="steam-square" class="fa fa-4x fa-steam-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="stumbleupon" class="fa fa-4x fa-stumbleupon stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="stumbleupon-circle" class="fa fa-4x fa-stumbleupon-circle stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="tencent-weibo" class="fa fa-4x fa-tencent-weibo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="trello" class="fa fa-4x fa-trello stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="tripadvisor" class="fa fa-4x fa-tripadvisor stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="tumblr" class="fa fa-4x fa-tumblr stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="tumblr-square" class="fa fa-4x fa-tumblr-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitch" class="fa fa-4x fa-twitch stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitter" class="fa fa-4x fa-twitter stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="twitter-square" class="fa fa-4x fa-twitter-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="viacoin" class="fa fa-4x fa-viacoin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="vimeo" class="fa fa-4x fa-vimeo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="vimeo-square" class="fa fa-4x fa-vimeo-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="vine" class="fa fa-4x fa-vine stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="vk" class="fa fa-4x fa-vk stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="wechat" class="fa fa-4x fa-wechat stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="weibo" class="fa fa-4x fa-weibo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="weixin" class="fa fa-4x fa-weixin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="wikipedia-w" class="fa fa-4x fa-wikipedia-w stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="windows" class="fa fa-4x fa-windows stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="wordpress" class="fa fa-4x fa-wordpress stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="xing" class="fa fa-4x fa-xing stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="xing-square" class="fa fa-4x fa-xing-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="y-combinator" class="fa fa-4x fa-y-combinator stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="yc" class="fa fa-4x fa-yc stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="yahoo" class="fa fa-4x fa-yahoo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="yelp" class="fa fa-4x fa-yelp stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube" class="fa fa-4x fa-youtube stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube-play" class="fa fa-4x fa-youtube-play stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i data-original-title="youtube-square" class="fa fa-4x fa-youtube-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top" title=""></i></a></li></ul></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b38" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/css/social.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/css/icon-helpers.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/font-awesome/css/font-awesome.min.css">
',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:48:27 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Drop Shadow',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1430562858,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '88d22be5-b9e3-4953-b98b-9c2deac33640',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style="">
					<h2 style="text-align: center;">6 Pixel Perfect Unique CSS3 Drop Shadows</h2>
				</div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b7" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b8" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:5%;" data-azb="az_section" data-az-id="b9" id="b9" class="az-element az-section  " style="padding-top:5%;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b10" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b11" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b12" class="az-element az-text" style="">
					<h2>Raised&nbsp;Drop Shadow</h2>
				</div></div><div data-azcnt="true" data-azat-width="  1/2  " data-azb="az_column" data-az-id="b13" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="raised" data-az-id="b14" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--raised"><img class="" alt="" src="http://i.imgur.com/uYsEqp5.jpg" style=""></div></div></div></div><div data-azcnt="true" data-azat-width="  1/4" data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b16" id="b16" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b17" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b18" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b19" class="az-element az-text" style="">
					<h2>Curved horizontal double shadow</h2>
				</div></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="curved-horizontal-double" data-az-id="b21" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--curved-hz2 stpe-dropshadow--curved"><img class="" alt="" src="http://i.imgur.com/epKB2lC.jpg" style=""></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b23" id="b23" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_unknown" data-az-id="b24" class="az-element"></div><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b25" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b26" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b27" class="az-element az-text" style=""><h2>Curved horizontal single&nbsp;shadow<br></h2></div></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="curved-horizontal" data-az-id="b29" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--curved-hz1 stpe-dropshadow--curved"><img class="" alt="" src="http://i.imgur.com/idA8LKk.jpg" style=""></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b31" id="b31" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_unknown" data-az-id="b32" class="az-element"></div><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b33" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b34" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b35" class="az-element az-text" style=""><h2>Curved vertical double&nbsp;shadow<br></h2></div></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b36" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="curved-vertical-double" data-az-id="b37" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--curved-vt2 stpe-dropshadow--curved"><img class="" alt="" src="http://i.imgur.com/cNA0FRx.jpg" style=""></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b38" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b39" class="az-element"></div></div></div><div data-azb="az_section" data-az-id="b40" id="b40" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b41" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b42" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b43" class="az-element az-text" style=""><h2>Lifted Drop Shadow<br></h2></div></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b44" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="lifted" data-az-id="b45" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--lifted"><img class="" alt="" src="http://i.imgur.com/SeE6zNk.jpg" style=""></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b46" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b47" id="b47" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_unknown" data-az-id="b48" class="az-element"></div><div data-azcnt="true" data-azat-style="padding-bottom:5%;" data-azat-device="sm" data-azb="az_row" data-az-id="b49" class="az-element az-row row" style="padding-bottom:5%;"><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b50" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b51" class="az-element az-text" style=""><h2>Perspective&nbsp;Drop Shadow<br></h2></div></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b52" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="perspective" data-az-id="b53" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--perspective"><img class="" alt="" src="http://i.imgur.com/vBgHjo1.jpg" style=""></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b54" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-05-02 12:34:18 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Drupal Views',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277917,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8a6234be-e970-4c98-8074-daeda9957d3d',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style="">
					<h2 style="text-align: center;">Drupal Views</h2>
				</div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style="">
					<p class="lead">The Drupal view elements let\'s you load any views display in your drag and drop page. You can modify the view too: Create new pager settings, add contextual filters, and control content through exposed sorting and exposed filters.</p>
				</div><hr data-azb="az_separator" data-az-id="b8" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b13" class="az-element az-text" style="">
					<h3>Views display filtered on <em>Business</em> category</h3>
				</div><div data-azat-toggle_fields="field_blog_image,fieldset,field_blog_category,title,body,created" data-azat-offset="" data-azat-override_pager="no" data-azat-settings="field_blog_category_tid=1" data-azb="az_view-cms_blog-recent_blog_teasers" data-az-id="b14" class="az-element az-cms-element " style=""></div></div><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b16" class="az-element az-text" style="">
					<h3>Same display filtered on <em>Lifestyle</em> category</h3>
				</div><div data-azat-toggle_fields="field_blog_image,fieldset,field_blog_category,title,body,created" data-azat-offset="" data-azat-override_pager="no" data-azat-settings="field_blog_category_tid=3" data-azb="az_view-cms_blog-recent_blog_teasers" data-az-id="b17" class="az-element az-cms-element " style=""></div></div></div></div></div><div data-azat-style="padding-top:5%;" data-azb="az_section" data-az-id="b18" id="b18" class="az-element az-section  " style="padding-top:5%;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b19" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b21" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b22" class="az-element az-text" style=""><h3 style="text-align: center;">Changing the exposed filter:</h3>
</div><div data-azat-height="" data-azat-width="" data-azat-image="http://i.imgur.com/efQiI06.gif" data-azb="az_image" data-az-id="b23" class="az-element az-image "><img style="" src="http://i.imgur.com/efQiI06.gif" alt="" title=""></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b24" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:51:57 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Counter',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010261,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c1a0b9b-a4c6-4c74-b134-975d2f0c0f33',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Number Counter Element</h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">Number counters are a fun and effective way to display basic infographical information on your website. You can customize everything about the counter and add&nbsp;icons. Look at our examples for ideas!</p></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b8" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="margin-bottom:200px;padding-top:30px;padding-bottom:30px;" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style="margin-bottom:200px;padding-top:30px;padding-bottom:30px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-primary text-center" data-azat-fontsize="72" data-azat-end="1000" data-azb="az_counter" data-az-id="b13" class="az-element az-counter"><div id="b13" class="text-primary text-center" style="font-size: 72px;">800</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b14" class="az-element az-html text-center" style=""><p class="lead">Clients</p></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-primary text-center" data-azat-seperator="." data-azat-fontsize="72" data-azat-end="9999" data-azb="az_counter" data-az-id="b16" class="az-element az-counter"><div id="b16" class="text-primary text-center" style="font-size: 72px;">7999</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b17" class="az-element az-html text-center" style=""><p class="lead">Lines of code</p></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b18" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-primary text-center" data-azat-fontsize="72" data-azat-end="250" data-azb="az_counter" data-az-id="b19" class="az-element az-counter"><div id="b19" class="text-primary text-center" style="font-size: 72px;">200</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b20" class="az-element az-html text-center" style=""><p class="lead">Espresso</p></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b21" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-el_class="text-primary text-center" data-azat-fontsize="72" data-azat-end="1" data-azb="az_counter" data-az-id="b22" class="az-element az-counter"><div id="b22" class="text-primary text-center" style="font-size: 72px;">1</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b23" class="az-element az-html text-center" style=""><p class="lead">Theme</p></div></div></div></div></div><div data-azat-style="padding-top:300px;padding-bottom:300px;background-image: url(http://i.imgur.com/ZRcchZ3.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;" data-azat-el_class="glazed-util-overlay-primary" data-azb="az_section" data-az-id="b24" id="b24" class="az-element az-section glazed-util-overlay-primary " style="padding-top:300px;padding-bottom:300px;background-image: url(http://i.imgur.com/ZRcchZ3.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b25" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b26" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-style="padding-top:60px;padding-bottom:40px;" data-azb="az_panel" data-az-id="b27" class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;"><div data-azcnt="true" class="panel-body az-ctnr"><div data-azat-style="padding-bottom:20px;" data-azat-el_class="text-primary text-center" data-azat-postfix="%" data-azat-fontsize="72" data-azat-end="25" data-azb="az_counter" data-az-id="b28" class="az-element az-counter"><div id="b28" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">0</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b29" class="az-element az-html text-center" style=""><p class="lead">Art Direction</p></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-style="padding-top:60px;padding-bottom:40px;" data-azb="az_panel" data-az-id="b31" class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;"><div data-azcnt="true" class="panel-body az-ctnr"><div data-azat-style="padding-bottom:20px;" data-azat-el_class="text-primary text-center" data-azat-postfix="%" data-azat-fontsize="72" data-azat-end="25" data-azb="az_counter" data-az-id="b32" class="az-element az-counter"><div id="b32" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">0</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b33" class="az-element az-html text-center" style=""><p class="lead">Design</p></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4 " data-azb="az_column" data-az-id="b34" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-style="padding-top:60px;padding-bottom:40px;" data-azb="az_panel" data-az-id="b35" class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;"><div data-azcnt="true" class="panel-body az-ctnr"><div data-azat-style="padding-bottom:20px;" data-azat-el_class="text-primary text-center" data-azat-postfix="%" data-azat-fontsize="72" data-azat-end="20" data-azb="az_counter" data-az-id="b36" class="az-element az-counter"><div id="b36" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">0</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b37" class="az-element az-html text-center" style=""><p class="lead">Code Architecture</p></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b38" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azat-style="padding-top:60px;padding-bottom:40px;" data-azb="az_panel" data-az-id="b39" class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;"><div data-azcnt="true" class="panel-body az-ctnr"><div data-azat-style="padding-bottom:20px;" data-azat-el_class="text-primary text-center" data-azat-postfix="%" data-azat-fontsize="72" data-azat-end="30" data-azb="az_counter" data-az-id="b40" class="az-element az-counter"><div id="b40" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">0</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b41" class="az-element az-html text-center" style=""><p class="lead">Programming</p></div></div></div></div></div><div data-azcnt="true" data-azat-style="padding-top:90px;padding-bottom:90px;" data-azat-device="sm" data-azb="az_row" data-az-id="b42" class="az-element az-row row" style="padding-top:90px;padding-bottom:90px;"><div data-azcnt="true" data-azat-width="1/3" data-azb="az_column" data-az-id="b43" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b44" class="az-element az-row row" style=""><div data-azcnt="true" data-azb="az_column" data-az-id="b45" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b46" class="az-element az-text" style=""><br></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b47" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azat-style="margin-bottom:60px;padding-top:40px;padding-bottom:40px;" data-azb="az_panel" data-az-id="b48" class="az-element az-panel panel  undefined" style="margin-bottom:60px;padding-top:40px;padding-bottom:40px;"><div data-azcnt="true" class="panel-body az-ctnr"><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_unknown" data-az-id="b49" class="az-element"></div><div data-azat-style="padding-top:40px;padding-bottom:40px;" data-azat-el_class="text-center" data-azat-postfix="%" data-azat-speed="3000" data-azat-fontsize="72" data-azb="az_counter" data-az-id="b50" class="az-element az-counter"><div id="b50" class="text-center" style="padding-top: 40px; padding-bottom: 40px; font-size: 72px;">0</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b51" class="az-element az-html text-center" style=""><p class="lead">Awesome</p></div></div></div><div data-azat-style="padding-top:40px;padding-bottom:40px;" data-azb="az_panel" data-az-id="b52" class="az-element az-panel panel  undefined" style="padding-top:40px;padding-bottom:40px;"><div data-azcnt="true" class="panel-body az-ctnr"><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_unknown" data-az-id="b53" class="az-element"></div><div data-azat-style="padding-top:40px;padding-bottom:40px;" data-azat-el_class="text-center" data-azat-prefix="$" data-azat-speed="3000" data-azat-fontsize="72" data-azat-end="9000" data-azb="az_counter" data-az-id="b54" class="az-element az-counter"><div id="b54" class="text-center" style="padding-top: 40px; padding-bottom: 40px; font-size: 72px;">0</div></div><div data-azcnt="true" data-azat-el_class="text-center" data-azb="az_html" data-az-id="b55" class="az-element az-html text-center" style=""><p class="lead">Works with prefix too!</p></div></div></div></div><div data-azcnt="true" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b56" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b57" class="az-element az-row row" style=""><div data-azcnt="true" data-azb="az_column" data-az-id="b58" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b59" class="az-element az-text" style=""><br></div></div></div></div></div></div></div><script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery-countTo/jquery.countTo.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-05-07 16:51:01 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Count Down Timer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010318,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e718e9f-d297-46a8-a908-142b3853d829',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style="">
					<h2 style="text-align: center;">Count Down Element</h2>
				</div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style="">
					<p class="lead">Sometimes it\'s important to make a moment in time&nbsp;the focal point of a a page. Examples are landing pages for events you organize or limited time offers. With Glazed it\'s easy to drop this highly configurable element anywhere in your page.</p>
				</div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b8" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;background-image: url(http://i.imgur.com/NZD3yTV.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;" data-azat-el_class="glazed-util-overlay-black glazed-util-overlay-40" data-azat-effect="fixed" data-azat-fluid="yes" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section glazed-util-overlay-black glazed-util-overlay-40 " style="padding-top: 150px; padding-bottom: 150px; background-image: url(&quot;http://i.imgur.com/NZD3yTV.jpg&quot;); background-position: center center; background-repeat: no-repeat; background-size: cover; background-attachment: fixed;"><div data-azcnt="true" class="az-ctnr container-fluid"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b11" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b12" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azat-style="color:#ffffff;" data-azat-el_class="text-center glazed-util-color-white" data-azb="az_text" data-az-id="b13" class="az-element az-text text-center glazed-util-color-white" style="color:#ffffff;"><h1>Transparent Count Down</h1>
</div><div data-azat-style="color:#ffffff;" data-azat-el_class="text-center glazed-util-color-primary" data-azat-display="days,hours,minutes,seconds" data-azat-saved="Thu, 11 Feb 2016 13:49:07 GMT" data-azat-time="23" data-azat-date_time="08.01.2017 00" data-azat-counter_scope="date_time" data-azat-countdown_style="style12" data-azb="az_countdown" data-az-id="b14" class="az-element az-countdown text-center glazed-util-color-primary ce-countdown--theme-12" style="color:#ffffff;"><div class="ce-countdown"><div class="ce-col"><div class="ce-days ce-digits"><span class="ce-days-digit">1</span><span class="ce-days-digit">8</span><span class="ce-days-digit">0</span></div> <span class="ce-days-label">Days</span></div><div class="ce-col"><div class="ce-hours ce-digits"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">0</span></div> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><div class="ce-minutes ce-digits"><span class="ce-minutes-digit">2</span><span class="ce-minutes-digit">9</span></div> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><div class="ce-seconds ce-digits"><span class="ce-seconds-digit">2</span><span class="ce-seconds-digit">8</span></div> <span class="ce-seconds-label">Seconds</span></div></div></div></div></div></div></div><div data-azat-style="padding-top:60px;padding-bottom:60px;" data-azb="az_section" data-az-id="b15" id="b15" class="az-element az-section  " style="padding-top:60px;padding-bottom:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b16" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b17" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b18" class="az-element az-text" style="">
					<p class="lead">Count Down Timers can count down to a specific date and/or time</p>
				</div></div><div data-azcnt="true" data-azat-width="  1/2  " data-azb="az_column" data-az-id="b19" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b20" class="az-element az-text" style="">
					<h3 style="text-align: center;"><em>Get Ready</em> for Glazed Conference 1.0!</h3>
				</div><div data-azat-display="days,hours,minutes,seconds" data-azat-saved="Thu, 11 Feb 2016 13:47:08 GMT" data-azat-time="23" data-azat-date_time="02.01.2017 00" data-azat-counter_scope="date_time" data-azat-countdown_style="style1" data-azb="az_countdown" data-az-id="b21" class="az-element az-countdown  ce-countdown--theme-1" style=""><div class="ce-countdown"><div class="ce-col"><span class="ce-days"><span class="ce-days-digit">1</span><span class="ce-days-digit">7</span><span class="ce-days-digit">4</span></span> <span class="ce-days-label">Days</span></div><div class="ce-col"><span class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">0</span></span> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><span class="ce-minutes"><span class="ce-minutes-digit">2</span><span class="ce-minutes-digit">9</span></span> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><span class="ce-seconds"><span class="ce-seconds-digit">2</span><span class="ce-seconds-digit">8</span></span> <span class="ce-seconds-label">Seconds</span></div></div></div></div><div data-azcnt="true" data-azat-width="  1/4" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b23" class="az-element az-row row" style=""><div data-azcnt="true" data-azb="az_column" data-az-id="b24" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b25" class="az-element az-text" style=""></div></div></div></div></div></div></div><div data-azat-style="padding-top:60px;padding-bottom:200px;" data-azb="az_section" data-az-id="b26" id="b26" class="az-element az-section  " style="padding-top:60px;padding-bottom:200px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b27" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b29" class="az-element az-text" style="">
					<p class="lead">Or reset every day to count to a time only</p>
				</div></div><div data-azcnt="true" data-azat-width="  1/2  " data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b31" class="az-element az-text" style="">
					<h3 style="text-align: center;"><em>Get Ready</em>&nbsp;for Bed Time!</h3>
				</div><div data-azat-el_class="glazed-util-color-primary" data-azat-display="hours,minutes,seconds" data-azat-saved="Fri, 08 May 2015 12:17:31 GMT" data-azat-time="23" data-azat-date_time="01.01.2016 00" data-azat-counter_scope="repeating" data-azat-countdown_style="style1" data-azb="az_countdown" data-az-id="b32" class="az-element az-countdown glazed-util-color-primary ce-countdown--theme-1" style=""><div class="ce-countdown"><div class="ce-col"><span class="ce-hours"><span class="ce-hours-digit">0</span><span class="ce-hours-digit">8</span></span> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><span class="ce-minutes"><span class="ce-minutes-digit">2</span><span class="ce-minutes-digit">9</span></span> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><span class="ce-seconds"><span class="ce-seconds-digit">2</span><span class="ce-seconds-digit">8</span></span> <span class="ce-seconds-label">Seconds</span></div></div></div></div><div data-azcnt="true" data-azat-width="  1/4" data-azb="az_column" data-az-id="b33" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b34" class="az-element az-row row" style=""><div data-azcnt="true" data-azb="az_column" data-az-id="b35" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b36" class="az-element az-text" style=""></div></div></div></div></div></div></div><div data-azat-style="padding-top:60px;padding-bottom:60px;" data-azat-el_class="bg-primary" data-azb="az_section" data-az-id="b37" id="b37" class="az-element az-section bg-primary " style="padding-top:60px;padding-bottom:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b38" class="az-element az-text" style="">
			<h2>Count Down Timers come with 10 predefined unique styles</h2>
		</div></div></div><div data-azat-style="padding-top:100px;padding-bottom:100px;" data-azb="az_section" data-az-id="b39" id="b39" class="az-element az-section  " style="padding-top:100px;padding-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b40" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b41" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b42" class="az-element az-text" style="">
					<h2>Airport Style</h2>
				</div></div><div data-azcnt="true" data-azat-width="  3/4" data-azb="az_column" data-az-id="b43" class="az-element az-ctnr az-column  col-sm-9" style=""><div data-azat-display="days,hours,minutes,seconds" data-azat-saved="Thu, 11 Feb 2016 13:47:19 GMT" data-azat-time="23" data-azat-date_time="03.01.2017 00" data-azat-counter_scope="date_time" data-azat-countdown_style="style10" data-azb="az_countdown" data-az-id="b44" class="az-element az-countdown  ce-countdown--theme-10" style=""><div class="ce-countdown"><div class="ce-unit-wrap"><div class="ce-days"><span class="ce-days-digit">1</span><span class="ce-days-digit">7</span><span class="ce-days-digit">5</span><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-days-label">Days</span></div><div class="ce-unit-wrap"><div class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">0</span><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-hours-label">Hours</span></div><div class="ce-unit-wrap"><div class="ce-minutes"><span class="ce-minutes-digit">2</span><span class="ce-minutes-digit">9</span><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-minutes-label">Minutes</span></div><div class="ce-unit-wrap"><div class="ce-seconds"><span class="ce-seconds-digit">2</span><span class="ce-seconds-digit">8</span><div class="ce-digits play"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits play"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-seconds-label">Seconds</span></div></div></div></div></div></div></div><div data-azat-style="padding-top:100px;padding-bottom:100px;" data-azb="az_section" data-az-id="b45" id="b45" class="az-element az-section  " style="padding-top:100px;padding-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b46" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b47" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b48" class="az-element az-text" style="">
					<h2>3D Flip</h2>
				</div></div><div data-azcnt="true" data-azat-width="  1/2  " data-azb="az_column" data-az-id="b49" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-display="days,hours,minutes,seconds" data-azat-saved="Thu, 11 Feb 2016 13:47:41 GMT" data-azat-time="23" data-azat-date_time="05.01.2017 00" data-azat-counter_scope="date_time" data-azat-countdown_style="style6" data-azb="az_countdown" data-az-id="b50" class="az-element az-countdown  ce-countdown--theme-6 clearfix" style=""><div class="ce-countdown"><div class="ce-col col-md-3"><div data-old="177" class="ce-days"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">177</div><div class="ce-flip-back bg-primary">177</div></div></div><span class="ce-days-label">Days</span></div><div class="ce-col col-md-3"><div data-old="10" class="ce-hours"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">10</div><div class="ce-flip-back bg-primary">10</div></div></div><span class="ce-hours-label">Hours</span></div><div class="ce-col col-md-3"><div data-old="29" class="ce-minutes"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">29</div><div class="ce-flip-back bg-primary">29</div></div></div><span class="ce-minutes-label">Minutes</span></div><div class="ce-col col-md-3"><div data-old="29" class="ce-seconds ce-animate"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">29</div><div class="ce-flip-back bg-primary">28</div></div></div><span class="ce-seconds-label">Seconds</span></div></div></div></div><div data-azcnt="true" data-azat-width="  1/4" data-azb="az_column" data-az-id="b51" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:100px;padding-bottom:100px;" data-azb="az_section" data-az-id="b52" id="b52" class="az-element az-section  " style="padding-top:100px;padding-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b53" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b54" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b55" class="az-element az-text" style="">
					<h2>Disc Style</h2>
				</div></div><div data-azcnt="true" data-azat-width="  1/2  " data-azb="az_column" data-az-id="b56" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-display="days,hours,minutes,seconds" data-azat-saved="Thu, 11 Feb 2016 13:47:51 GMT" data-azat-time="23" data-azat-date_time="07.01.2017 00" data-azat-counter_scope="date_time" data-azat-countdown_style="style9" data-azb="az_countdown" data-az-id="b57" class="az-element az-countdown  ce-countdown--theme-9" style=""><div class="ce-countdown"><div class="ce-circle"><canvas id="ce-days" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-days"><span class="ce-days-digit">1</span><span class="ce-days-digit">7</span><span class="ce-days-digit">9</span></span><span class="ce-label ce-days-label">Days</span></div></div><div class="ce-circle"><canvas id="ce-hours" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">0</span></span><span class="ce-label ce-hours-label">Hours</span></div></div><div class="ce-circle"><canvas id="ce-minutes" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-minutes"><span class="ce-minutes-digit">2</span><span class="ce-minutes-digit">9</span></span><span class="ce-label ce-minutes-label">Minutes</span></div></div><div class="ce-circle"><canvas id="ce-seconds" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-seconds"><span class="ce-seconds-digit">2</span><span class="ce-seconds-digit">8</span></span><span class="ce-label ce-seconds-label">Seconds</span></div></div></div></div></div><div data-azcnt="true" data-azat-width="  1/4" data-azb="az_column" data-az-id="b58" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b59" class="az-element az-row row" style=""><div data-azcnt="true" data-azb="az_column" data-az-id="b60" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b61" class="az-element az-text" style=""></div></div></div></div></div></div></div><div data-azat-style="padding-top:100px;padding-bottom:100px;" data-azb="az_section" data-az-id="b62" id="b62" class="az-element az-section  " style="padding-top:100px;padding-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b63" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b64" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b65" class="az-element az-text" style="">
					<h2>Grid Style</h2>
				</div></div><div data-azcnt="true" data-azat-width="  1/2  " data-azb="az_column" data-az-id="b66" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-el_class="glazed-util-color-primary" data-azat-display="days,hours,minutes,seconds" data-azat-saved="Thu, 11 Feb 2016 13:48:03 GMT" data-azat-time="23" data-azat-date_time="13.01.2017 00" data-azat-counter_scope="date_time" data-azat-countdown_style="style1" data-azb="az_countdown" data-az-id="b67" class="az-element az-countdown glazed-util-color-primary ce-countdown--theme-1" style=""><div class="ce-countdown"><div class="ce-col"><span class="ce-days"><span class="ce-days-digit">1</span><span class="ce-days-digit">8</span><span class="ce-days-digit">5</span></span> <span class="ce-days-label">Days</span></div><div class="ce-col"><span class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">0</span></span> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><span class="ce-minutes"><span class="ce-minutes-digit">2</span><span class="ce-minutes-digit">9</span></span> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><span class="ce-seconds"><span class="ce-seconds-digit">2</span><span class="ce-seconds-digit">7</span></span> <span class="ce-seconds-label">Seconds</span></div></div></div></div><div data-azcnt="true" data-azat-width="  1/4" data-azb="az_column" data-az-id="b68" class="az-element az-ctnr az-column  col-sm-3" style=""><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b69" class="az-element az-row row" style=""><div data-azcnt="true" data-azb="az_column" data-az-id="b70" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b71" class="az-element az-text" style=""></div></div></div></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/carbide_builder/vendor/counteverest/css/counteverest.carbide.css">
<script src="-base-url-/-module-directory-/carbide_builder/vendor/counteverest/js/vendor/jquery.counteverest.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/vendor/datetimepicker/jquery.datetimepicker.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-05-07 16:51:58 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Call to Action',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1429539688,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a13b4055-cfd9-4437-9127-35acd06cf9ea',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/6" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-2" style=""></div><div data-azcnt="true" data-azat-width=" 4/6 " data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-8" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Call to Action Element</h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">The Glazed team&nbsp;used advice from&nbsp;conversion optimization experts to give you the tools&nbsp;that are needed to design&nbsp;websites that work both beautifully and effectively. These Call-to-action drag and drop elements&nbsp;can be droppped anywhere on your page to create a clear focal point in your landing page!</p></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b8" class="az-element"></div></div><div data-azcnt="true" data-azat-width=" 1/6" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-2" style=""></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;" data-azat-el_class="our glazed-util-background-primary" data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section our glazed-util-background-primary " style="padding-top:150px;padding-bottom:150px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-large-white" data-az-id="b11" class="az-element az-template " style=""><div data-azcnt="true"><div class="stpe-cta stpe-cta--large row">
          <div class="col-md-9 stpe-cta__text az-editable" style="">
            <p class="lead our glazed-util-color-white">You feel there should be no barrier between your creativity and the internet. Direct communication. Our theme is built to work this way: Frictionless expression.</p>
          </div>

          <div class="col-md-3 stpe-cta__button"><a class="btn btn-lg stpe-borderbutton our glazed-util-border-white our glazed-util-color-white our glazed-util-hover-background-white our glazed-util-hover-border-white our glazed-util-hover-color-primary az-editable" href="http://www.sooperthemes.com/pricing">Buy Theme</a></div>
        </div></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;" data-azb="az_section" data-az-id="b12" id="b12" class="az-element az-section  " style="padding-top:150px;padding-bottom:150px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-large" data-az-id="b13" class="az-element az-template " style=""><div data-azcnt="true"><h3 class="stpe-cta__heading">About Our Theme</h3>

        <div class="stpe-cta stpe-cta--large row">
          <div class="col-md-9 stpe-cta__text az-editable">
            <p class="lead">You feel there should be no barrier between your creativity and the internet. Direct communication. Our theme is built to work this way: Frictionless expression.</p>
          </div>

          <div class="col-md-3 stpe-cta__button"><a style="" class="glazed-util-color-primary glazed-util-border-primary stpe-borderbutton btn btn-lg our glazed-util-hover-border-primary glazed-util-hover-color-white glazed-util-hover-background-primary az-editable" href="http://www.sooperthemes.com/pricing">Buy Theme</a></div>
        </div></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;" data-azat-el_class="glazed-util-background-accent1" data-azat-parallax_speed="58" data-azb="az_section" data-az-id="b14" id="b14" class="az-element az-section glazed-util-background-accent1 " style="padding-top:150px;padding-bottom:150px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-center" data-az-id="b15" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead center-block col-md-6 az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop elements.</p>
<p>
  <a style="" class="btn btn-primary btn-lg center-block col-sm-3 clear-both clearfix" href="http://sooperthemes.com/pricing">Join SooperThemes</a>
</p></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;" data-azb="az_section" data-az-id="b16" id="b16" class="az-element az-section  " style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-wide" data-az-id="b17" class="az-element az-template " style=""><div data-azcnt="true"><div class="stpe-cta stpe-cta--wide">
          <h2 class="stpe-cta__heading">Discover the Drupal solution that makes your life easy</h2>
          <a class="btn btn-lg btn-primary wow wow-visible tada" data-wow-offset="202" href="http://www.sooperthemes.com/pricing" style="visibility: visible;">Buy Theme</a></div></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;" data-azb="az_section" data-az-id="b18" id="b18" class="az-element az-section  " style="padding-top:150px;padding-bottom:150px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b19" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b20" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-style="padding-top:90px;" data-azb="cta-simple" data-az-id="b21" class="az-element az-template " style="padding-top:90px;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop features.</p>
<p>
  <a class="btn btn-primary btn-lg clear-both clearfix az-editable" href="http://sooperthemes.com/pricing">
  Try it now
  </a>
</p></div></div></div><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-height="" data-azat-width="" data-azat-image="http://i.imgur.com/LarzgF4.jpg" data-azb="az_image" data-az-id="b23" class="az-element az-image "><img style="" src="http://i.imgur.com/LarzgF4.jpg" alt="" title=""></div></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;" data-azb="az_section" data-az-id="b24" id="b24" class="az-element az-section  " style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b25" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b26" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-height="" data-azat-width="" data-azat-image="http://i.imgur.com/0wZmy4L.jpg" data-azb="az_image" data-az-id="b27" class="az-element az-image "><img style="" src="http://i.imgur.com/0wZmy4L.jpg" alt="" title=""></div></div><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b28" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-style="padding-top:90px;" data-azb="cta-simple" data-az-id="b29" class="az-element az-template " style="padding-top:90px;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop features.</p>
<p>
  <a class="btn btn-primary btn-lg clear-both clearfix az-editable" href="http://sooperthemes.com/pricing">
  Try it now
  </a>
</p></div></div></div></div></div></div><div data-azat-style="padding-top:150px;padding-bottom:150px;" data-azb="az_section" data-az-id="b30" id="b30" class="az-element az-section  " style="padding-top:150px;padding-bottom:150px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-contact-call" data-az-id="b31" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../carbide_builder/vendor/animate.css/animate.min.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../carbide_builder/js/carbide.wow.js"></script><p class="lead center-block col-md-6 az-editable">Please contact us for questions or a free assessment and we will get back to you as soon as possible!</p>
<div data-wow-offset="229" style="visibility: visible;" class="wow wow-visible pulse clear-both clearfix">
  <a class="btn btn-primary btn-lg center-block col-sm-3 az-editable" href="http://sooperthemes.com/pricing">
  Contact us now
  </a>
</div>
<br><p class="text-center clear-both clearfix az-editable">
  <a class="btn btn-default btn-sm bs-popover" data-html="FALSE" data-placement="top" data-animation="TRUE" data-content="You can reach us at 1-55-555-555. You may reach our office from monday to friday form 09.00 to 17.30" data-toggle="popover" href="#" data-original-title="Call us">Or click here for our phone number</a>
</p></div></div></div></div><div data-azat-style="padding-top:200px;padding-bottom:200px;background-color:#eeeeee;" data-azb="az_section" data-az-id="b32" id="b32" class="az-element az-section  " style="padding-top:200px;padding-bottom:200px;background-color:#eeeeee;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-center" data-az-id="b33" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead center-block col-md-6 az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop elements.</p>
<p>
  <a style="" class="center-block glazed-util-background-accent2 btn btn-primary btn-lg col-sm-3 clear-both clearfix" href="http://sooperthemes.com/pricing">Try it now</a>
</p></div></div></div></div><div data-azat-style="padding-top:200px;padding-bottom:200px;background-image: url(http://i.imgur.com/PqTCt5k.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;" data-azat-parallax_speed="15" data-azat-effect="parallax" data-azb="az_section" data-az-id="b34" id="b34" class="az-element az-section  " style="padding-top: 200px; padding-bottom: 200px; background-image: url(&quot;http://i.imgur.com/PqTCt5k.jpg&quot;); background-position: 50% 0px; background-repeat: no-repeat; background-size: cover;"><div data-azcnt="true" class="az-ctnr container"><div data-azat-style="padding-top:40px;padding-bottom:40px;background-color:#ffffff;opacity:0.88;" data-azb="cta-contact-call" data-az-id="b35" class="az-element az-template " style="padding-top:40px;padding-bottom:40px;background-color:#ffffff;opacity:0.88;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../carbide_builder/vendor/animate.css/animate.min.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../carbide_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../carbide_builder/js/carbide.wow.js"></script><p class="lead center-block col-md-6 az-editable">Please contact us for questions or a free assessment and we will get back to you as soon as possible!</p>
<div data-wow-offset="229" style="visibility: visible;" class="wow wow-visible pulse clear-both clearfix">
  <a style="" class="btn btn-primary glazed-util-background-accent1 btn-lg center-block col-sm-3 az-editable" href="http://sooperthemes.com/pricing">Contact us now</a>
</div>
<br><p class="text-center clear-both clearfix az-editable">
  <a class="btn btn-default btn-sm bs-popover" data-html="FALSE" data-placement="top" data-animation="TRUE" data-content="You can reach us at 1-55-555-555. You may reach our office from monday to friday form 09.00 to 17.30" data-toggle="popover" href="#" data-original-title="Call us">Or click here for our phone number</a>
</p></div></div></div></div><div data-azat-style="padding-top:200px;padding-bottom:200px;" data-azat-el_class="our glazed-util-background-primary" data-azb="az_section" data-az-id="b36" id="b36" class="az-element az-section our glazed-util-background-primary " style="padding-top:200px;padding-bottom:200px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="cta-center" data-az-id="b37" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead center-block col-md-6 az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop elements.</p>
<p>
  <a style="color:#333333;background-color:#ffffff;" class="btn btn-primary btn-lg center-block col-sm-3 clear-both clearfix" href="http://sooperthemes.com/pricing">Try it now</a>
</p></div></div></div></div><script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.parallax/jquery.parallax.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/carbide_builder/carbide_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-04-20 16:21:28 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Google Maps',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277888,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a4608e7f-a620-4b47-b9a6-3e960302cf32',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Google Maps Element<br></h2></div><hr data-azb="az_separator" data-az-id="b7" class="az-element az-separator " style="border: none;"></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b8" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b9" id="b9" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b10" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b11" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b12" class="az-element az-text" style=""><p class="lead">Easily add Google Maps to your pages. Simply select the Maps element in the Carbide Builder interface and fill in the address.<br></p><p class="lead">The map element is powered by Google, it understands much more that just addresses. For example: "Walmarts in Chicago" is used as location in the map below.<br></p></div></div><div data-azcnt="true" data-azat-width=" 1/2" data-azb="az_column" data-az-id="b13" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azat-height="200" data-azat-address="Nachtegaalstraat 35, Utrecht" data-azb="az_map" data-az-id="b14" class="az-element az-map "><iframe style="width: 100%; height: 200px;" src="https://maps.google.com/maps?q=Nachtegaalstraat+35, Utrecht&amp;iwloc=near&amp;output=embed" frameborder="0"></<iframe></iframe></div></div></div></div></div><div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b15" id="b15" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b16" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/1" data-azb="az_column" data-az-id="b17" class="az-element az-ctnr az-column  col-sm-12" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b18" class="az-element az-text" style=""><h2 style="text-align: center;">Find a Wallmart near you:</h2>
</div><div data-azat-height="500px" data-azat-address="wallmart supercenter, chicago" data-azb="az_map" data-az-id="b19" class="az-element az-map "><iframe style="width: 100%; height: 500px;" src="https://maps.google.com/maps?q=wallmart+supercenter, chicago&amp;iwloc=near&amp;output=embed" frameborder="0"></<iframe></iframe></div></div></div></div></div><div data-azat-style="padding-top:10%;padding-bottom:10%;" data-azb="az_section" data-az-id="b20" id="b20" class="az-element az-section  " style="padding-top:10%;padding-bottom:10%;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b21" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b22" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b23" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b24" class="az-element az-text" style=""><h2>Full Width Google Map</h2>
</div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b25" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-address="Nachtegaalstraat 35, Utrecht" data-azb="az_map" data-az-id="b26" class="az-element az-map "><iframe style="width: 100%; height: 400px;" src="https://maps.google.com/maps?q=Nachtegaalstraat+35, Utrecht&amp;iwloc=near&amp;output=embed" frameborder="0"></<iframe></iframe></div><div data-azat-fluid="yes" data-azb="az_section" data-az-id="b27" id="b27" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container-fluid"></div></div>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-02-12 12:51:28 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Quote Slider',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1430566560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd495cf25-fc13-4103-a876-c71b190c421c',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Easy: Ready-made Quote Slider</h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">The quote slider is great for display for testimonials, reviews or&nbsp;quotes.&nbsp;Glazed allows you to just drop a quote slider anywhere in the page. It will look good in&nbsp;columns of all reasonable sizes.&nbsp;</p></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b8" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azb="quoteslider-4" data-az-id="b11" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Quote%20slider/../../css/elements/quoteslider.css" rel="stylesheet" type="text/css"><div class="carousel slide stpe-quoteslider" data-ride="carousel" id="stpe-quoteslider">
  <!-- Bottom Carousel Indicators -->
  <ol class="carousel-indicators"><li data-target="#stpe-quoteslider" data-slide-to="0" class="">
    </li><li class="" data-target="#stpe-quoteslider" data-slide-to="1">
    </li><li class="active" data-target="#stpe-quoteslider" data-slide-to="2">
    </li><li class="" data-target="#stpe-quoteslider" data-slide-to="3">
  </li></ol><div class="carousel-inner">
    <div class="item">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">It\'s incredible. Product impressed me on multiple levels. Very easy to use. Wow what great service, I love it!</p>
            <small class="az-editable">Jack Finklestein</small>
          </div>
        </div>
      </blockquote>
    </div>
    <div class="item">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">The best on the net! I would be lost without Product. Product is worth much more than I paid.</p>
            <small class="az-editable">Rick Edwards</small>
          </div>
        </div>
      </blockquote>
    </div>
    <div class="item active">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">I like Product more and more each day because it makes my life a lot easier. I was amazed at the quality of Product. It\'s exactly what I\'ve been looking for. Best. Product. Ever!</p>
            <small class="az-editable">Carla Achterberg</small>
          </div>
        </div>
      </blockquote>
    </div>
    <div class="item">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">We can\'t understand how we\'ve been living without Product. Product is the most valuable business resource we have EVER purchased. Man, this thing is getting better and better as I learn more about it. Very easy to use.</p>
            <small class="az-editable">Michael White</small>
          </div>
        </div>
      </blockquote>
    </div>
  </div>

  <!-- Carousel Buttons Next/Prev -->
  <a data-slide="prev" href="#stpe-quoteslider" class="left carousel-control"><i class="glyphicon glyphicon-chevron-left">&nbsp;</i></a>
  <a data-slide="next" href="#stpe-quoteslider" class="right carousel-control"><i class="glyphicon glyphicon-chevron-right">&nbsp;</i></a>
</div></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-05-02 13:36:00 +0200',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  $nodes[] = array(
  'title' => 'Pricing Table',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1450522250,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e54ed492-aa67-4f17-84c2-a841dac84118',
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-azat-style="padding-top:60px;" data-azb="az_section" data-az-id="b2" id="b2" class="az-element az-section  " style="padding-top:60px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b3" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b4" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width="1/2" data-azb="az_column" data-az-id="b5" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azcnt="true" data-azb="az_text" data-az-id="b6" class="az-element az-text" style=""><h2 style="text-align: center;">Pricing Tables: Easier than ever!</h2></div><div data-azcnt="true" data-azb="az_text" data-az-id="b7" class="az-element az-text" style=""><p class="lead">Different pricing table designs and layouts can be dropped anywhere in your page from the sidebar in our page builder. Simply click a price, feature, or any other text to edit. You can even feature particular plans to focus conversion!</p></div><div data-azcnt="true" data-azb="az_unknown" data-az-id="b8" class="az-element"></div></div><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b9" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azb="az_section" data-az-id="b10" id="b10" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b11" class="az-element az-text" style=""><h2 style="text-align: center;">Boxed Table<br></h2></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b12" id="b12" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b13" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/3" data-azb="az_column" data-az-id="b14" class="az-element az-ctnr az-column  col-sm-4" style=""></div><div data-azcnt="true" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b15" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azb="pricingtable-boxed-1" data-az-id="b16" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
              <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-12">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                      <li class="az-editable list-group-item">5 GB Storage</li>
                      <li class="az-editable list-group-item" style="">Unlimited Users</li>
                      <li class="az-editable list-group-item">10 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>
            </div></div></div></div><div data-azcnt="true" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b17" class="az-element az-ctnr az-column  col-sm-4" style=""></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b18" id="b18" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-boxed-2" data-az-id="b19" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-6">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-6">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b20" id="b20" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-boxed-3" data-az-id="b21" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b22" id="b22" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-boxed-4" data-az-id="b23" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b24" id="b24" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-boxed-5" data-az-id="b25" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row glazed-util-columns-5 clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Extreme</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">59</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">Unlimited Projects</li>
                  <li class="az-editable list-group-item">Unlimited Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">Unlimited Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div data-azb="az_section" data-az-id="b26" id="b26" class="az-element az-section  " style=""><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azb="az_text" data-az-id="b27" class="az-element az-text" style=""><h2 style="text-align: center;">Solid Table<br></h2></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b28" id="b28" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b29" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/3" data-azb="az_column" data-az-id="b30" class="az-element az-ctnr az-column  col-sm-4" style=""></div><div data-azcnt="true" data-azat-width=" 1/3 " data-azb="az_column" data-az-id="b31" class="az-element az-ctnr az-column  col-sm-4" style=""><div data-azb="pricingtable-full-1" data-az-id="b32" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
              <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-12">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                      <li class="az-editable list-group-item">5 GB Storage</li>
                      <li class="az-editable list-group-item">Unlimited Users</li>
                      <li class="az-editable list-group-item">10 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>
            </div></div></div></div><div data-azcnt="true" data-azat-width=" 1/3" data-azb="az_column" data-az-id="b33" class="az-element az-ctnr az-column  col-sm-4" style=""></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b34" id="b34" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azcnt="true" data-azat-device="sm" data-azb="az_row" data-az-id="b35" class="az-element az-row row" style=""><div data-azcnt="true" data-azat-width="1/4" data-azb="az_column" data-az-id="b36" class="az-element az-ctnr az-column  col-sm-3" style=""></div><div data-azcnt="true" data-azat-width=" 1/2 " data-azb="az_column" data-az-id="b37" class="az-element az-ctnr az-column  col-sm-6" style=""><div data-azb="pricingtable-full-2" data-az-id="b38" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
              <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-6">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                      <li class="az-editable list-group-item">5 GB Storage</li>
                      <li class="az-editable list-group-item">Unlimited Users</li>
                      <li class="az-editable list-group-item">10 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>

              <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-6">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                      <li class="az-editable list-group-item">15 GB Storage</li>
                      <li class="az-editable list-group-item">Unlimited Users</li>
                      <li class="az-editable list-group-item">20 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>
            </div></div></div></div><div data-azcnt="true" data-azat-width=" 1/4" data-azb="az_column" data-az-id="b39" class="az-element az-ctnr az-column  col-sm-3" style=""></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b40" id="b40" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-full-3" data-az-id="b41" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b42" id="b42" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-full-4" data-az-id="b43" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div data-azat-style="margin-top:100px;margin-bottom:100px;" data-azb="az_section" data-az-id="b44" id="b44" class="az-element az-section  " style="margin-top:100px;margin-bottom:100px;"><div data-azcnt="true" class="az-ctnr container"><div data-azb="pricingtable-full-5" data-az-id="b45" class="az-element az-template " style=""><div data-azcnt="true"><link href="-base-url-/-module-directory-/carbide_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row glazed-util-columns-5 clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Extreme</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">59</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">Unlimited Projects</li>
                  <li class="az-editable list-group-item">Unlimited Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">Unlimited Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2015-12-19 11:50:50 +0100',
  'user_uuid' => 'cfa300f5-b2bf-45ec-80e7-aff662d90265',
);
  return $nodes;
}
