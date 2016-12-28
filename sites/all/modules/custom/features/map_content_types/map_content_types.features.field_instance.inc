<?php
/**
 * @file
 * map_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function map_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-tour-body'.
  $field_instances['node-tour-body'] = array(
    'bundle' => 'tour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Main Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-tour-field_activity_type'.
  $field_instances['node-tour-field_activity_type'] = array(
    'bundle' => 'tour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_activity_type',
    'label' => 'Activity Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-tour-field_location'.
  $field_instances['node-tour-field_location'] = array(
    'bundle' => 'tour',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Choose a location that represents where this tour operates. This point will be represented on the larger map',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Exact Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers_geofield',
      'settings' => array(
        'geocoder' => array(
          'enabled' => FALSE,
          'handler' => NULL,
        ),
        'map' => array(
          'auto_center' => 1,
          'base_url' => '//services.arcgisonline.com/ArcGIS/rest/services/World_Imagery/MapServer/tile/{z}/{y}/{x}.png',
          'center' => array(
            'lat' => 0,
            'lng' => 0,
          ),
          'zoom' => 10,
        ),
      ),
      'type' => 'openlayers_geofield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-tour-field_short_summary'.
  $field_instances['node-tour-field_short_summary'] = array(
    'bundle' => 'tour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This shows up anywhere a brief summary of the trip is needed',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_short_summary',
    'label' => 'Short Summary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-tour-field_tour_operating_area'.
  $field_instances['node-tour-field_tour_operating_area'] = array(
    'bundle' => 'tour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The general area that the tour operates in ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_operating_area',
    'label' => 'Tour Operating Area',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-tour-field_tour_path'.
  $field_instances['node-tour-field_tour_path'] = array(
    'bundle' => 'tour',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tour_path',
    'label' => 'Tour Path',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers_geofield',
      'settings' => array(
        'geocoder' => array(
          'enabled' => FALSE,
          'handler' => NULL,
        ),
        'map' => array(
          'auto_center' => 1,
          'base_url' => '//ak.t{s}.tiles.virtualearth.net/tiles/a{q}?g=1236',
          'center' => array(
            'lat' => 0,
            'lng' => 0,
          ),
          'zoom' => 10,
        ),
      ),
      'type' => 'openlayers_geofield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-tour_region-field_location_center'.
  $field_instances['node-tour_region-field_location_center'] = array(
    'bundle' => 'tour_region',
    'default_value' => array(
      0 => array(
        'dataType' => 'WKT',
        'geom' => 'POINT (-149.436721802 60.108670463)',
        'input_format' => 'wkt',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'leaflet',
        'settings' => array(
          'height' => 400,
          'icon' => array(
            'html' => '',
            'htmlClass' => '',
            'iconAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'iconImageStyle' => '',
            'iconSize' => array(
              'x' => '',
              'y' => '',
            ),
            'iconType' => 'marker',
            'iconUrl' => '',
            'popupAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowUrl' => '',
          ),
          'leaflet_map' => 'esri-world_imagery',
          'popup' => array(
            'show' => 0,
            'text' => '',
          ),
          'vector_display' => array(
            'clickable' => 0,
            'color' => '',
            'dashArray' => '',
            'fill' => 0,
            'fillColor' => '',
            'fillOpacity' => '',
            'opacity' => '',
            'stroke' => 0,
            'stroke_override' => 0,
            'weight' => '',
          ),
          'zoom' => array(
            'initialZoom' => 10,
            'maxZoom' => 13,
            'minZoom' => 8,
            'scrollWheelZoom' => 1,
          ),
        ),
        'type' => 'geofield_leaflet',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_center',
    'label' => 'Map Area Polygon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers_geofield',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'single',
        'feature_types' => array(
          'path' => 'path',
          'point' => 'point',
          'polygon' => 'polygon',
        ),
        'openlayers_map' => 'openlayers_geofield_map_geofield_widget',
        'showInputField' => 1,
      ),
      'type' => 'openlayers_geofield',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-tour_region-field_permanent_label_on_map'.
  $field_instances['node-tour_region-field_permanent_label_on_map'] = array(
    'bundle' => 'tour_region',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the static label that will be displayed on the map at all times for the region',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_permanent_label_on_map',
    'label' => 'Permanent label on map',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-tour_area-field_location_center'.
  $field_instances['taxonomy_term-tour_area-field_location_center'] = array(
    'bundle' => 'tour_area',
    'default_value' => array(
      0 => array(
        'dataType' => 'WKT',
        'geom' => 'POINT (-149.434591 60.109762)',
        'input_format' => 'wkt',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_location_center',
    'label' => 'Map Area Polygon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers_geofield',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'single',
        'feature_types' => array(
          'path' => 'path',
          'point' => 'point',
          'polygon' => 'polygon',
        ),
        'openlayers_map' => 'openlayers_geofield_map_geofield_widget',
        'showInputField' => 1,
      ),
      'type' => 'openlayers_geofield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity Type');
  t('Choose a location that represents where this tour operates. This point will be represented on the larger map');
  t('Exact Location');
  t('Main Description');
  t('Map Area Polygon');
  t('Permanent label on map');
  t('Short Summary');
  t('The general area that the tour operates in ');
  t('This is the static label that will be displayed on the map at all times for the region');
  t('This shows up anywhere a brief summary of the trip is needed');
  t('Tour Operating Area');
  t('Tour Path');

  return $field_instances;
}
