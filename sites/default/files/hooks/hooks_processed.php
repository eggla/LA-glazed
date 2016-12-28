a:64:{s:12:"addressfield";a:4:{s:38:"hook_addressfield_default_values_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_addressfield_default_values_alter";s:10:"definition";s:75:"function hook_addressfield_default_values_alter(&$default_values, $context)";s:11:"description";s:64:"Allows modules to alter the default values for an address field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"addressfield";s:9:"file_path";s:35:"public://hooks/addressfield.api.php";s:4:"body";s:685:"
  // If no other default country was provided, set it to France.
  // Note: you might want to check $context['instance']['required'] and
  // skip setting the default country if the field is optional.
  if (empty($default_values['country'])) {
    $default_values['country'] = 'FR';
  }

  // Determine the country for which other defaults should be provided.
  $selected_country = $default_values['country'];
  if (isset($context['address']['country'])) {
    $selected_country = $context['address']['country'];
  }

  // Add defaults for the US.
  if ($selected_country == 'US') {
    $default_values['locality'] = 'New York';
    $default_values['administrative_area'] = 'NY';
  }
";}s:39:"hook_addressfield_address_formats_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_addressfield_address_formats_alter";s:10:"definition";s:67:"function hook_addressfield_address_formats_alter(&$address_formats)";s:11:"description";s:55:"Allows modules to alter the predefined address formats.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"addressfield";s:9:"file_path";s:35:"public://hooks/addressfield.api.php";s:4:"body";s:161:"
  // Remove the postal_code from the list of required fields for China.
  $address_formats['CN']['required_fields'] = array('locality', 'administrative_area');
";}s:44:"hook_addressfield_administrative_areas_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:44:"hook_addressfield_administrative_areas_alter";s:10:"definition";s:77:"function hook_addressfield_administrative_areas_alter(&$administrative_areas)";s:11:"description";s:60:"Allows modules to alter the predefined administrative areas.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"addressfield";s:9:"file_path";s:35:"public://hooks/addressfield.api.php";s:4:"body";s:334:"
  // Alter the label of the Spanish administrative area with the iso code PM.
  $administrative_areas['ES']['PM'] = t('Balears / Baleares');

  // Add administrative areas for imaginary country XT, keyed by their
  // imaginary ISO codes.
  $administrative_areas['XT'] = array(
      'A' => t('Aland'),
      'B' => t('Bland'),
  );
";}s:47:"hook_addressfield_standard_widget_refresh_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:47:"hook_addressfield_standard_widget_refresh_alter";s:10:"definition";s:88:"function hook_addressfield_standard_widget_refresh_alter(&$commands, $form, $form_state)";s:11:"description";s:76:"Allows modules to add arbitrary AJAX commands to the array returned from the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"addressfield";s:9:"file_path";s:35:"public://hooks/addressfield.api.php";s:4:"body";s:117:"
  // Display an alert message.
  $commands[] = ajax_command_alert(t('The address field widget has been updated.'));
";}}s:10:"aggregator";a:7:{s:21:"hook_aggregator_fetch";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_aggregator_fetch";s:10:"definition";s:37:"function hook_aggregator_fetch($feed)";s:11:"description";s:52:"Create an alternative fetcher for aggregator.module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:54:"
  $feed->source_string = mymodule_fetch($feed->url);
";}s:26:"hook_aggregator_fetch_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_aggregator_fetch_info";s:10:"definition";s:37:"function hook_aggregator_fetch_info()";s:11:"description";s:56:"Specify the title and short description of your fetcher.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:134:"
  return array(
    'title' => t('Default fetcher'),
    'description' => t('Default fetcher for resources available by URL.'),
  );
";}s:21:"hook_aggregator_parse";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_aggregator_parse";s:10:"definition";s:37:"function hook_aggregator_parse($feed)";s:11:"description";s:51:"Create an alternative parser for aggregator module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:120:"
  if ($items = mymodule_parse($feed->source_string)) {
    $feed->items = $items;
    return TRUE;
  }
  return FALSE;
";}s:26:"hook_aggregator_parse_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_aggregator_parse_info";s:10:"definition";s:37:"function hook_aggregator_parse_info()";s:11:"description";s:55:"Specify the title and short description of your parser.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:129:"
  return array(
    'title' => t('Default parser'),
    'description' => t('Default parser for RSS, Atom and RDF feeds.'),
  );
";}s:23:"hook_aggregator_process";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_aggregator_process";s:10:"definition";s:39:"function hook_aggregator_process($feed)";s:11:"description";s:41:"Create a processor for aggregator.module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:67:"
  foreach ($feed->items as $item) {
    mymodule_save($item);
  }
";}s:28:"hook_aggregator_process_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_aggregator_process_info";s:10:"definition";s:39:"function hook_aggregator_process_info()";s:11:"description";s:58:"Specify the title and short description of your processor.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:131:"
  return array(
    'title' => t('Default processor'),
    'description' => t('Creates lightweight records of feed items.'),
  );
";}s:22:"hook_aggregator_remove";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_aggregator_remove";s:10:"definition";s:38:"function hook_aggregator_remove($feed)";s:11:"description";s:24:"Remove stored feed data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"aggregator";s:9:"file_path";s:33:"public://hooks/aggregator.api.php";s:4:"body";s:38:"
  mymodule_remove_items($feed->fid);
";}}s:4:"bean";a:5:{s:24:"hook_bean_types_api_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_bean_types_api_info";s:10:"definition";s:35:"function hook_bean_types_api_info()";s:11:"description";s:38:"Implements hook_bean_types_api_info().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"bean";s:9:"file_path";s:27:"public://hooks/bean.api.php";s:4:"body";s:38:"
  return array(
    'api' => 4,
  );
";}s:15:"hook_bean_types";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_bean_types";s:10:"definition";s:26:"function hook_bean_types()";s:11:"description";s:29:"Implements hook_bean_types().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"bean";s:9:"file_path";s:27:"public://hooks/bean.api.php";s:4:"body";s:663:"
  $plugins = array();
  $plugins['plugin_key'] = array(
    'label' => t('Title'),
    'description' => t('Description'),
    // This is optional. Set it to TRUE if you do not want the plugin to be
    // displayed in the UI.
    'abstract' => FALSE,
    'handler' => array(
      'class' => 'ClassName',
      'parent' => 'bean',
      // This should be pointing to the path of your custom bean plugin module.
      'path' => drupal_get_path('module', 'example_bean') . '/plugins',
      // Class files should be named accordingly in order to support ctools
      // autoloading procedures.
      'file' => 'ClassName.class.php',
    ),
  );
  return $plugins;
";}s:16:"hook_bean_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_bean_access";s:10:"definition";s:47:"function hook_bean_access($bean, $op, $account)";s:11:"description";s:30:"Implements hook_bean_access().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"bean";s:9:"file_path";s:27:"public://hooks/bean.api.php";s:4:"body";s:16:"
  return TRUE;
";}s:21:"hook_bean_form_submit";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_bean_form_submit";s:10:"definition";s:50:"function hook_bean_form_submit($form, $form_state)";s:11:"description";s:30:"Implements hook_bean_submit().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"bean";s:9:"file_path";s:27:"public://hooks/bean.api.php";s:4:"body";s:2:"

";}s:21:"hook_bean_cache_clear";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_bean_cache_clear";s:10:"definition";s:32:"function hook_bean_cache_clear()";s:11:"description";s:35:"Implements hook_bean_cache_clear().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"bean";s:9:"file_path";s:27:"public://hooks/bean.api.php";s:4:"body";s:2:"

";}}s:5:"block";a:9:{s:15:"hook_block_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_block_info";s:10:"definition";s:26:"function hook_block_info()";s:11:"description";s:41:"Define all blocks provided by the module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:276:"
  // This example comes from node.module.
  $blocks['syndicate'] = array(
    'info' => t('Syndicate'),
    'cache' => DRUPAL_NO_CACHE
  );

  $blocks['recent'] = array(
    'info' => t('Recent content'),
    // DRUPAL_CACHE_PER_ROLE will be assumed.
  );

  return $blocks;
";}s:21:"hook_block_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_block_info_alter";s:10:"definition";s:62:"function hook_block_info_alter(&$blocks, $theme, $code_blocks)";s:11:"description";s:54:"Change block definition before saving to the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:73:"
  // Disable the login block.
  $blocks['user']['login']['status'] = 0;
";}s:20:"hook_block_configure";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_block_configure";s:10:"definition";s:42:"function hook_block_configure($delta = '')";s:11:"description";s:40:"Define a configuration form for a block.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:448:"
  // This example comes from node.module.
  $form = array();
  if ($delta == 'recent') {
    $form['node_recent_block_count'] = array(
      '#type' => 'select',
      '#title' => t('Number of recent content items to display'),
      '#default_value' => variable_get('node_recent_block_count', 10),
      '#options' => drupal_map_assoc(array(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25, 30)),
    );
  }
  return $form;
";}s:15:"hook_block_save";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_block_save";s:10:"definition";s:54:"function hook_block_save($delta = '', $edit = array())";s:11:"description";s:59:"Save the configuration options from hook_block_configure().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:154:"
  // This example comes from node.module.
  if ($delta == 'recent') {
    variable_set('node_recent_block_count', $edit['node_recent_block_count']);
  }
";}s:15:"hook_block_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_block_view";s:10:"definition";s:37:"function hook_block_view($delta = '')";s:11:"description";s:48:"Return a rendered or renderable view of a block.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:757:"
  // This example is adapted from node.module.
  $block = array();

  switch ($delta) {
    case 'syndicate':
      $block['subject'] = t('Syndicate');
      $block['content'] = array(
        '#theme' => 'feed_icon',
        '#url' => 'rss.xml',
        '#title' => t('Syndicate'),
      );
      break;

    case 'recent':
      if (user_access('access content')) {
        $block['subject'] = t('Recent content');
        if ($nodes = node_get_recent(variable_get('node_recent_block_count', 10))) {
          $block['content'] = array(
            '#theme' => 'node_recent_block',
            '#nodes' => $nodes,
          );
        } else {
          $block['content'] = t('No content available.');
        }
      }
      break;
  }
  return $block;
";}s:21:"hook_block_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_block_view_alter";s:10:"definition";s:46:"function hook_block_view_alter(&$data, $block)";s:11:"description";s:46:"Perform alterations to the content of a block.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:469:"
  // Remove the contextual links on all blocks that provide them.
  if (is_array($data['content']) && isset($data['content']['#contextual_links'])) {
    unset($data['content']['#contextual_links']);
  }
  // Add a theme wrapper function defined by the current module to all blocks
  // provided by the "somemodule" module.
  if (is_array($data['content']) && $block->module == 'somemodule') {
    $data['content']['#theme_wrappers'][] = 'mymodule_special_block';
  }
";}s:34:"hook_block_view_MODULE_DELTA_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_block_view_MODULE_DELTA_alter";s:10:"definition";s:59:"function hook_block_view_MODULE_DELTA_alter(&$data, $block)";s:11:"description";s:40:"Perform alterations to a specific block.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:377:"
  // This code will only run for a specific block. For example, if MODULE_DELTA
  // in the function definition above is set to "mymodule_somedelta", the code
  // will only run on the "somedelta" block provided by the "mymodule" module.

  // Change the title of the "somedelta" block provided by the "mymodule"
  // module.
  $data['subject'] = t('New title of the block');
";}s:21:"hook_block_list_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_block_list_alter";s:10:"definition";s:40:"function hook_block_list_alter(&$blocks)";s:11:"description";s:33:"Act on blocks prior to rendering.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:1102:"
  global $language, $theme_key;

  // This example shows how to achieve language specific visibility setting for
  // blocks.

  $result = db_query('SELECT module, delta, language FROM {my_table}');
  $block_languages = array();
  foreach ($result as $record) {
    $block_languages[$record->module][$record->delta][$record->language] = TRUE;
  }

  foreach ($blocks as $key => $block) {
    // Any module using this alter should inspect the data before changing it,
    // to ensure it is what they expect.
    if (!isset($block->theme) || !isset($block->status) || $block->theme != $theme_key || $block->status != 1) {
      // This block was added by a contrib module, leave it in the list.
      continue;
    }

    if (!isset($block_languages[$block->module][$block->delta])) {
      // No language setting for this block, leave it in the list.
      continue;
    }

    if (!isset($block_languages[$block->module][$block->delta][$language->language])) {
      // This block should not be displayed with the active language, remove
      // from the list.
      unset($blocks[$key]);
    }
  }
";}s:26:"hook_block_cid_parts_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_block_cid_parts_alter";s:10:"definition";s:56:"function hook_block_cid_parts_alter(&$cid_parts, $block)";s:11:"description";s:62:"Act on block cache ID (cid) parts before the cid is generated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:15:"hook_block_info";}s:5:"group";s:5:"block";s:9:"file_path";s:28:"public://hooks/block.api.php";s:4:"body";s:126:"
  global $user;
  // This example shows how to cache a block based on the user's timezone.
  $cid_parts[] = $user->timezone;
";}}s:11:"bundle_copy";a:1:{s:21:"hook_bundle_copy_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_bundle_copy_info";s:10:"definition";s:32:"function hook_bundle_copy_info()";s:11:"description";s:35:"Implements hook_bundle_copy_info().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"bundle_copy";s:9:"file_path";s:34:"public://hooks/bundle_copy.api.php";s:4:"body";s:701:"
  return array(
    'node' => array(
      'bundle_export_callback' => 'node_type_get_type',
      'bundle_save_callback' => 'node_type_save',
      'bundle_clone_name_validate' => 'node_type_load',
      'bundle_name_validate' => 'node_type_load',
      'export_menu' => array(
        'path' => 'admin/structure/types/export',
        'access arguments' => 'administer content types',
      ),
      'import_menu' => array(
        'path' => 'admin/structure/types/import',
        'access arguments' => 'administer content types',
      ),
      'clone_menu' => array(
        'path' => 'admin/structure/types/clone',
        'access arguments' => 'administer content types',
      ),
    ),
  );
";}}s:7:"comment";a:9:{s:20:"hook_comment_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_comment_presave";s:10:"definition";s:39:"function hook_comment_presave($comment)";s:11:"description";s:55:"The comment passed validation and is about to be saved.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:112:"
  // Remove leading & trailing spaces from the comment subject.
  $comment->subject = trim($comment->subject);
";}s:19:"hook_comment_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_comment_insert";s:10:"definition";s:38:"function hook_comment_insert($comment)";s:11:"description";s:30:"The comment is being inserted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:84:"
  // Reindex the node when comments are added.
  search_touch_node($comment->nid);
";}s:19:"hook_comment_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_comment_update";s:10:"definition";s:38:"function hook_comment_update($comment)";s:11:"description";s:29:"The comment is being updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:86:"
  // Reindex the node when comments are updated.
  search_touch_node($comment->nid);
";}s:17:"hook_comment_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_comment_load";s:10:"definition";s:37:"function hook_comment_load($comments)";s:11:"description";s:44:"Comments are being loaded from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:205:"
  $result = db_query('SELECT cid, foo FROM {mytable} WHERE cid IN (:cids)', array(':cids' => array_keys($comments)));
  foreach ($result as $record) {
    $comments[$record->cid]->foo = $record->foo;
  }
";}s:17:"hook_comment_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_comment_view";s:10:"definition";s:59:"function hook_comment_view($comment, $view_mode, $langcode)";s:11:"description";s:104:"The comment is being viewed. This hook can be used to add additional data to the comment before theming.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:80:"
  // how old is the comment
  $comment->time_ago = time() - $comment->changed;
";}s:23:"hook_comment_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_comment_view_alter";s:10:"definition";s:41:"function hook_comment_view_alter(&$build)";s:11:"description";s:68:"The comment was built; the module may modify the structured content.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:368:"
  // Check for the existence of a field added by another module.
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;
  }

  // Add a #post_render callback to act on the rendered HTML of the comment.
  $build['#post_render'][] = 'my_module_comment_post_render';
";}s:20:"hook_comment_publish";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_comment_publish";s:10:"definition";s:39:"function hook_comment_publish($comment)";s:11:"description";s:48:"The comment is being published by the moderator.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:106:"
  drupal_set_message(t('Comment: @subject has been published', array('@subject' => $comment->subject)));
";}s:22:"hook_comment_unpublish";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_comment_unpublish";s:10:"definition";s:41:"function hook_comment_unpublish($comment)";s:11:"description";s:50:"The comment is being unpublished by the moderator.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:108:"
  drupal_set_message(t('Comment: @subject has been unpublished', array('@subject' => $comment->subject)));
";}s:19:"hook_comment_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_comment_delete";s:10:"definition";s:38:"function hook_comment_delete($comment)";s:11:"description";s:46:"The comment is being deleted by the moderator.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"comment";s:9:"file_path";s:30:"public://hooks/comment.api.php";s:4:"body";s:104:"
  drupal_set_message(t('Comment: @subject has been deleted', array('@subject' => $comment->subject)));
";}}s:10:"contextual";a:1:{s:32:"hook_contextual_links_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_contextual_links_view_alter";s:10:"definition";s:60:"function hook_contextual_links_view_alter(&$element, $items)";s:11:"description";s:55:"Alter a contextual links element before it is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"contextual";s:9:"file_path";s:33:"public://hooks/contextual.api.php";s:4:"body";s:143:"
  // Add another class to all contextual link lists to facilitate custom
  // styling.
  $element['#attributes']['class'][] = 'custom-class';
";}}s:6:"ctools";a:14:{s:23:"hook_ctools_plugin_type";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_ctools_plugin_type";s:10:"definition";s:34:"function hook_ctools_plugin_type()";s:11:"description";s:33:"Inform CTools about plugin types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:84:"
  $plugins['my_type'] = array(
    'load themes' => TRUE,
  );

  return $plugins;
";}s:28:"hook_ctools_plugin_directory";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_ctools_plugin_directory";s:10:"definition";s:59:"function hook_ctools_plugin_directory($owner, $plugin_type)";s:11:"description";s:76:"This hook is used to inform the CTools plugin system about the location of a";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:1256:"
  // Form 1 - for a module implementing only the 'content_types' plugin owned
  // by CTools, this would cause the plugin system to search the
  // <moduleroot>/plugins/content_types directory for .inc plugin files.
  if ($owner == 'ctools' && $plugin_type == 'content_types') {
    return 'plugins/content_types';
  }

  // Form 2 - if your module implements only Panels plugins, and has 'layouts'
  // and 'styles' plugins but no 'cache' or 'display_renderers', it is OK to be
  // lazy and return a directory for a plugin you don't actually implement (so
  // long as that directory doesn't exist). This lets you avoid ugly in_array()
  // logic in your conditional, and also makes it easy to add plugins of those
  // types later without having to change this hook implementation.
  if ($owner == 'panels') {
    return "plugins/$plugin_type";
  }

  // Form 3 - CTools makes no assumptions about where your plugins are located,
  // so you still have to implement this hook even for plugins created by your
  // own module.
  if ($owner == 'mymodule') {
    // Yes, this is exactly like Form 2 - just a different reasoning for it.
    return "plugins/$plugin_type";
  }
  // Finally, if nothing matches, it's safe to return nothing at all (or NULL).
";}s:28:"hook_ctools_plugin_pre_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_ctools_plugin_pre_alter";s:10:"definition";s:55:"function hook_ctools_plugin_pre_alter(&$plugin, &$info)";s:11:"description";s:44:"Alter a plugin before it has been processed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:127:"
  // Override a function defined by the plugin.
  if ($info['type'] == 'my_type') {
    $plugin['my_flag'] = 'new_value';
  }
";}s:29:"hook_ctools_plugin_post_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_ctools_plugin_post_alter";s:10:"definition";s:56:"function hook_ctools_plugin_post_alter(&$plugin, &$info)";s:11:"description";s:43:"Alter a plugin after it has been processed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:134:"
  // Override a function defined by the plugin.
  if ($info['type'] == 'my_type') {
    $plugin['my_function'] = 'new_function';
  }
";}s:26:"hook_ctools_api_hook_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_ctools_api_hook_alter";s:10:"definition";s:43:"function hook_ctools_api_hook_alter(&$list)";s:11:"description";s:63:"Alter the list of modules/themes which implement a certain api.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:110:"
  // Alter the path of the node implementation.
  $list['node']['path'] = drupal_get_path('module', 'node');
";}s:43:"hook_ctools_math_expression_functions_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_ctools_math_expression_functions_alter";s:10:"definition";s:65:"function hook_ctools_math_expression_functions_alter(&$functions)";s:11:"description";s:71:"Alter the available functions to be used in ctools math expression api.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:76:"
  // Allow to convert from degrees to radiant.
  $functions[] = 'deg2rad';
";}s:24:"hook_ctools_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_ctools_render_alter";s:10:"definition";s:60:"function hook_ctools_render_alter(&$info, &$page, &$context)";s:11:"description";s:17:"Alter everything.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:108:"
  if ($context['handler']->name == 'my_handler') {
    ctools_add_css('my_module.theme', 'my_module');
  }
";}s:33:"hook_ctools_content_subtype_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_ctools_content_subtype_alter";s:10:"definition";s:61:"function hook_ctools_content_subtype_alter($subtype, $plugin)";s:11:"description";s:31:"Alter a content plugin subtype.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:35:"
  $subtype['render last'] = TRUE;
";}s:32:"hook_ctools_entity_context_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_ctools_entity_context_alter";s:10:"definition";s:73:"function hook_ctools_entity_context_alter(&$plugin, &$entity, $plugin_id)";s:11:"description";s:49:"Alter the definition of an entity context plugin.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:285:"
  ctools_include('context');
  switch ($plugin_id) {
    case 'entity_id:taxonomy_term':
      $plugin['no ui'] = TRUE;
    case 'entity:user':
      $plugin = ctools_get_context('user');
      unset($plugin['no ui']);
      unset($plugin['no required context ui']);
      break;
  }
";}s:33:"hook_ctools_entity_contexts_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_ctools_entity_contexts_alter";s:10:"definition";s:53:"function hook_ctools_entity_contexts_alter(&$plugins)";s:11:"description";s:47:"Alter the definition of entity context plugins.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:56:"
  $plugins['entity_id:taxonomy_term']['no ui'] = TRUE;
";}s:29:"hook_ctools_cleanstring_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_ctools_cleanstring_alter";s:10:"definition";s:50:"function hook_ctools_cleanstring_alter(&$settings)";s:11:"description";s:28:"Change cleanstring settings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:75:"
  // Convert all strings to lower case.
  $settings['lower case'] = TRUE;
";}s:38:"hook_ctools_cleanstring_CLEAN_ID_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_ctools_cleanstring_CLEAN_ID_alter";s:10:"definition";s:59:"function hook_ctools_cleanstring_CLEAN_ID_alter(&$settings)";s:11:"description";s:52:"Change cleanstring settings for a specific clean ID.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:29:"public://hooks/ctools.api.php";s:4:"body";s:75:"
  // Convert all strings to lower case.
  $settings['lower case'] = TRUE;
";}s:34:"hook_page_manager_operations_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_page_manager_operations_alter";s:10:"definition";s:61:"function hook_page_manager_operations_alter(&$result, &$page)";s:11:"description";s:6:"@todo.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:35:"public://hooks/page_manager.api.php";s:4:"body";s:13:"
  // @todo.
";}s:42:"hook_page_manager_variant_operations_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:42:"hook_page_manager_variant_operations_alter";s:10:"definition";s:76:"function hook_page_manager_variant_operations_alter(&$operations, &$handler)";s:11:"description";s:6:"@todo.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"ctools";s:9:"file_path";s:35:"public://hooks/page_manager.api.php";s:4:"body";s:13:"
  // @todo.
";}}s:9:"dashboard";a:2:{s:22:"hook_dashboard_regions";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_dashboard_regions";s:10:"definition";s:33:"function hook_dashboard_regions()";s:11:"description";s:29:"Add regions to the dashboard.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"dashboard";s:9:"file_path";s:32:"public://hooks/dashboard.api.php";s:4:"body";s:257:"
  // Define a new dashboard region. Your module can also then define
  // theme_mymodule_dashboard_region() as a theme wrapper function to control
  // the region's appearance.
  return array('mymodule_dashboard_region' => "My module's dashboard region");
";}s:28:"hook_dashboard_regions_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_dashboard_regions_alter";s:10:"definition";s:48:"function hook_dashboard_regions_alter(&$regions)";s:11:"description";s:44:"Alter dashboard regions provided by modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"dashboard";s:9:"file_path";s:32:"public://hooks/dashboard.api.php";s:4:"body";s:110:"
  // Remove the sidebar region defined by the core dashboard module.
  unset($regions['dashboard_sidebar']);
";}}s:4:"date";a:20:{s:32:"hook_date_default_argument_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_date_default_argument_alter";s:10:"definition";s:62:"function hook_date_default_argument_alter(&$argument, &$value)";s:11:"description";s:44:"Alter the default value for a date argument.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:241:"
  $style_options = $style_options = $argument->view->display_handler->get_option('style_options');
  if (!empty($style_options['track_date'])) {
    $default_date = date_now();
    $value = $default_date->format($argument->arg_format);
  }
";}s:34:"hook_date_formatter_pre_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_date_formatter_pre_view_alter";s:10:"definition";s:66:"function hook_date_formatter_pre_view_alter(&$entity, &$variables)";s:11:"description";s:38:"Alter the entity before formatting it.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:413:"
  if (!empty($entity->view)) {
    $field = $variables['field'];
    $date_id = 'date_id_' . $field['field_name'];
    $date_delta = 'date_delta_' . $field['field_name'];
    $date_item = $entity->view->result[$entity->view->row_index];
    if (!empty($date_item->$date_id)) {
      $entity->date_id = 'date.' . $date_item->$date_id . '.' . $field['field_name'] . '.' . $date_item->$date_delta . '.0';
    }
  }
";}s:31:"hook_date_formatter_dates_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_date_formatter_dates_alter";s:10:"definition";s:59:"function hook_date_formatter_dates_alter(&$dates, $context)";s:11:"description";s:58:"Alter the dates array created by date_formatter_process().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:1206:"
  $field = $context['field'];
  $instance = $context['instance'];
  $format = $context['format'];
  $entity_type = $context['entity_type'];
  $entity = $context['entity'];
  $date1 = $dates['value']['local']['object'];
  $date2 = $dates['value2']['local']['object'];

  $is_all_day = date_all_day_field($field, $instance, $date1, $date2);

  $all_day1 = '';
  $all_day2 = '';
  if ($format != 'format_interval' && $is_all_day) {
    $all_day1 = theme('date_all_day', array(
      'field' => $field,
      'instance' => $instance,
      'which' => 'date1',
      'date1' => $date1,
      'date2' => $date2,
      'format' => $format,
      'entity_type' => $entity_type,
      'entity' => $entity));
    $all_day2 = theme('date_all_day', array(
      'field' => $field,
      'instance' => $instance,
      'which' => 'date2',
      'date1' => $date1,
      'date2' => $date2,
      'format' => $format,
      'entity_type' => $entity_type,
      'entity' => $entity));
    $dates['value']['formatted_time'] = theme('date_all_day_label');
    $dates['value2']['formatted_time'] = theme('date_all_day_label');
    $dates['value']['formatted'] = $all_day1;
    $dates['value2']['formatted'] = $all_day2;
  }
";}s:33:"hook_date_text_pre_validate_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_date_text_pre_validate_alter";s:10:"definition";s:76:"function hook_date_text_pre_validate_alter(&$element, &$form_state, &$input)";s:11:"description";s:69:"Alter the date_text element before the rest of the validation is run.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:211:"
  // Let Date module massage the format for all day values so they will pass
  // validation. The All day flag, if used, actually exists on the parent
  // element.
  date_all_day_value($element, $form_state);
";}s:35:"hook_date_select_pre_validate_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_date_select_pre_validate_alter";s:10:"definition";s:78:"function hook_date_select_pre_validate_alter(&$element, &$form_state, &$input)";s:11:"description";s:71:"Alter the date_select element before the rest of the validation is run.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:211:"
  // Let Date module massage the format for all day values so they will pass
  // validation. The All day flag, if used, actually exists on the parent
  // element.
  date_all_day_value($element, $form_state);
";}s:34:"hook_date_popup_pre_validate_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_date_popup_pre_validate_alter";s:10:"definition";s:77:"function hook_date_popup_pre_validate_alter(&$element, &$form_state, &$input)";s:11:"description";s:70:"Alter the date_popup element before the rest of the validation is run.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:211:"
  // Let Date module massage the format for all day values so they will pass
  // validation. The All day flag, if used, actually exists on the parent
  // element.
  date_all_day_value($element, $form_state);
";}s:34:"hook_date_combo_pre_validate_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_date_combo_pre_validate_alter";s:10:"definition";s:78:"function hook_date_combo_pre_validate_alter(&$element, &$form_state, $context)";s:11:"description";s:70:"Alter the date_combo element before the rest of the validation is run.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:540:"
  if (!empty($context['item']['all_day'])) {

    $field = $context['field'];

    // If we have an all day flag on this date and the time is empty, change the
    // format to match the input value so we don't get validation errors.
    $element['#date_is_all_day'] = TRUE;
    $element['value']['#date_format'] = date_part_format('date', $element['value']['#date_format']);
    if (!empty($field['settings']['todate'])) {
      $element['value2']['#date_format'] = date_part_format('date', $element['value2']['#date_format']);
    }
  }
";}s:41:"hook_date_combo_validate_date_start_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:41:"hook_date_combo_validate_date_start_alter";s:10:"definition";s:82:"function hook_date_combo_validate_date_start_alter(&$date, &$form_state, $context)";s:11:"description";s:72:"Alter the local start date objects created by the date_combo validation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:153:"
  // If this is an 'All day' value, set the time to midnight.
  if (!empty($context['element']['#date_is_all_day'])) {
    $date->setTime(0, 0, 0);
  }
";}s:39:"hook_date_combo_validate_date_end_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_date_combo_validate_date_end_alter";s:10:"definition";s:80:"function hook_date_combo_validate_date_end_alter(&$date, &$form_state, $context)";s:11:"description";s:70:"Alter the local end date objects created by the date_combo validation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:153:"
  // If this is an 'All day' value, set the time to midnight.
  if (!empty($context['element']['#date_is_all_day'])) {
    $date->setTime(0, 0, 0);
  }
";}s:28:"hook_date_text_process_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_date_text_process_alter";s:10:"definition";s:72:"function hook_date_text_process_alter(&$element, &$form_state, $context)";s:11:"description";s:35:"Alter the date_text widget element.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:267:"
  $all_day_id = !empty($element['#date_all_day_id']) ? $element['#date_all_day_id'] : '';
  if ($all_day_id != '') {
    // All Day handling on text dates works only if the user leaves the time out
    // of the input value. There is no element to hide or show.
  }
";}s:30:"hook_date_select_process_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_date_select_process_alter";s:10:"definition";s:74:"function hook_date_select_process_alter(&$element, &$form_state, $context)";s:11:"description";s:37:"Alter the date_select widget element.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:510:"
  // Hide or show the element in reaction to the all_day status for the element.
  $all_day_id = !empty($element['#date_all_day_id']) ? $element['#date_all_day_id'] : '';
  if ($all_day_id != '') {
    foreach (array('hour', 'minute', 'second', 'ampm') as $field) {
      if (array_key_exists($field, $element)) {
        $element[$field]['#states'] = array(
          'visible' => array(
            'input[name="' . $all_day_id . '"]' => array('checked' => FALSE),
          ),
        );
      }
    }
  }
";}s:29:"hook_date_popup_process_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_date_popup_process_alter";s:10:"definition";s:73:"function hook_date_popup_process_alter(&$element, &$form_state, $context)";s:11:"description";s:36:"Alter the date_popup widget element.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:398:"
  // Hide or show the element in reaction to the all_day status for the element.
  $all_day_id = !empty($element['#date_all_day_id']) ? $element['#date_all_day_id'] : '';
  if ($all_day_id != '' && array_key_exists('time', $element)) {
    $element['time']['#states'] = array(
      'visible' => array(
        'input[name="' . $all_day_id . '"]' => array('checked' => FALSE),
      ),
    );
  }
";}s:29:"hook_date_combo_process_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_date_combo_process_alter";s:10:"definition";s:73:"function hook_date_combo_process_alter(&$element, &$form_state, $context)";s:11:"description";s:71:"Alter the date_combo element after the Date module is finished with it.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:1317:"
  $field = $context['field'];
  $instance = $context['instance'];
  $field_name = $element['#field_name'];
  $delta = $element['#delta'];

  // Add a date repeat form element, if needed.
  // We delayed until this point so we don't bother adding it to hidden fields.
  if (date_is_repeat_field($field, $instance)) {
    $item = $element['#value'];
    $element['rrule'] = array(
      '#type' => 'date_repeat_rrule',
      '#theme_wrappers' => array('date_repeat_rrule'),
      '#default_value' => isset($item['rrule']) ? $item['rrule'] : '',
      '#date_timezone' => $element['#date_timezone'],
      '#date_format'      => date_limit_format(date_input_format($element, $field, $instance), $field['settings']['granularity']),
      '#date_text_parts'  => (array) $instance['widget']['settings']['text_parts'],
      '#date_increment'   => $instance['widget']['settings']['increment'],
      '#date_year_range'  => $instance['widget']['settings']['year_range'],
      '#date_label_position' => $instance['widget']['settings']['label_position'],
      '#date_repeat_widget' => str_replace('_repeat', '', $instance['widget']['type']),
      '#date_repeat_collapsed' => $instance['widget']['settings']['repeat_collapsed'],
      '#date_flexible' => 0,
      '#weight' => $instance['widget']['weight'] + .4,
    );
  }
";}s:32:"hook_date_timezone_process_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_date_timezone_process_alter";s:10:"definition";s:76:"function hook_date_timezone_process_alter(&$element, &$form_state, $context)";s:11:"description";s:39:"Alter the date_timezone widget element.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:13:"
  // @todo.
";}s:34:"hook_date_year_range_process_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_date_year_range_process_alter";s:10:"definition";s:78:"function hook_date_year_range_process_alter(&$element, &$form_state, $context)";s:11:"description";s:41:"Alter the date_year_range widget element.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:13:"
  // @todo.
";}s:35:"hook_date_field_settings_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_date_field_settings_form_alter";s:10:"definition";s:62:"function hook_date_field_settings_form_alter(&$form, $context)";s:11:"description";s:33:"Alter a date field settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:590:"
  $field = $context['field'];
  $instance = $context['instance'];
  $has_data = $context['has_data'];

  $form['repeat'] = array(
    '#type' => 'select',
    '#title' => t('Repeating date'),
    '#default_value' => $field['settings']['repeat'],
    '#options' => array(0 => t('No'), 1 => t('Yes')),
    '#attributes' => array('class' => array('container-inline')),
    '#description' => t("Repeating dates use an 'Unlimited' number of values. Instead of the 'Add more' button, they include a form to select when and how often the date should repeat."),
    '#disabled' => $has_data,
  );
";}s:44:"hook_date_field_instance_settings_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:44:"hook_date_field_instance_settings_form_alter";s:10:"definition";s:71:"function hook_date_field_instance_settings_form_alter(&$form, $context)";s:11:"description";s:42:"Alter a date field instance settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:197:"
  $field = $context['field'];
  $instance = $context['instance'];
  $form['new_setting'] = array(
    '#type' => 'textfield',
    '#default_value' => '',
    '#title' => t('My new setting'),
  );
";}s:42:"hook_date_field_widget_settings_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:42:"hook_date_field_widget_settings_form_alter";s:10:"definition";s:69:"function hook_date_field_widget_settings_form_alter(&$form, $context)";s:11:"description";s:40:"Alter a date field widget settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:197:"
  $field = $context['field'];
  $instance = $context['instance'];
  $form['new_setting'] = array(
    '#type' => 'textfield',
    '#default_value' => '',
    '#title' => t('My new setting'),
  );
";}s:45:"hook_date_field_formatter_settings_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:45:"hook_date_field_formatter_settings_form_alter";s:10:"definition";s:86:"function hook_date_field_formatter_settings_form_alter(&$form, &$form_state, $context)";s:11:"description";s:43:"Alter a date field formatter settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:575:"
  $field = $context['field'];
  $instance = $context['instance'];
  $view_mode = $context['view_mode'];
  $display = $instance['display'][$view_mode];
  $formatter = $display['type'];
  if ($formatter == 'date_default') {
    $form['show_repeat_rule'] = array(
      '#title' => t('Repeat rule:'),
      '#type' => 'select',
      '#options' => array(
        'show' => t('Show repeat rule'),
        'hide' => t('Hide repeat rule')),
      '#default_value' => $settings['show_repeat_rule'],
      '#access' => $field['settings']['repeat'],
      '#weight' => 5,
    );
  }
";}s:48:"hook_date_field_formatter_settings_summary_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:48:"hook_date_field_formatter_settings_summary_alter";s:10:"definition";s:78:"function hook_date_field_formatter_settings_summary_alter(&$summary, $context)";s:11:"description";s:46:"Alter a date field formatter settings summary.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"date";s:9:"file_path";s:27:"public://hooks/date.api.php";s:4:"body";s:469:"
  $field = $context['field'];
  $instance = $context['instance'];
  $view_mode = $context['view_mode'];
  $display = $instance['display'][$view_mode];
  $formatter = $display['type'];
  $settings = $display['settings'];
  if (isset($settings['show_repeat_rule']) && !empty($field['settings']['repeat'])) {
    if ($settings['show_repeat_rule'] == 'show') {
      $summary[] = t('Show repeat rule');
    }
    else {
      $summary[] = t('Hide repeat rule');
    }
  }
";}}s:6:"entity";a:3:{s:25:"hook_entity_property_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_entity_property_info";s:10:"definition";s:36:"function hook_entity_property_info()";s:11:"description";s:57:"Allow modules to define metadata about entity properties.";s:11:"destination";s:16:"%module.info.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"entity";s:9:"file_path";s:29:"public://hooks/entity.api.php";s:4:"body";s:225:"
  $info = array();
  $properties = &$info['node']['properties'];

  $properties['nid'] = array(
    'label' => t("Content ID"),
    'type' => 'integer',
    'description' => t("The unique content ID."),
  );
  return $info;
";}s:31:"hook_entity_property_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_entity_property_info_alter";s:10:"definition";s:48:"function hook_entity_property_info_alter(&$info)";s:11:"description";s:56:"Allow modules to alter metadata about entity properties.";s:11:"destination";s:16:"%module.info.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"entity";s:9:"file_path";s:29:"public://hooks/entity.api.php";s:4:"body";s:318:"
  $properties = &$info['node']['bundles']['poll']['properties'];

  $properties['poll-votes'] = array(
    'label' => t("Poll votes"),
    'description' => t("The number of votes that have been cast on a poll node."),
    'type' => 'integer',
    'getter callback' => 'entity_property_poll_node_get_properties',
  );
";}s:38:"hook_entity_views_field_handlers_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_entity_views_field_handlers_alter";s:10:"definition";s:71:"function hook_entity_views_field_handlers_alter(array &$field_handlers)";s:11:"description";s:77:"Alter the handlers used by the data selection tables provided by this module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"entity";s:9:"file_path";s:29:"public://hooks/entity.api.php";s:4:"body";s:113:"
  $field_handlers['duration'] = 'example_duration_handler';
  $field_handlers['node'] = 'example_node_handler';
";}}s:16:"entity_view_mode";a:2:{s:26:"hook_entity_view_mode_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_entity_view_mode_info";s:10:"definition";s:37:"function hook_entity_view_mode_info()";s:11:"description";s:41:"Describe the view modes for entity types.";s:11:"destination";s:18:"%module.entity.inc";s:12:"dependencies";a:0:{}s:5:"group";s:16:"entity_view_mode";s:9:"file_path";s:39:"public://hooks/entity_view_mode.api.php";s:4:"body";s:208:"
  $view_modes['user']['full'] = array(
    'label' => t('User account'),
  );
  $view_modes['user']['compact'] = array(
    'label' => t('Compact'),
    'custom_settings' => TRUE,
  );
  return $view_modes;
";}s:32:"hook_entity_view_mode_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_entity_view_mode_info_alter";s:10:"definition";s:55:"function hook_entity_view_mode_info_alter(&$view_modes)";s:11:"description";s:38:"Alter the view modes for entity types.";s:11:"destination";s:18:"%module.entity.inc";s:12:"dependencies";a:0:{}s:5:"group";s:16:"entity_view_mode";s:9:"file_path";s:39:"public://hooks/entity_view_mode.api.php";s:4:"body";s:58:"
  $view_modes['user']['full']['custom_settings'] = TRUE;
";}}s:8:"features";a:32:{s:17:"hook_features_api";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_features_api";s:10:"definition";s:28:"function hook_features_api()";s:11:"description";s:75:"Main info hook that features uses to determine what components are provided";s:11:"destination";s:20:"%module.features.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:277:"
  return array(
    'mycomponent' => array(
      'default_hook' => 'mycomponent_defaults',
      'default_file' => FEATURES_DEFAULTS_INCLUDED,
      'feature_source' => TRUE,
      'file' => drupal_get_path('module', 'mycomponent') . '/mycomponent.features.inc',
    ),
  );
";}s:20:"hook_features_export";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_features_export";s:10:"definition";s:60:"function hook_features_export($data, &$export, $module_name)";s:11:"description";s:68:"Component hook. The hook should be implemented using the name of the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:247:"
  // The following is the simplest implementation of a straight object export
  // with no further export processors called.
  foreach ($data as $component) {
    $export['features']['mycomponent'][$component] = $component;
  }
  return array();
";}s:28:"hook_features_export_options";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_features_export_options";s:10:"definition";s:39:"function hook_features_export_options()";s:11:"description";s:68:"Component hook. The hook should be implemented using the name of the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:151:"
  $options = array();
  foreach (mycomponent_load() as $mycomponent) {
    $options[$mycomponent->name] = $mycomponent->title;
  }
  return $options;
";}s:27:"hook_features_export_render";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_features_export_render";s:10:"definition";s:73:"function hook_features_export_render($module_name, $data, $export = NULL)";s:11:"description";s:68:"Component hook. The hook should be implemented using the name of the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:312:"
  $code = array();
  $code[] = '$mycomponents = array();';
  foreach ($data as $name) {
    $code[] = "  \$mycomponents['{$name}'] = " . features_var_export(mycomponent_load($name)) .";";
  }
  $code[] = "return \$mycomponents;";
  $code = implode("\n", $code);
  return array('mycomponent_defaults' => $code);
";}s:20:"hook_features_revert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_features_revert";s:10:"definition";s:43:"function hook_features_revert($module_name)";s:11:"description";s:68:"Component hook. The hook should be implemented using the name of the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:199:"
  $mycomponents = module_invoke($module_name, 'mycomponent_defaults');
  if (!empty($mycomponents)) {
    foreach ($mycomponents as $mycomponent) {
      mycomponent_delete($mycomponent);
    }
  }
";}s:21:"hook_features_rebuild";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_features_rebuild";s:10:"definition";s:44:"function hook_features_rebuild($module_name)";s:11:"description";s:68:"Component hook. The hook should be implemented using the name of the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:197:"
  $mycomponents = module_invoke($module_name, 'mycomponent_defaults');
  if (!empty($mycomponents)) {
    foreach ($mycomponents as $mycomponent) {
      mycomponent_save($mycomponent);
    }
  }
";}s:25:"hook_features_pre_restore";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_features_pre_restore";s:10:"definition";s:47:"function hook_features_pre_restore($op, $items)";s:11:"description";s:42:"Invoked before a restore operation is run.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:139:"
  if ($op == 'rebuild') {
    // Use features rebuild to rebuild the features independent exports too.
    entity_defaults_rebuild();
  }
";}s:26:"hook_features_post_restore";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_features_post_restore";s:10:"definition";s:48:"function hook_features_post_restore($op, $items)";s:11:"description";s:41:"Invoked after a restore operation is run.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:139:"
  if ($op == 'rebuild') {
    // Use features rebuild to rebuild the features independent exports too.
    entity_defaults_rebuild();
  }
";}s:26:"hook_features_export_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_features_export_alter";s:10:"definition";s:59:"function hook_features_export_alter(&$export, $module_name)";s:11:"description";s:70:"Alter the final array of Component names to be exported, just prior to";s:11:"destination";s:20:"%module.features.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:177:"
  // Example: do not allow the page content type to be exported, ever.
  if (!empty($export['features']['node']['page'])) {
    unset($export['features']['node']['page']);
  }
";}s:34:"hook_features_pipe_COMPONENT_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_features_pipe_COMPONENT_alter";s:10:"definition";s:67:"function hook_features_pipe_COMPONENT_alter(&$pipe, $data, $export)";s:11:"description";s:75:"Alter the pipe array for a given component. This hook should be implemented";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:88:"
  if (in_array($data, 'my-node-type')) {
    $pipe['dependencies'][] = 'mymodule';
  }
";}s:24:"hook_features_pipe_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_features_pipe_alter";s:10:"definition";s:57:"function hook_features_pipe_alter(&$pipe, $data, $export)";s:11:"description";s:43:"Alter the pipe array for a given component.";s:11:"destination";s:20:"%module.features.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:122:"
  if ($export['component'] == 'node' && in_array('my-node-type', $data)) {
    $pipe['dependencies'][] = 'mymodule';
  }
";}s:26:"hook_features_export_files";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_features_export_files";s:10:"definition";s:58:"function hook_features_export_files($module_name, $export)";s:11:"description";s:37:"Add extra files to the exported file.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:93:"
  return array('css/main.css' => array('file_content' => 'body {background-color:blue;}'));
";}s:32:"hook_features_export_files_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_features_export_files_alter";s:10:"definition";s:73:"function hook_features_export_files_alter(&$files, $module_name, $export)";s:11:"description";s:42:"Alter the extra files added to the export.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:78:"
  $files['css/main.css']['file_content'] = 'body {background-color:black;}';
";}s:31:"hook_field_default_fields_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_default_fields_alter";s:10:"definition";s:50:"function hook_field_default_fields_alter(&$fields)";s:11:"description";s:25:"Deprecated as of 7.x-2.0.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:36:"hook_field_default_field_bases_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_field_default_field_bases_alter";s:10:"definition";s:55:"function hook_field_default_field_bases_alter(&$fields)";s:11:"description";s:69:"Alter the base fields right before they are cached into the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:40:"hook_field_default_field_instances_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_field_default_field_instances_alter";s:10:"definition";s:59:"function hook_field_default_field_instances_alter(&$fields)";s:11:"description";s:73:"Alter the field instances right before they are cached into the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:36:"hook_fieldgroup_default_groups_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_fieldgroup_default_groups_alter";s:10:"definition";s:55:"function hook_fieldgroup_default_groups_alter(&$groups)";s:11:"description";s:73:"Alter the default fieldgroup groups right before they are cached into the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:33:"hook_filter_default_formats_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_filter_default_formats_alter";s:10:"definition";s:53:"function hook_filter_default_formats_alter(&$formats)";s:11:"description";s:70:"Alter the default filter formats right before they are cached into the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:35:"hook_menu_default_menu_custom_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_menu_default_menu_custom_alter";s:10:"definition";s:53:"function hook_menu_default_menu_custom_alter(&$menus)";s:11:"description";s:71:"Alter the default menus right before they are cached into the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:34:"hook_menu_default_menu_links_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_menu_default_menu_links_alter";s:10:"definition";s:52:"function hook_menu_default_menu_links_alter(&$links)";s:11:"description";s:76:"Alter the default menu links right before they are cached into the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:29:"hook_menu_default_items_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_menu_default_items_alter";s:10:"definition";s:47:"function hook_menu_default_items_alter(&$items)";s:11:"description";s:76:"Alter the default menu items right before they are cached into the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:40:"hook_taxonomy_default_vocabularies_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_taxonomy_default_vocabularies_alter";s:10:"definition";s:65:"function hook_taxonomy_default_vocabularies_alter(&$vocabularies)";s:11:"description";s:68:"Alter the default vocabularies right before they are cached into the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:35:"hook_user_default_permissions_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_user_default_permissions_alter";s:10:"definition";s:59:"function hook_user_default_permissions_alter(&$permissions)";s:11:"description";s:67:"Alter the default permissions right before they are cached into the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:29:"hook_user_default_roles_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_user_default_roles_alter";s:10:"definition";s:47:"function hook_user_default_roles_alter(&$roles)";s:11:"description";s:71:"Alter the default roles right before they are cached into the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:24:"hook_pre_features_revert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_pre_features_revert";s:10:"definition";s:45:"function hook_pre_features_revert($component)";s:11:"description";s:70:"Feature module hook. Invoked on a Feature module before that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:25:"hook_post_features_revert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_post_features_revert";s:10:"definition";s:46:"function hook_post_features_revert($component)";s:11:"description";s:69:"Feature module hook. Invoked on a Feature module after that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:25:"hook_pre_features_rebuild";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_pre_features_rebuild";s:10:"definition";s:46:"function hook_pre_features_rebuild($component)";s:11:"description";s:70:"Feature module hook. Invoked on a Feature module before that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:26:"hook_post_features_rebuild";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_post_features_rebuild";s:10:"definition";s:47:"function hook_post_features_rebuild($component)";s:11:"description";s:69:"Feature module hook. Invoked on a Feature module after that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:33:"hook_pre_features_disable_feature";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_pre_features_disable_feature";s:10:"definition";s:54:"function hook_pre_features_disable_feature($component)";s:11:"description";s:70:"Feature module hook. Invoked on a Feature module before that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:34:"hook_post_features_disable_feature";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_post_features_disable_feature";s:10:"definition";s:55:"function hook_post_features_disable_feature($component)";s:11:"description";s:69:"Feature module hook. Invoked on a Feature module after that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:32:"hook_pre_features_enable_feature";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_pre_features_enable_feature";s:10:"definition";s:53:"function hook_pre_features_enable_feature($component)";s:11:"description";s:70:"Feature module hook. Invoked on a Feature module before that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}s:33:"hook_post_features_enable_feature";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_post_features_enable_feature";s:10:"definition";s:54:"function hook_post_features_enable_feature($component)";s:11:"description";s:69:"Feature module hook. Invoked on a Feature module after that module is";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"features";s:9:"file_path";s:31:"public://hooks/features.api.php";s:4:"body";s:1:"
";}}s:17:"features_override";a:4:{s:30:"hook_features_override_default";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_features_override_default";s:10:"definition";s:41:"function hook_features_override_default()";s:11:"description";s:69:"Autogenerated hook that duplicates what alters are being exported via";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:17:"features_override";s:9:"file_path";s:40:"public://hooks/features_override.api.php";s:4:"body";s:19:"
  return array();
";}s:48:"hook_features_override_component_overrides_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:48:"hook_features_override_component_overrides_alter";s:10:"definition";s:88:"function hook_features_override_component_overrides_alter(&$default, &$normal, $context)";s:11:"description";s:61:"Allows modules to clean up the default and normal components.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:17:"features_override";s:9:"file_path";s:40:"public://hooks/features_override.api.php";s:4:"body";s:85:"
  if ($context['component'] == 'views_view') {
    unset($normal->api_version);
  }
";}s:45:"hook_features_override_export_render_addition";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:45:"hook_features_override_export_render_addition";s:10:"definition";s:56:"function hook_features_override_export_render_addition()";s:11:"description";s:68:"Component hook. The hook should be implemented using the name ot the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:17:"features_override";s:9:"file_path";s:40:"public://hooks/features_override.api.php";s:4:"body";s:1:"
";}s:45:"hook_features_override_export_render_deletion";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:45:"hook_features_override_export_render_deletion";s:10:"definition";s:56:"function hook_features_override_export_render_deletion()";s:11:"description";s:68:"Component hook. The hook should be implemented using the name ot the";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:17:"features_override";s:9:"file_path";s:40:"public://hooks/features_override.api.php";s:4:"body";s:1:"
";}}s:5:"feeds";a:12:{s:22:"hook_ctools_plugin_api";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_ctools_plugin_api";s:10:"definition";s:45:"function hook_ctools_plugin_api($owner, $api)";s:11:"description";s:68:"Example of a CTools plugin hook that needs to be implemented to make";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:87:"
  if ($owner == 'feeds' && $api == 'plugins') {
    return array('version' => 1);
  }
";}s:18:"hook_feeds_plugins";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_feeds_plugins";s:10:"definition";s:29:"function hook_feeds_plugins()";s:11:"description";s:70:"A hook_feeds_plugins() declares available Fetcher, Parser or Processor";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:1342:"
  $info = array();
  $info['MyFetcher'] = array(
    'name' => 'My Fetcher',
    'description' => 'Fetches my stuff.',
    'help' => 'More verbose description here. Will be displayed on fetcher selection menu.',
    'handler' => array(
      'parent' => 'FeedsFetcher',
      'class' => 'MyFetcher',
      'file' => 'MyFetcher.inc',
      'path' => drupal_get_path('module', 'my_module'), // Feeds will look for MyFetcher.inc in the my_module directory.
    ),
  );
  $info['MyParser'] = array(
    'name' => 'ODK parser',
    'description' => 'Parse my stuff.',
    'help' => 'More verbose description here. Will be displayed on parser selection menu.',
    'handler' => array(
      'parent' => 'FeedsParser', // Being directly or indirectly an extension of FeedsParser makes a plugin a parser plugin.
      'class' => 'MyParser',
      'file' => 'MyParser.inc',
      'path' => drupal_get_path('module', 'my_module'),
    ),
  );
  $info['MyProcessor'] = array(
    'name' => 'ODK parser',
    'description' => 'Process my stuff.',
    'help' => 'More verbose description here. Will be displayed on processor selection menu.',
    'handler' => array(
      'parent' => 'FeedsProcessor',
      'class' => 'MyProcessor',
      'file' => 'MyProcessor.inc',
      'path' => drupal_get_path('module', 'my_module'),
    ),
  );
  return $info;
";}s:22:"hook_feeds_after_parse";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_feeds_after_parse";s:10:"definition";s:79:"function hook_feeds_after_parse(FeedsSource $source, FeedsParserResult $result)";s:11:"description";s:73:"Invoked after a feed source has been parsed, before it will be processed.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:111:"
  // For example, set title of imported content:
  $result->title = 'Import number ' . my_module_import_id();
";}s:24:"hook_feeds_before_import";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_feeds_before_import";s:10:"definition";s:54:"function hook_feeds_before_import(FeedsSource $source)";s:11:"description";s:43:"Invoked before a feed source import starts.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:62:"
  // See feeds_rules module's implementation for an example.
";}s:24:"hook_feeds_before_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_feeds_before_update";s:10:"definition";s:73:"function hook_feeds_before_update(FeedsSource $source, $item, $entity_id)";s:11:"description";s:55:"Invoked before a feed item is updated/created/replaced.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:339:"
  if ($entity_id) {
    $processor = $source->importer->processor;
    db_update('foo_bar')
      ->fields(array('entity_type' => $processor->entityType(), 'entity_id' => $entity_id, 'last_seen' => REQUEST_TIME))
      ->condition('entity_type', $processor->entityType())
      ->condition('entity_id', $entity_id)
      ->execute();
  }
";}s:18:"hook_feeds_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_feeds_presave";s:10:"definition";s:76:"function hook_feeds_presave(FeedsSource $source, $entity, $item, $entity_id)";s:11:"description";s:36:"Invoked before a feed item is saved.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:127:"
  if ($entity->feeds_item->entity_type == 'node') {
    // Skip saving this entity.
    $entity->feeds_item->skip = TRUE;
  }
";}s:21:"hook_feeds_after_save";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_feeds_after_save";s:10:"definition";s:79:"function hook_feeds_after_save(FeedsSource $source, $entity, $item, $entity_id)";s:11:"description";s:41:"Invoked after a feed item has been saved.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:501:"
  // Use $entity->nid of the saved node.

  // Although the $entity object is passed by reference, any changes made in
  // this function will be ignored by the FeedsProcessor.
  $config = $source->importer->getConfig();

  if ($config['processor']['config']['purge_unseen_items'] && isset($entity->feeds_item)) {
    $feeds_item = $entity->feeds_item;
    $feeds_item->batch_id = feeds_delete_get_current_batch($feeds_item->feed_nid);

    drupal_write_record('feeds_delete_item', $feeds_item);
  }
";}s:23:"hook_feeds_after_import";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_feeds_after_import";s:10:"definition";s:53:"function hook_feeds_after_import(FeedsSource $source)";s:11:"description";s:46:"Invoked after a feed source has been imported.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:356:"
  // See geotaxonomy module's implementation for an example.

  // We can also check for an exception in this hook. The exception should not
  // be thrown here, Feeds will handle it.
  if (isset($source->exception)) {
    watchdog('mymodule', 'An exception occurred during importing!', array(), WATCHDOG_ERROR);
    mymodule_panic_reaction($source);
  }
";}s:22:"hook_feeds_after_clear";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_feeds_after_clear";s:10:"definition";s:52:"function hook_feeds_after_clear(FeedsSource $source)";s:11:"description";s:58:"Invoked after a feed source has been cleared of its items.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:1:"
";}s:31:"hook_feeds_parser_sources_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_feeds_parser_sources_alter";s:10:"definition";s:66:"function hook_feeds_parser_sources_alter(&$sources, $content_type)";s:11:"description";s:22:"Alter mapping sources.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:218:"
  $sources['my_source'] = array(
    'name' => t('Images in description element'),
    'description' => t('Images occurring in the description element of a feed item.'),
    'callback' => 'my_source_get_source',
  );
";}s:28:"hook_feeds_processor_targets";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_feeds_processor_targets";s:10:"definition";s:60:"function hook_feeds_processor_targets($entity_type, $bundle)";s:11:"description";s:36:"Adds mapping targets for processors.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:3240:"
  $targets = array();

  if ($entity_type == 'node') {
    // Example 1: provide the minimal info for a target. Description is
    // optional, but recommended.
    // @see my_module_set_target()
    $targets['my_node_field'] = array(
      'name' => t('My custom node field'),
      'description' => t('Description of what my custom node field does.'),
      'callback' => 'my_module_set_target',
    );

    // Example 2: specify "real_target" if the target name is different from
    // the entity property name.
    // Here the target is called "my_node_field2:uri", but the entity property
    // is called "my_node_field2". This will ensure that the property
    // "my_node_field2" is cleared out that the beginning of the mapping
    // process.
    $targets['my_node_field2:uri'] = array(
      'name' => t('My third custom node field'),
      'description' => t('A target that sets a property that does not have the same name as the target.'),
      'callback' => 'my_module_set_target2',
      'real_target' => 'my_node_field2',
    );

    // Example 3: you can make your target selectable as an unique target by
    // setting "optional_unique" to TRUE and specify one or more callbacks to
    // retrieve existing entity id's.
    // @see my_module_mapper_unique()
    $targets['my_node_field3'] = array(
      'name' => t('My third custom node field'),
      'description' => t('A field that can be set as an unique target.'),
      'callback' => 'my_module_set_target3',
      'optional_unique' => TRUE,
      'unique_callbacks' => array('my_module_mapper_unique'),
    );

    // Example 4: use the form and summary callbacks to add additional
    // configuration options for your target. Use the form callbacks to provide
    // a form to set the target configuration. Use the summary callbacks to
    // display the target configuration.
    // @see my_module_form_callback()
    // @see my_module_summary_callback()
    $targets['my_node_field4'] = array(
      'name' => t('My fourth custom node field'),
      'description' => t('A field with additional configuration.'),
      'callback' => 'my_module_set_target4',
      'form_callbacks' => array('my_module_form_callback'),
      'summary_callbacks' => array('my_module_summary_callback'),
    );

    // Example 5: use preprocess callbacks to set or change mapping options.
    // @see my_module_preprocess_callback()
    $targets['my_node_field5'] = array(
      'name' => t('My fifth custom node field'),
      'description' => t('A field with additional configuration.'),
      'callback' => 'my_module_set_target5',
      'preprocess_callbacks' => array('my_module_preprocess_callback'),
    );

    // Example 6: when you want to remove or rename previously provided targets,
    // you can set "deprecated" to TRUE for the old target name. This will make
    // the target to be no longer selectable in the UI. If an importer uses this
    // target it will show up as "DEPRECATED" in the UI.
    // If you want that the target continues to work, you can still specify the
    // callback.
    $targets['deprecated_target'] = array(
      'name' => t('A target that cannot be chosen in the UI.'),
      'deprecated' => TRUE,
    );
  }

  return $targets;
";}s:34:"hook_feeds_processor_targets_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_feeds_processor_targets_alter";s:10:"definition";s:83:"function hook_feeds_processor_targets_alter(array &$targets, $entity_type, $bundle)";s:11:"description";s:24:"Alters the target array.";s:11:"destination";s:17:"%module.feeds.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"feeds";s:9:"file_path";s:28:"public://hooks/feeds.api.php";s:4:"body";s:280:"
  // Example: set an existing target as optional unique.
  if ($entity_type == 'node' && $bundle == 'article') {
    if (isset($targets['nid'])) {
      $targets['nid']['unique_callbacks'][] = 'my_module_mapper_unique';
      $targets['nid']['optional_unique'] = TRUE;
    }
  }
";}}s:17:"feeds_xpathparser";a:1:{s:37:"hook_feeds_xpathparser_filter_domnode";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_feeds_xpathparser_filter_domnode";s:10:"definition";s:105:"function hook_feeds_xpathparser_filter_domnode(DOMNode $node, DOMDocument $document, FeedsSource $source)";s:11:"description";s:51:"Implements hook_feeds_xpathparser_filter_domnode().";s:11:"destination";s:29:"%module.feeds_xpathparser.inc";s:12:"dependencies";a:0:{}s:5:"group";s:17:"feeds_xpathparser";s:9:"file_path";s:40:"public://hooks/feeds_xpathparser.api.php";s:4:"body";s:349:"

  if (my_module_node_is_bad($node)) {
    return TRUE;
  }

  // To print out the raw XML.
  $debug = $document->saveXML($node);

  // For HTML.
  if (version_compare(phpversion(), '5.3.6', '>=')) {
    $debug = $document->saveHTML($node);
  }
  else {
    $debug = $document->saveXML($node, LIBXML_NOEMPTYTAG);
  }

  drupal_set_message($debug);
";}}s:6:"fences";a:2:{s:27:"hook_fences_suggestion_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_fences_suggestion_info";s:10:"definition";s:38:"function hook_fences_suggestion_info()";s:11:"description";s:55:"Provide theme hook suggestions for various theme hooks.";s:11:"destination";s:18:"%module.fences.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"fences";s:9:"file_path";s:29:"public://hooks/fences.api.php";s:4:"body";s:1114:"
  // The suggestions for the "field" theme hook.
  $fences['field'] = array(
    // This key will be appended to THEMEHOOK__fences_ to make the theme hook
    // suggestion, field__fences_p in this case. The corresponding template
    // files should be have all underscores changed to dashes and be named
    // field--fences-p.tpl.php and field--fences-p-multiple.tpl.php.
    'p' => array(
      // The label used in the UI when selecting a suggestion. The label must
      // only contain English words to enable multilingual translations.
      'label' => t('paragraph'),
      // The HTML element(s) used by the suggestion. This will be added to the
      // label in the UI to provide additional context. If multiple elements are
      // used they should be separated by spaces, e.g. 'pre code'.
      'element' => 'p',
      // A short description used in the UI when selecting a suggestion.
      'description' => t('A paragraph; multiple values are each wrapped in a <p>'),
      // An array of groups to place the element into.
      'groups' => array(t('Block-level')),
    ),
  );
  return $fences;
";}s:33:"hook_fences_suggestion_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_fences_suggestion_info_alter";s:10:"definition";s:52:"function hook_fences_suggestion_info_alter(&$fences)";s:11:"description";s:59:"Alter the theme hook suggestions used by the fences module.";s:11:"destination";s:18:"%module.fences.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"fences";s:9:"file_path";s:29:"public://hooks/fences.api.php";s:4:"body";s:1:"
";}}s:5:"field";a:81:{s:23:"hook_field_extra_fields";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_extra_fields";s:10:"definition";s:34:"function hook_field_extra_fields()";s:11:"description";s:56:"Exposes "pseudo-field" components on fieldable entities.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:708:"
  $extra['node']['poll'] = array(
    'form' => array(
      'choice_wrapper' => array(
        'label' => t('Poll choices'),
        'description' => t('Poll choices'),
        'weight' => -4,
      ),
      'settings' => array(
        'label' => t('Poll settings'),
        'description' => t('Poll module settings'),
        'weight' => -3,
      ),
    ),
    'display' => array(
      'poll_view_voting' => array(
        'label' => t('Poll vote'),
        'description' => t('Poll vote'),
        'weight' => 0,
      ),
      'poll_view_results' => array(
        'label' => t('Poll results'),
        'description' => t('Poll results'),
        'weight' => 0,
      ),
    )
  );

  return $extra;
";}s:29:"hook_field_extra_fields_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_field_extra_fields_alter";s:10:"definition";s:46:"function hook_field_extra_fields_alter(&$info)";s:11:"description";s:54:"Alter "pseudo-field" components on fieldable entities.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:261:"
  // Force node title to always be at the top of the list by default.
  foreach (node_type_get_types() as $bundle) {
    if (isset($info['node'][$bundle->type]['form']['title'])) {
      $info['node'][$bundle->type]['form']['title']['weight'] = -20;
    }
  }
";}s:15:"hook_field_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_field_info";s:10:"definition";s:26:"function hook_field_info()";s:11:"description";s:29:"Define Field API field types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1123:"
  return array(
    'text' => array(
      'label' => t('Text'),
      'description' => t('This field stores varchar text in the database.'),
      'settings' => array('max_length' => 255),
      'instance_settings' => array('text_processing' => 0),
      'default_widget' => 'text_textfield',
      'default_formatter' => 'text_default',
    ),
    'text_long' => array(
      'label' => t('Long text'),
      'description' => t('This field stores long text in the database.'),
      'settings' => array('max_length' => ''),
      'instance_settings' => array('text_processing' => 0),
      'default_widget' => 'text_textarea',
      'default_formatter' => 'text_default',
    ),
    'text_with_summary' => array(
      'label' => t('Long text and summary'),
      'description' => t('This field stores long text in the database along with optional summary text.'),
      'settings' => array('max_length' => ''),
      'instance_settings' => array('text_processing' => 1, 'display_summary' => 0),
      'default_widget' => 'text_textarea_with_summary',
      'default_formatter' => 'text_summary_or_trimmed',
    ),
  );
";}s:21:"hook_field_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_field_info_alter";s:10:"definition";s:38:"function hook_field_info_alter(&$info)";s:11:"description";s:45:"Perform alterations on Field API field types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:354:"
  // Add a setting to all field types.
  foreach ($info as $field_type => $field_type_info) {
    $info[$field_type]['settings'] += array(
      'mymodule_additional_setting' => 'default value',
    );
  }

  // Change the default widget for fields of type 'foo'.
  if (isset($info['foo'])) {
    $info['foo']['default widget'] = 'mymodule_widget';
  }
";}s:17:"hook_field_schema";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_field_schema";s:10:"definition";s:34:"function hook_field_schema($field)";s:11:"description";s:50:"Define the Field API schema for a field structure.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:776:"
  if ($field['type'] == 'text_long') {
    $columns = array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
    );
  }
  else {
    $columns = array(
      'value' => array(
        'type' => 'varchar',
        'length' => $field['settings']['max_length'],
        'not null' => FALSE,
      ),
    );
  }
  $columns += array(
    'format' => array(
      'type' => 'varchar',
      'length' => 255,
      'not null' => FALSE,
    ),
  );
  return array(
    'columns' => $columns,
    'indexes' => array(
      'format' => array('format'),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array('format' => 'format'),
      ),
    ),
  );
";}s:15:"hook_field_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_field_load";s:10:"definition";s:95:"function hook_field_load($entity_type, $entities, $field, $instances, $langcode, &$items, $age)";s:11:"description";s:58:"Define custom load behavior for this module's field types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:777:"
  // Sample code from text.module: precompute sanitized strings so they are
  // stored in the field cache.
  foreach ($entities as $id => $entity) {
    foreach ($items[$id] as $delta => $item) {
      // Only process items with a cacheable format, the rest will be handled
      // by formatters if needed.
      if (empty($instances[$id]['settings']['text_processing']) || filter_format_allowcache($item['format'])) {
        $items[$id][$delta]['safe_value'] = isset($item['value']) ? _text_sanitize($instances[$id], $langcode, $item, 'value') : '';
        if ($field['type'] == 'text_with_summary') {
          $items[$id][$delta]['safe_summary'] = isset($item['summary']) ? _text_sanitize($instances[$id], $langcode, $item, 'summary') : '';
        }
      }
    }
  }
";}s:23:"hook_field_prepare_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_prepare_view";s:10:"definition";s:97:"function hook_field_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items)";s:11:"description";s:38:"Prepare field values prior to display.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:442:"
  // Sample code from image.module: if there are no images specified at all,
  // use the default image.
  foreach ($entities as $id => $entity) {
    if (empty($items[$id]) && $field['settings']['default_image']) {
      if ($file = file_load($field['settings']['default_image'])) {
        $items[$id][0] = (array) $file + array(
          'is_default' => TRUE,
          'alt' => '',
          'title' => '',
        );
      }
    }
  }
";}s:19:"hook_field_validate";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_field_validate";s:10:"definition";s:99:"function hook_field_validate($entity_type, $entity, $field, $instance, $langcode, $items, &$errors)";s:11:"description";s:34:"Validate this module's field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:502:"
  foreach ($items as $delta => $item) {
    if (!empty($item['value'])) {
      if (!empty($field['settings']['max_length']) && drupal_strlen($item['value']) > $field['settings']['max_length']) {
        $errors[$field['field_name']][$langcode][$delta][] = array(
          'error' => 'text_max_length',
          'message' => t('%name: the value may not be longer than %max characters.', array('%name' => $instance['label'], '%max' => $field['settings']['max_length'])),
        );
      }
    }
  }
";}s:18:"hook_field_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_field_presave";s:10:"definition";s:89:"function hook_field_presave($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:61:"Define custom presave behavior for this module's field types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:319:"
  if ($field['type'] == 'number_decimal') {
    // Let PHP round the value to ensure consistent behavior across storage
    // backends.
    foreach ($items as $delta => $item) {
      if (isset($item['value'])) {
        $items[$delta]['value'] = round($item['value'], $field['settings']['scale']);
      }
    }
  }
";}s:17:"hook_field_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_field_insert";s:10:"definition";s:88:"function hook_field_insert($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:59:"Define custom insert behavior for this module's field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:494:"
  if (variable_get('taxonomy_maintain_index_table', TRUE) && $field['storage']['type'] == 'field_sql_storage' && $entity_type == 'node' && $entity->status) {
    $query = db_insert('taxonomy_index')->fields(array('nid', 'tid', 'sticky', 'created', ));
    foreach ($items as $item) {
      $query->values(array(
        'nid' => $entity->nid,
        'tid' => $item['tid'],
        'sticky' => $entity->sticky,
        'created' => $entity->created,
      ));
    }
    $query->execute();
  }
";}s:17:"hook_field_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_field_update";s:10:"definition";s:88:"function hook_field_update($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:59:"Define custom update behavior for this module's field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1008:"
  if (variable_get('taxonomy_maintain_index_table', TRUE) && $field['storage']['type'] == 'field_sql_storage' && $entity_type == 'node') {
    $first_call = &drupal_static(__FUNCTION__, array());

    // We don't maintain data for old revisions, so clear all previous values
    // from the table. Since this hook runs once per field, per object, make
    // sure we only wipe values once.
    if (!isset($first_call[$entity->nid])) {
      $first_call[$entity->nid] = FALSE;
      db_delete('taxonomy_index')->condition('nid', $entity->nid)->execute();
    }
    // Only save data to the table if the node is published.
    if ($entity->status) {
      $query = db_insert('taxonomy_index')->fields(array('nid', 'tid', 'sticky', 'created'));
      foreach ($items as $item) {
        $query->values(array(
          'nid' => $entity->nid,
          'tid' => $item['tid'],
          'sticky' => $entity->sticky,
          'created' => $entity->created,
        ));
      }
      $query->execute();
    }
  }
";}s:31:"hook_field_storage_update_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_storage_update_field";s:10:"definition";s:73:"function hook_field_storage_update_field($field, $prior_field, $has_data)";s:11:"description";s:43:"Update the storage information for a field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:609:"
  if (!$has_data) {
    // There is no data. Re-create the tables completely.
    $prior_schema = _field_sql_storage_schema($prior_field);
    foreach ($prior_schema as $name => $table) {
      db_drop_table($name, $table);
    }
    $schema = _field_sql_storage_schema($field);
    foreach ($schema as $name => $table) {
      db_create_table($name, $table);
    }
  }
  else {
    // There is data. See field_sql_storage_field_storage_update_field() for
    // an example of what to do to modify the schema in place, preserving the
    // old data as much as possible.
  }
  drupal_get_schema(NULL, TRUE);
";}s:17:"hook_field_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_field_delete";s:10:"definition";s:88:"function hook_field_delete($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:59:"Define custom delete behavior for this module's field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:508:"
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
  foreach ($items as $delta => $item) {
    // For hook_file_references(), remember that this is being deleted.
    $item['file_field_name'] = $field['field_name'];
    // Pass in the ID of the object that is being removed so all references can
    // be counted in hook_file_references().
    $item['file_field_type'] = $entity_type;
    $item['file_field_id'] = $id;
    file_field_delete_file($item, $field, $entity_type, $id);
  }
";}s:26:"hook_field_delete_revision";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_delete_revision";s:10:"definition";s:97:"function hook_field_delete_revision($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:69:"Define custom revision delete behavior for this module's field types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:348:"
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
  foreach ($items as $delta => $item) {
    // For hook_file_references, remember that this file is being deleted.
    $item['file_field_name'] = $field['field_name'];
    if (file_field_delete_file($item, $field, $entity_type, $id)) {
      $items[$delta] = NULL;
    }
  }
";}s:30:"hook_field_prepare_translation";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_field_prepare_translation";s:10:"definition";s:135:"function hook_field_prepare_translation($entity_type, $entity, $field, $instance, $langcode, &$items, $source_entity, $source_langcode)";s:11:"description";s:73:"Define custom prepare_translation behavior for this module's field types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:341:"
  // If the translating user is not permitted to use the assigned text format,
  // we must not expose the source values.
  $field_name = $field['field_name'];
  $formats = filter_formats();
  $format_id = $source_entity->{$field_name}[$source_langcode][0]['format'];
  if (!filter_access($formats[$format_id])) {
    $items = array();
  }
";}s:19:"hook_field_is_empty";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_field_is_empty";s:10:"definition";s:43:"function hook_field_is_empty($item, $field)";s:11:"description";s:55:"Define what constitutes an empty item for a field type.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:104:"
  if (empty($item['value']) && (string) $item['value'] !== '0') {
    return TRUE;
  }
  return FALSE;
";}s:22:"hook_field_widget_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_field_widget_info";s:10:"definition";s:33:"function hook_field_widget_info()";s:11:"description";s:30:"Expose Field API widget types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1076:"
  return array(
    'text_textfield' => array(
      'label' => t('Text field'),
      'field types' => array('text'),
      'settings' => array('size' => 60),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_DEFAULT,
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
    ),
    'text_textarea' => array(
      'label' => t('Text area (multiple rows)'),
      'field types' => array('text_long'),
      'settings' => array('rows' => 5),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_DEFAULT,
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
    ),
    'text_textarea_with_summary' => array(
      'label' => t('Text area with a summary'),
      'field types' => array('text_with_summary'),
      'settings' => array('rows' => 20, 'summary_rows' => 5),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_DEFAULT,
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
      // As an advanced widget, force it to sink to the bottom of the choices.
      'weight' => 2,
    ),
  );
";}s:28:"hook_field_widget_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_field_widget_info_alter";s:10:"definition";s:45:"function hook_field_widget_info_alter(&$info)";s:11:"description";s:46:"Perform alterations on Field API widget types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:261:"
  // Add a setting to a widget type.
  $info['text_textfield']['settings'] += array(
    'mymodule_additional_setting' => 'default value',
  );

  // Let a new field type re-use an existing widget.
  $info['options_select']['field types'][] = 'my_field_type';
";}s:22:"hook_field_widget_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_field_widget_form";s:10:"definition";s:109:"function hook_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element)";s:11:"description";s:42:"Return the form for a single field widget.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:177:"
  $element += array(
    '#type' => $instance['widget']['type'],
    '#default_value' => isset($items[$delta]) ? $items[$delta] : '',
  );
  return array('value' => $element);
";}s:28:"hook_field_widget_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_field_widget_form_alter";s:10:"definition";s:72:"function hook_field_widget_form_alter(&$element, &$form_state, $context)";s:11:"description";s:56:"Alter forms for field widgets provided by other modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:233:"
  // Add a css class to widget form elements for all fields of type mytype.
  if ($context['field']['type'] == 'mytype') {
    // Be sure not to overwrite existing attributes.
    $element['#attributes']['class'][] = 'myclass';
  }
";}s:40:"hook_field_widget_WIDGET_TYPE_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_field_widget_WIDGET_TYPE_form_alter";s:10:"definition";s:84:"function hook_field_widget_WIDGET_TYPE_form_alter(&$element, &$form_state, $context)";s:11:"description";s:68:"Alter widget forms for a specific widget provided by another module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:262:"
  // Code here will only act on widgets of type WIDGET_TYPE.  For example,
  // hook_field_widget_mymodule_autocomplete_form_alter() will only act on
  // widgets of type 'mymodule_autocomplete'.
  $element['#autocomplete_path'] = 'mymodule/autocomplete_path';
";}s:34:"hook_field_widget_properties_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_field_widget_properties_alter";s:10:"definition";s:63:"function hook_field_widget_properties_alter(&$widget, $context)";s:11:"description";s:74:"Alters the widget properties of a field instance before it gets displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:260:"
  // Change a widget's type according to the time of day.
  $field = $context['field'];
  if ($context['entity_type'] == 'node' && $field['field_name'] == 'field_foo') {
    $time = date('H');
    $widget['type'] = $time < 12 ? 'widget_am' : 'widget_pm';
  }
";}s:23:"hook_field_widget_error";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_widget_error";s:10:"definition";s:71:"function hook_field_widget_error($element, $error, $form, &$form_state)";s:11:"description";s:36:"Flag a field-level validation error.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:44:"
  form_error($element, $error['message']);
";}s:25:"hook_field_formatter_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_field_formatter_info";s:10:"definition";s:36:"function hook_field_formatter_info()";s:11:"description";s:33:"Expose Field API formatter types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1123:"
  return array(
    'text_default' => array(
      'label' => t('Default'),
      'field types' => array('text', 'text_long', 'text_with_summary'),
    ),
    'text_plain' => array(
      'label' => t('Plain text'),
      'field types' => array('text', 'text_long', 'text_with_summary'),
    ),

    // The text_trimmed formatter displays the trimmed version of the
    // full element of the field. It is intended to be used with text
    // and text_long fields. It also works with text_with_summary
    // fields though the text_summary_or_trimmed formatter makes more
    // sense for that field type.
    'text_trimmed' => array(
      'label' => t('Trimmed'),
      'field types' => array('text', 'text_long', 'text_with_summary'),
    ),

    // The 'summary or trimmed' field formatter for text_with_summary
    // fields displays returns the summary element of the field or, if
    // the summary is empty, the trimmed version of the full element
    // of the field.
    'text_summary_or_trimmed' => array(
      'label' => t('Summary or trimmed'),
      'field types' => array('text_with_summary'),
    ),
  );
";}s:31:"hook_field_formatter_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_formatter_info_alter";s:10:"definition";s:48:"function hook_field_formatter_info_alter(&$info)";s:11:"description";s:49:"Perform alterations on Field API formatter types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:263:"
  // Add a setting to a formatter type.
  $info['text_default']['settings'] += array(
    'mymodule_additional_setting' => 'default value',
  );

  // Let a new field type re-use an existing formatter.
  $info['text_default']['field types'][] = 'my_field_type';
";}s:33:"hook_field_formatter_prepare_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_formatter_prepare_view";s:10:"definition";s:118:"function hook_field_formatter_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items, $displays)";s:11:"description";s:70:"Allow formatters to load information for field values being displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1125:"
  $tids = array();

  // Collect every possible term attached to any of the fieldable entities.
  foreach ($entities as $id => $entity) {
    foreach ($items[$id] as $delta => $item) {
      // Force the array key to prevent duplicates.
      $tids[$item['tid']] = $item['tid'];
    }
  }

  if ($tids) {
    $terms = taxonomy_term_load_multiple($tids);

    // Iterate through the fieldable entities again to attach the loaded term
    // data.
    foreach ($entities as $id => $entity) {
      $rekey = FALSE;

      foreach ($items[$id] as $delta => $item) {
        // Check whether the taxonomy term field instance value could be loaded.
        if (isset($terms[$item['tid']])) {
          // Replace the instance value with the term data.
          $items[$id][$delta]['taxonomy_term'] = $terms[$item['tid']];
        }
        // Otherwise, unset the instance value, since the term does not exist.
        else {
          unset($items[$id][$delta]);
          $rekey = TRUE;
        }
      }

      if ($rekey) {
        // Rekey the items array.
        $items[$id] = array_values($items[$id]);
      }
    }
  }
";}s:25:"hook_field_formatter_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_field_formatter_view";s:10:"definition";s:105:"function hook_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display)";s:11:"description";s:43:"Build a renderable array for a field value.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1338:"
  $element = array();
  $settings = $display['settings'];

  switch ($display['type']) {
    case 'sample_field_formatter_simple':
      // Common case: each value is displayed individually in a sub-element
      // keyed by delta. The field.tpl.php template specifies the markup
      // wrapping each value.
      foreach ($items as $delta => $item) {
        $element[$delta] = array('#markup' => $settings['some_setting'] . $item['value']);
      }
      break;

    case 'sample_field_formatter_themeable':
      // More elaborate formatters can defer to a theme function for easier
      // customization.
      foreach ($items as $delta => $item) {
        $element[$delta] = array(
          '#theme' => 'mymodule_theme_sample_field_formatter_themeable',
          '#data' => $item['value'],
          '#some_setting' => $settings['some_setting'],
        );
      }
      break;

    case 'sample_field_formatter_combined':
      // Some formatters might need to display all values within a single piece
      // of markup.
      $rows = array();
      foreach ($items as $delta => $item) {
        $rows[] = array($delta, $item['value']);
      }
      $element[0] = array(
        '#theme' => 'table',
        '#header' => array(t('Delta'), t('Value')),
        '#rows' => $rows,
      );
      break;
  }

  return $element;
";}s:22:"hook_field_attach_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_field_attach_form";s:10:"definition";s:87:"function hook_field_attach_form($entity_type, $entity, &$form, &$form_state, $langcode)";s:11:"description";s:27:"Act on field_attach_form().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:252:"
  // Add a checkbox allowing a given field to be emptied.
  // See hook_field_attach_submit() for the corresponding processing code.
  $form['empty_field_foo'] = array(
    '#type' => 'checkbox',
    '#title' => t("Empty the 'field_foo' field"),
  );
";}s:22:"hook_field_attach_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_field_attach_load";s:10:"definition";s:72:"function hook_field_attach_load($entity_type, $entities, $age, $options)";s:11:"description";s:27:"Act on field_attach_load().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:26:"hook_field_attach_validate";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_attach_validate";s:10:"definition";s:68:"function hook_field_attach_validate($entity_type, $entity, &$errors)";s:11:"description";s:31:"Act on field_attach_validate().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:563:"
  // Make sure any images in article nodes have an alt text.
  if ($entity_type == 'node' && $entity->type == 'article' && !empty($entity->field_image)) {
    foreach ($entity->field_image as $langcode => $items) {
      foreach ($items as $delta => $item) {
        if (!empty($item['fid']) && empty($item['alt'])) {
          $errors['field_image'][$langcode][$delta][] = array(
            'error' => 'field_example_invalid',
            'message' => t('All images in articles need to have an alternative text set.'),
          );
        }
      }
    }
  }
";}s:24:"hook_field_attach_submit";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_attach_submit";s:10:"definition";s:77:"function hook_field_attach_submit($entity_type, $entity, $form, &$form_state)";s:11:"description";s:29:"Act on field_attach_submit().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:277:"
  // Sample case of an 'Empty the field' checkbox added on the form, allowing
  // a given field to be emptied.
  $values = drupal_array_get_nested_value($form_state['values'], $form['#parents']);
  if (!empty($values['empty_field_foo'])) {
    unset($entity->field_foo);
  }
";}s:25:"hook_field_attach_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_field_attach_presave";s:10:"definition";s:57:"function hook_field_attach_presave($entity_type, $entity)";s:11:"description";s:30:"Act on field_attach_presave().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:24:"hook_field_attach_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_attach_insert";s:10:"definition";s:56:"function hook_field_attach_insert($entity_type, $entity)";s:11:"description";s:29:"Act on field_attach_insert().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:24:"hook_field_attach_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_attach_update";s:10:"definition";s:56:"function hook_field_attach_update($entity_type, $entity)";s:11:"description";s:29:"Act on field_attach_update().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:34:"hook_field_attach_preprocess_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_field_attach_preprocess_alter";s:10:"definition";s:66:"function hook_field_attach_preprocess_alter(&$variables, $context)";s:11:"description";s:42:"Alter field_attach_preprocess() variables.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:24:"hook_field_attach_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_attach_delete";s:10:"definition";s:56:"function hook_field_attach_delete($entity_type, $entity)";s:11:"description";s:29:"Act on field_attach_delete().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:33:"hook_field_attach_delete_revision";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_attach_delete_revision";s:10:"definition";s:65:"function hook_field_attach_delete_revision($entity_type, $entity)";s:11:"description";s:38:"Act on field_attach_delete_revision().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:23:"hook_field_attach_purge";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_attach_purge";s:10:"definition";s:74:"function hook_field_attach_purge($entity_type, $entity, $field, $instance)";s:11:"description";s:26:"Act on field_purge_data().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:178:"
  // find the corresponding data in mymodule and purge it
  if ($entity_type == 'node' && $field->field_name == 'my_field_name') {
    mymodule_remove_mydata($entity->nid);
  }
";}s:28:"hook_field_attach_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_field_attach_view_alter";s:10:"definition";s:57:"function hook_field_attach_view_alter(&$output, $context)";s:11:"description";s:65:"Perform alterations on field_attach_view() or field_view_field().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:733:"
  // Append RDF term mappings on displayed taxonomy links.
  foreach (element_children($output) as $field_name) {
    $element = &$output[$field_name];
    if ($element['#field_type'] == 'taxonomy_term_reference' && $element['#formatter'] == 'taxonomy_term_reference_link') {
      foreach ($element['#items'] as $delta => $item) {
        $term = $item['taxonomy_term'];
        if (!empty($term->rdf_mapping['rdftype'])) {
          $element[$delta]['#options']['attributes']['typeof'] = $term->rdf_mapping['rdftype'];
        }
        if (!empty($term->rdf_mapping['name']['predicates'])) {
          $element[$delta]['#options']['attributes']['property'] = $term->rdf_mapping['name']['predicates'];
        }
      }
    }
  }
";}s:43:"hook_field_attach_prepare_translation_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_field_attach_prepare_translation_alter";s:10:"definition";s:72:"function hook_field_attach_prepare_translation_alter(&$entity, $context)";s:11:"description";s:58:"Perform alterations on field_attach_prepare_translation().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:131:"
  if ($context['entity_type'] == 'custom_entity_type') {
    $entity->custom_field = $context['source_entity']->custom_field;
  }
";}s:25:"hook_field_language_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_field_language_alter";s:10:"definition";s:64:"function hook_field_language_alter(&$display_language, $context)";s:11:"description";s:47:"Perform alterations on field_language() values.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:362:"
  // Do not apply core language fallback rules if they are disabled or if Locale
  // is not registered as a translation handler.
  if (variable_get('locale_field_language_fallback', TRUE) && field_has_translation_handler($context['entity_type'], 'locale')) {
    locale_field_language_fallback($display_language, $context['entity'], $context['language']);
  }
";}s:36:"hook_field_available_languages_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_field_available_languages_alter";s:10:"definition";s:68:"function hook_field_available_languages_alter(&$languages, $context)";s:11:"description";s:41:"Alter field_available_languages() values.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:166:"
  // Add an unavailable language.
  $languages[] = 'xx';

  // Remove an available language.
  $index = array_search('yy', $languages);
  unset($languages[$index]);
";}s:31:"hook_field_attach_create_bundle";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_attach_create_bundle";s:10:"definition";s:63:"function hook_field_attach_create_bundle($entity_type, $bundle)";s:11:"description";s:36:"Act on field_attach_create_bundle().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:151:"
  // When a new bundle is created, the menu needs to be rebuilt to add the
  // Field UI menu item tabs.
  variable_set('menu_rebuild_needed', TRUE);
";}s:31:"hook_field_attach_rename_bundle";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_attach_rename_bundle";s:10:"definition";s:80:"function hook_field_attach_rename_bundle($entity_type, $bundle_old, $bundle_new)";s:11:"description";s:36:"Act on field_attach_rename_bundle().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:435:"
  // Update the extra weights variable with new information.
  if ($bundle_old !== $bundle_new) {
    $extra_weights = variable_get('field_extra_weights', array());
    if (isset($info[$entity_type][$bundle_old])) {
      $extra_weights[$entity_type][$bundle_new] = $extra_weights[$entity_type][$bundle_old];
      unset($extra_weights[$entity_type][$bundle_old]);
      variable_set('field_extra_weights', $extra_weights);
    }
  }
";}s:31:"hook_field_attach_delete_bundle";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_attach_delete_bundle";s:10:"definition";s:75:"function hook_field_attach_delete_bundle($entity_type, $bundle, $instances)";s:11:"description";s:34:"Act on field_attach_delete_bundle.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:299:"
  // Remove the extra weights variable information for this bundle.
  $extra_weights = variable_get('field_extra_weights', array());
  if (isset($extra_weights[$entity_type][$bundle])) {
    unset($extra_weights[$entity_type][$bundle]);
    variable_set('field_extra_weights', $extra_weights);
  }
";}s:23:"hook_field_storage_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_storage_info";s:10:"definition";s:34:"function hook_field_storage_info()";s:11:"description";s:34:"Expose Field API storage backends.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:229:"
  return array(
    'field_sql_storage' => array(
      'label' => t('Default SQL storage'),
      'description' => t('Stores fields in the local SQL database, using per-field tables.'),
      'settings' => array(),
    ),
  );
";}s:29:"hook_field_storage_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_field_storage_info_alter";s:10:"definition";s:46:"function hook_field_storage_info_alter(&$info)";s:11:"description";s:47:"Perform alterations on Field API storage types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:149:"
  // Add a setting to a storage type.
  $info['field_sql_storage']['settings'] += array(
    'mymodule_additional_setting' => 'default value',
  );
";}s:26:"hook_field_storage_details";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_storage_details";s:10:"definition";s:43:"function hook_field_storage_details($field)";s:11:"description";s:58:"Reveal the internal details about the storage for a field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:510:"
  $details = array();

  // Add field columns.
  foreach ((array) $field['columns'] as $column_name => $attributes) {
    $real_name = _field_sql_storage_columnname($field['field_name'], $column_name);
    $columns[$column_name] = $real_name;
  }
  return array(
    'sql' => array(
      FIELD_LOAD_CURRENT => array(
        _field_sql_storage_tablename($field) => $columns,
      ),
      FIELD_LOAD_REVISION => array(
        _field_sql_storage_revision_tablename($field) => $columns,
      ),
    ),
  );
";}s:32:"hook_field_storage_details_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_field_storage_details_alter";s:10:"definition";s:60:"function hook_field_storage_details_alter(&$details, $field)";s:11:"description";s:49:"Perform alterations on Field API storage details.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:400:"
  if ($field['field_name'] == 'field_of_interest') {
    $columns = array();
    foreach ((array) $field['columns'] as $column_name => $attributes) {
      $columns[$column_name] = $column_name;
    }
    $details['drupal_variables'] = array(
      FIELD_LOAD_CURRENT => array(
        'moon' => $columns,
      ),
      FIELD_LOAD_REVISION => array(
        'mars' => $columns,
      ),
    );
  }
";}s:23:"hook_field_storage_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_storage_load";s:10:"definition";s:82:"function hook_field_storage_load($entity_type, $entities, $age, $fields, $options)";s:11:"description";s:38:"Load field data for a set of entities.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1877:"
  $load_current = $age == FIELD_LOAD_CURRENT;

  foreach ($fields as $field_id => $ids) {
    // By the time this hook runs, the relevant field definitions have been
    // populated and cached in FieldInfo, so calling field_info_field_by_id()
    // on each field individually is more efficient than loading all fields in
    // memory upfront with field_info_field_by_ids().
    $field = field_info_field_by_id($field_id);
    $field_name = $field['field_name'];
    $table = $load_current ? _field_sql_storage_tablename($field) : _field_sql_storage_revision_tablename($field);

    $query = db_select($table, 't')
      ->fields('t')
      ->condition('entity_type', $entity_type)
      ->condition($load_current ? 'entity_id' : 'revision_id', $ids, 'IN')
      ->condition('language', field_available_languages($entity_type, $field), 'IN')
      ->orderBy('delta');

    if (empty($options['deleted'])) {
      $query->condition('deleted', 0);
    }

    $results = $query->execute();

    $delta_count = array();
    foreach ($results as $row) {
      if (!isset($delta_count[$row->entity_id][$row->language])) {
        $delta_count[$row->entity_id][$row->language] = 0;
      }

      if ($field['cardinality'] == FIELD_CARDINALITY_UNLIMITED || $delta_count[$row->entity_id][$row->language] < $field['cardinality']) {
        $item = array();
        // For each column declared by the field, populate the item
        // from the prefixed database column.
        foreach ($field['columns'] as $column => $attributes) {
          $column_name = _field_sql_storage_columnname($field_name, $column);
          $item[$column] = $row->$column_name;
        }

        // Add the item to the field values for the entity.
        $entities[$row->entity_id]->{$field_name}[$row->language][] = $item;
        $delta_count[$row->entity_id][$row->language]++;
      }
    }
  }
";}s:24:"hook_field_storage_write";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_storage_write";s:10:"definition";s:70:"function hook_field_storage_write($entity_type, $entity, $op, $fields)";s:11:"description";s:31:"Write field data for an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:2858:"
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
  if (!isset($vid)) {
    $vid = $id;
  }

  foreach ($fields as $field_id) {
    $field = field_info_field_by_id($field_id);
    $field_name = $field['field_name'];
    $table_name = _field_sql_storage_tablename($field);
    $revision_name = _field_sql_storage_revision_tablename($field);

    $all_languages = field_available_languages($entity_type, $field);
    $field_languages = array_intersect($all_languages, array_keys((array) $entity->$field_name));

    // Delete and insert, rather than update, in case a value was added.
    if ($op == FIELD_STORAGE_UPDATE) {
      // Delete languages present in the incoming $entity->$field_name.
      // Delete all languages if $entity->$field_name is empty.
      $languages = !empty($entity->$field_name) ? $field_languages : $all_languages;
      if ($languages) {
        db_delete($table_name)
          ->condition('entity_type', $entity_type)
          ->condition('entity_id', $id)
          ->condition('language', $languages, 'IN')
          ->execute();
        db_delete($revision_name)
          ->condition('entity_type', $entity_type)
          ->condition('entity_id', $id)
          ->condition('revision_id', $vid)
          ->condition('language', $languages, 'IN')
          ->execute();
      }
    }

    // Prepare the multi-insert query.
    $do_insert = FALSE;
    $columns = array('entity_type', 'entity_id', 'revision_id', 'bundle', 'delta', 'language');
    foreach ($field['columns'] as $column => $attributes) {
      $columns[] = _field_sql_storage_columnname($field_name, $column);
    }
    $query = db_insert($table_name)->fields($columns);
    $revision_query = db_insert($revision_name)->fields($columns);

    foreach ($field_languages as $langcode) {
      $items = (array) $entity->{$field_name}[$langcode];
      $delta_count = 0;
      foreach ($items as $delta => $item) {
        // We now know we have something to insert.
        $do_insert = TRUE;
        $record = array(
          'entity_type' => $entity_type,
          'entity_id' => $id,
          'revision_id' => $vid,
          'bundle' => $bundle,
          'delta' => $delta,
          'language' => $langcode,
        );
        foreach ($field['columns'] as $column => $attributes) {
          $record[_field_sql_storage_columnname($field_name, $column)] = isset($item[$column]) ? $item[$column] : NULL;
        }
        $query->values($record);
        if (isset($vid)) {
          $revision_query->values($record);
        }

        if ($field['cardinality'] != FIELD_CARDINALITY_UNLIMITED && ++$delta_count == $field['cardinality']) {
          break;
        }
      }
    }

    // Execute the query if we have values to insert.
    if ($do_insert) {
      $query->execute();
      $revision_query->execute();
    }
  }
";}s:25:"hook_field_storage_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_field_storage_delete";s:10:"definition";s:66:"function hook_field_storage_delete($entity_type, $entity, $fields)";s:11:"description";s:36:"Delete all field data for an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:353:"
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);

  foreach (field_info_instances($entity_type, $bundle) as $instance) {
    if (isset($fields[$instance['field_id']])) {
      $field = field_info_field_by_id($instance['field_id']);
      field_sql_storage_field_storage_purge($entity_type, $entity, $field, $instance);
    }
  }
";}s:34:"hook_field_storage_delete_revision";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_field_storage_delete_revision";s:10:"definition";s:75:"function hook_field_storage_delete_revision($entity_type, $entity, $fields)";s:11:"description";s:53:"Delete a single revision of field data for an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:443:"
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);

  if (isset($vid)) {
    foreach ($fields as $field_id) {
      $field = field_info_field_by_id($field_id);
      $revision_name = _field_sql_storage_revision_tablename($field);
      db_delete($revision_name)
        ->condition('entity_type', $entity_type)
        ->condition('entity_id', $id)
        ->condition('revision_id', $vid)
        ->execute();
    }
  }
";}s:24:"hook_field_storage_query";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_storage_query";s:10:"definition";s:41:"function hook_field_storage_query($query)";s:11:"description";s:28:"Execute an EntityFieldQuery.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:3911:"
  $groups = array();
  if ($query->age == FIELD_LOAD_CURRENT) {
    $tablename_function = '_field_sql_storage_tablename';
    $id_key = 'entity_id';
  }
  else {
    $tablename_function = '_field_sql_storage_revision_tablename';
    $id_key = 'revision_id';
  }
  $table_aliases = array();
  // Add tables for the fields used.
  foreach ($query->fields as $key => $field) {
    $tablename = $tablename_function($field);
    // Every field needs a new table.
    $table_alias = $tablename . $key;
    $table_aliases[$key] = $table_alias;
    if ($key) {
      $select_query->join($tablename, $table_alias, "$table_alias.entity_type = $field_base_table.entity_type AND $table_alias.$id_key = $field_base_table.$id_key");
    }
    else {
      $select_query = db_select($tablename, $table_alias);
      $select_query->addTag('entity_field_access');
      $select_query->addMetaData('base_table', $tablename);
      $select_query->fields($table_alias, array('entity_type', 'entity_id', 'revision_id', 'bundle'));
      $field_base_table = $table_alias;
    }
    if ($field['cardinality'] != 1) {
      $select_query->distinct();
    }
  }

  // Add field conditions.
  foreach ($query->fieldConditions as $key => $condition) {
    $table_alias = $table_aliases[$key];
    $field = $condition['field'];
    // Add the specified condition.
    $sql_field = "$table_alias." . _field_sql_storage_columnname($field['field_name'], $condition['column']);
    $query->addCondition($select_query, $sql_field, $condition);
    // Add delta / language group conditions.
    foreach (array('delta', 'language') as $column) {
      if (isset($condition[$column . '_group'])) {
        $group_name = $condition[$column . '_group'];
        if (!isset($groups[$column][$group_name])) {
          $groups[$column][$group_name] = $table_alias;
        }
        else {
          $select_query->where("$table_alias.$column = " . $groups[$column][$group_name] . ".$column");
        }
      }
    }
  }

  if (isset($query->deleted)) {
    $select_query->condition("$field_base_table.deleted", (int) $query->deleted);
  }

  // Is there a need to sort the query by property?
  $has_property_order = FALSE;
  foreach ($query->order as $order) {
    if ($order['type'] == 'property') {
      $has_property_order = TRUE;
    }
  }

  if ($query->propertyConditions || $has_property_order) {
    if (empty($query->entityConditions['entity_type']['value'])) {
      throw new EntityFieldQueryException('Property conditions and orders must have an entity type defined.');
    }
    $entity_type = $query->entityConditions['entity_type']['value'];
    $entity_base_table = _field_sql_storage_query_join_entity($select_query, $entity_type, $field_base_table);
    $query->entityConditions['entity_type']['operator'] = '=';
    foreach ($query->propertyConditions as $property_condition) {
      $query->addCondition($select_query, "$entity_base_table." . $property_condition['column'], $property_condition);
    }
  }
  foreach ($query->entityConditions as $key => $condition) {
    $query->addCondition($select_query, "$field_base_table.$key", $condition);
  }

  // Order the query.
  foreach ($query->order as $order) {
    if ($order['type'] == 'entity') {
      $key = $order['specifier'];
      $select_query->orderBy("$field_base_table.$key", $order['direction']);
    }
    elseif ($order['type'] == 'field') {
      $specifier = $order['specifier'];
      $field = $specifier['field'];
      $table_alias = $table_aliases[$specifier['index']];
      $sql_field = "$table_alias." . _field_sql_storage_columnname($field['field_name'], $specifier['column']);
      $select_query->orderBy($sql_field, $order['direction']);
    }
    elseif ($order['type'] == 'property') {
      $select_query->orderBy("$entity_base_table." . $order['specifier'], $order['direction']);
    }
  }

  return $query->finishQuery($select_query, $id_key);
";}s:31:"hook_field_storage_create_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_storage_create_field";s:10:"definition";s:48:"function hook_field_storage_create_field($field)";s:11:"description";s:31:"Act on creation of a new field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:162:"
  $schema = _field_sql_storage_schema($field);
  foreach ($schema as $name => $table) {
    db_create_table($name, $table);
  }
  drupal_get_schema(NULL, TRUE);
";}s:31:"hook_field_storage_delete_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_storage_delete_field";s:10:"definition";s:48:"function hook_field_storage_delete_field($field)";s:11:"description";s:27:"Act on deletion of a field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:634:"
  // Mark all data associated with the field for deletion.
  $field['deleted'] = 0;
  $table = _field_sql_storage_tablename($field);
  $revision_table = _field_sql_storage_revision_tablename($field);
  db_update($table)
    ->fields(array('deleted' => 1))
    ->execute();

  // Move the table to a unique name while the table contents are being deleted.
  $field['deleted'] = 1;
  $new_table = _field_sql_storage_tablename($field);
  $revision_new_table = _field_sql_storage_revision_tablename($field);
  db_rename_table($table, $new_table);
  db_rename_table($revision_table, $revision_new_table);
  drupal_get_schema(NULL, TRUE);
";}s:34:"hook_field_storage_delete_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_field_storage_delete_instance";s:10:"definition";s:54:"function hook_field_storage_delete_instance($instance)";s:11:"description";s:36:"Act on deletion of a field instance.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:542:"
  $field = field_info_field($instance['field_name']);
  $table_name = _field_sql_storage_tablename($field);
  $revision_name = _field_sql_storage_revision_tablename($field);
  db_update($table_name)
    ->fields(array('deleted' => 1))
    ->condition('entity_type', $instance['entity_type'])
    ->condition('bundle', $instance['bundle'])
    ->execute();
  db_update($revision_name)
    ->fields(array('deleted' => 1))
    ->condition('entity_type', $instance['entity_type'])
    ->condition('bundle', $instance['bundle'])
    ->execute();
";}s:27:"hook_field_storage_pre_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_field_storage_pre_load";s:10:"definition";s:92:"function hook_field_storage_pre_load($entity_type, $entities, $age, &$skip_fields, $options)";s:11:"description";s:48:"Act before the storage backends load field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:29:"hook_field_storage_pre_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_field_storage_pre_insert";s:10:"definition";s:76:"function hook_field_storage_pre_insert($entity_type, $entity, &$skip_fields)";s:11:"description";s:50:"Act before the storage backends insert field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:682:"
  if ($entity_type == 'node' && $entity->status && _forum_node_check_node_type($entity)) {
    $query = db_insert('forum_index')->fields(array('nid', 'title', 'tid', 'sticky', 'created', 'comment_count', 'last_comment_timestamp'));
    foreach ($entity->taxonomy_forums as $language) {
      foreach ($language as $delta) {
        $query->values(array(
          'nid' => $entity->nid,
          'title' => $entity->title,
          'tid' => $delta['value'],
          'sticky' => $entity->sticky,
          'created' => $entity->created,
          'comment_count' => 0,
          'last_comment_timestamp' => $entity->created,
        ));
      }
    }
    $query->execute();
  }
";}s:29:"hook_field_storage_pre_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_field_storage_pre_update";s:10:"definition";s:76:"function hook_field_storage_pre_update($entity_type, $entity, &$skip_fields)";s:11:"description";s:50:"Act before the storage backends update field data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:1392:"
  $first_call = &drupal_static(__FUNCTION__, array());

  if ($entity_type == 'node' && $entity->status && _forum_node_check_node_type($entity)) {
    // We don't maintain data for old revisions, so clear all previous values
    // from the table. Since this hook runs once per field, per entity, make
    // sure we only wipe values once.
    if (!isset($first_call[$entity->nid])) {
      $first_call[$entity->nid] = FALSE;
      db_delete('forum_index')->condition('nid', $entity->nid)->execute();
    }
    // Only save data to the table if the node is published.
    if ($entity->status) {
      $query = db_insert('forum_index')->fields(array('nid', 'title', 'tid', 'sticky', 'created', 'comment_count', 'last_comment_timestamp'));
      foreach ($entity->taxonomy_forums as $language) {
        foreach ($language as $delta) {
          $query->values(array(
            'nid' => $entity->nid,
            'title' => $entity->title,
            'tid' => $delta['value'],
            'sticky' => $entity->sticky,
            'created' => $entity->created,
            'comment_count' => 0,
            'last_comment_timestamp' => $entity->created,
          ));
        }
      }
      $query->execute();
      // The logic for determining last_comment_count is fairly complex, so
      // call _forum_update_forum_index() too.
      _forum_update_forum_index($entity->nid);
    }
  }
";}s:26:"hook_field_info_max_weight";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_info_max_weight";s:10:"definition";s:68:"function hook_field_info_max_weight($entity_type, $bundle, $context)";s:11:"description";s:75:"Returns the maximum weight for the entity components handled by the module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:196:"
  $weights = array();

  foreach (my_module_entity_additions($entity_type, $bundle, $context) as $addition) {
    $weights[] = $addition['weight'];
  }

  return $weights ? max($weights) : NULL;
";}s:24:"hook_field_display_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_display_alter";s:10:"definition";s:54:"function hook_field_display_alter(&$display, $context)";s:11:"description";s:64:"Alters the display settings of a field before it gets displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:416:"
  // Leave field labels out of the search index.
  // Note: The check against $context['entity_type'] == 'node' could be avoided
  // by using hook_field_display_node_alter() instead of
  // hook_field_display_alter(), resulting in less function calls when
  // rendering non-node entities.
  if ($context['entity_type'] == 'node' && $context['view_mode'] == 'search_index') {
    $display['label'] = 'hidden';
  }
";}s:36:"hook_field_display_ENTITY_TYPE_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_field_display_ENTITY_TYPE_alter";s:10:"definition";s:66:"function hook_field_display_ENTITY_TYPE_alter(&$display, $context)";s:11:"description";s:87:"Alters the display settings of a field on a given entity type before it gets displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:137:"
  // Leave field labels out of the search index.
  if ($context['view_mode'] == 'search_index') {
    $display['label'] = 'hidden';
  }
";}s:37:"hook_field_extra_fields_display_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_field_extra_fields_display_alter";s:10:"definition";s:68:"function hook_field_extra_fields_display_alter(&$displays, $context)";s:11:"description";s:75:"Alters the display settings of pseudo-fields before an entity is displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:141:"
  if ($context['entity_type'] == 'taxonomy_term' && $context['view_mode'] == 'full') {
    $displays['description']['visible'] = FALSE;
  }
";}s:46:"hook_field_widget_properties_ENTITY_TYPE_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:46:"hook_field_widget_properties_ENTITY_TYPE_alter";s:10:"definition";s:75:"function hook_field_widget_properties_ENTITY_TYPE_alter(&$widget, $context)";s:11:"description";s:71:"Alters the widget properties of a field instance on a given entity type";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:223:"
  // Change a widget's type according to the time of day.
  $field = $context['field'];
  if ($field['field_name'] == 'field_foo') {
    $time = date('H');
    $widget['type'] = $time < 12 ? 'widget_am' : 'widget_pm';
  }
";}s:23:"hook_field_create_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_create_field";s:10:"definition";s:40:"function hook_field_create_field($field)";s:11:"description";s:29:"Act on a field being created.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:26:"hook_field_create_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_create_instance";s:10:"definition";s:46:"function hook_field_create_instance($instance)";s:11:"description";s:38:"Act on a field instance being created.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:24:"hook_field_update_forbid";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_update_forbid";s:10:"definition";s:66:"function hook_field_update_forbid($field, $prior_field, $has_data)";s:11:"description";s:37:"Forbid a field update from occurring.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:907:"
  // A 'list' field stores integer keys mapped to display values. If
  // the new field will have fewer values, and any data exists for the
  // abandoned keys, the field will have no way to display them. So,
  // forbid such an update.
  if ($has_data && count($field['settings']['allowed_values']) < count($prior_field['settings']['allowed_values'])) {
    // Identify the keys that will be lost.
    $lost_keys = array_diff(array_keys($field['settings']['allowed_values']), array_keys($prior_field['settings']['allowed_values']));
    // If any data exist for those keys, forbid the update.
    $query = new EntityFieldQuery();
    $found = $query
      ->fieldCondition($prior_field['field_name'], 'value', $lost_keys)
      ->range(0, 1)
      ->execute();
    if ($found) {
      throw new FieldUpdateForbiddenException("Cannot update a list field not to include keys with existing data");
    }
  }
";}s:23:"hook_field_update_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_update_field";s:10:"definition";s:65:"function hook_field_update_field($field, $prior_field, $has_data)";s:11:"description";s:29:"Act on a field being updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:127:"
  // Reset the static value that keeps track of allowed values for list fields.
  drupal_static_reset('list_allowed_values');
";}s:23:"hook_field_delete_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_delete_field";s:10:"definition";s:40:"function hook_field_delete_field($field)";s:11:"description";s:29:"Act on a field being deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:26:"hook_field_update_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_update_instance";s:10:"definition";s:63:"function hook_field_update_instance($instance, $prior_instance)";s:11:"description";s:38:"Act on a field instance being updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:26:"hook_field_delete_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_field_delete_instance";s:10:"definition";s:46:"function hook_field_delete_instance($instance)";s:11:"description";s:38:"Act on a field instance being deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:21:"hook_field_read_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_field_read_field";s:10:"definition";s:38:"function hook_field_read_field($field)";s:11:"description";s:50:"Act on field records being read from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:24:"hook_field_read_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_read_instance";s:10:"definition";s:44:"function hook_field_read_instance($instance)";s:11:"description";s:51:"Act on a field record being read from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:33:"
  // @todo Needs function body.
";}s:22:"hook_field_purge_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_field_purge_field";s:10:"definition";s:39:"function hook_field_purge_field($field)";s:11:"description";s:41:"Acts when a field record is being purged.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:90:"
  db_delete('my_module_field_info')
    ->condition('id', $field['id'])
    ->execute();
";}s:25:"hook_field_purge_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_field_purge_instance";s:10:"definition";s:45:"function hook_field_purge_instance($instance)";s:11:"description";s:43:"Acts when a field instance is being purged.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:102:"
  db_delete('my_module_field_instance_info')
    ->condition('id', $instance['id'])
    ->execute();
";}s:30:"hook_field_storage_purge_field";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_field_storage_purge_field";s:10:"definition";s:47:"function hook_field_storage_purge_field($field)";s:11:"description";s:63:"Remove field storage information when a field record is purged.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:184:"
  $table_name = _field_sql_storage_tablename($field);
  $revision_name = _field_sql_storage_revision_tablename($field);
  db_drop_table($table_name);
  db_drop_table($revision_name);
";}s:39:"hook_field_storage_purge_field_instance";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_field_storage_purge_field_instance";s:10:"definition";s:59:"function hook_field_storage_purge_field_instance($instance)";s:11:"description";s:65:"Remove field storage information when a field instance is purged.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:102:"
  db_delete('my_module_field_instance_info')
    ->condition('id', $instance['id'])
    ->execute();
";}s:24:"hook_field_storage_purge";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_storage_purge";s:10:"definition";s:75:"function hook_field_storage_purge($entity_type, $entity, $field, $instance)";s:11:"description";s:59:"Remove field storage information when field data is purged.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:439:"
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);

  $table_name = _field_sql_storage_tablename($field);
  $revision_name = _field_sql_storage_revision_tablename($field);
  db_delete($table_name)
    ->condition('entity_type', $entity_type)
    ->condition('entity_id', $id)
    ->execute();
  db_delete($revision_name)
    ->condition('entity_type', $entity_type)
    ->condition('entity_id', $id)
    ->execute();
";}s:17:"hook_field_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_field_access";s:10:"definition";s:72:"function hook_field_access($op, $field, $entity_type, $entity, $account)";s:11:"description";s:55:"Determine whether the user has access to a given field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:28:"public://hooks/field.api.php";s:4:"body";s:150:"
  if ($field['field_name'] == 'field_of_interest' && $op == 'edit') {
    return user_access('edit field of interest', $account);
  }
  return TRUE;
";}s:17:"hook_options_list";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_options_list";s:10:"definition";s:68:"function hook_options_list($field, $instance, $entity_type, $entity)";s:11:"description";s:56:"Returns the list of options to be displayed for a field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"field";s:9:"file_path";s:30:"public://hooks/options.api.php";s:4:"body";s:946:"
  // Sample structure.
  $options = array(
    0 => t('Zero'),
    1 => t('One'),
    2 => t('Two'),
    3 => t('Three'),
  );

  // Sample structure with groups. Only one level of nesting is allowed. This
  // is only supported by the 'options_select' widget. Other widgets will
  // flatten the array.
  $options = array(
    t('First group') => array(
      0 => t('Zero'),
    ),
    t('Second group') => array(
      1 => t('One'),
      2 => t('Two'),
    ),
    3 => t('Three'),
  );

  // In actual implementations, the array of options will most probably depend
  // on properties of the field. Example from taxonomy.module:
  $options = array();
  foreach ($field['settings']['allowed_values'] as $tree) {
    $terms = taxonomy_get_tree($tree['vid'], $tree['parent']);
    if ($terms) {
      foreach ($terms as $term) {
        $options[$term->tid] = str_repeat('-', $term->depth) . $term->name;
      }
    }
  }

  return $options;
";}}s:16:"field_collection";a:8:{s:36:"hook_field_collection_is_empty_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_field_collection_is_empty_alter";s:10:"definition";s:90:"function hook_field_collection_is_empty_alter(&$is_empty, FieldCollectionItemEntity $item)";s:11:"description";s:58:"Alter whether a field collection item is considered empty.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:85:"
  if (isset($item->my_field) && empty($item->my_field)) {
    $is_empty = TRUE;
  }
";}s:31:"hook_field_collection_item_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_collection_item_load";s:10:"definition";s:57:"function hook_field_collection_item_load(array $entities)";s:11:"description";s:57:"Acts on field collections being loaded from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:202:"
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
";}s:33:"hook_field_collection_item_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_collection_item_insert";s:10:"definition";s:92:"function hook_field_collection_item_insert(FieldCollectionItemEntity $field_collection_item)";s:11:"description";s:50:"Responds when a field collection item is inserted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:182:"
  db_insert('mytable')->fields(array(
    'id' => entity_id('field_collection_item', $field_collection_item),
    'extra' => print_r($field_collection_item, TRUE),
  ))->execute();
";}s:34:"hook_field_collection_item_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_field_collection_item_presave";s:10:"definition";s:93:"function hook_field_collection_item_presave(FieldCollectionItemEntity $field_collection_item)";s:11:"description";s:58:"Acts on a field collection item being inserted or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:41:"
  $field_collection_item->name = 'foo';
";}s:33:"hook_field_collection_item_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_collection_item_update";s:10:"definition";s:92:"function hook_field_collection_item_update(FieldCollectionItemEntity $field_collection_item)";s:11:"description";s:50:"Responds to a field collection item being updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:193:"
  db_update('mytable')
    ->fields(array('extra' => print_r($field_collection_item, TRUE)))
    ->condition('id', entity_id('field_collection_item', $field_collection_item))
    ->execute();
";}s:33:"hook_field_collection_item_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_collection_item_delete";s:10:"definition";s:92:"function hook_field_collection_item_delete(FieldCollectionItemEntity $field_collection_item)";s:11:"description";s:43:"Responds to field collection item deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:124:"
  db_delete('mytable')
    ->condition('pid', entity_id('field_collection_item', $field_collection_item))
    ->execute();
";}s:31:"hook_field_collection_item_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_collection_item_view";s:10:"definition";s:87:"function hook_field_collection_item_view($field_collection_item, $view_mode, $langcode)";s:11:"description";s:72:"Act on a field collection item that is being assembled before rendering.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:177:"
  $field_collection_item->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
";}s:32:"hook_field_collection_item_label";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_field_collection_item_label";s:10:"definition";s:63:"function hook_field_collection_item_label($item, $host, $field)";s:11:"description";s:39:"Alter the label for a field collection.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:16:"field_collection";s:9:"file_path";s:39:"public://hooks/field_collection.api.php";s:4:"body";s:300:"
  switch ($item->field_name) {
    case 'field_my_first_collection':
      $item_wrapper = entity_metadata_wrapper('field_collection_item', $item);

      $title  = $item_wrapper->field_title->value();
      $author = $item_wrapper->field_author->value();

      return "{$title} by {$author}";
  }
";}}s:24:"field_formatter_settings";a:2:{s:40:"hook_field_formatter_settings_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_field_formatter_settings_form_alter";s:10:"definition";s:88:"function hook_field_formatter_settings_form_alter(array &$settings_form, array $context)";s:11:"description";s:51:"Alter the form elements for a formatter's settings.";s:11:"destination";s:17:"%module.field.inc";s:12:"dependencies";a:0:{}s:5:"group";s:24:"field_formatter_settings";s:9:"file_path";s:47:"public://hooks/field_formatter_settings.api.php";s:4:"body";s:2:"

";}s:43:"hook_field_formatter_settings_summary_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_field_formatter_settings_summary_alter";s:10:"definition";s:79:"function hook_field_formatter_settings_summary_alter(&$summary, array $context)";s:11:"description";s:74:"Alter the short summary for the current formatter settings of an instance.";s:11:"destination";s:17:"%module.field.inc";s:12:"dependencies";a:0:{}s:5:"group";s:24:"field_formatter_settings";s:9:"file_path";s:47:"public://hooks/field_formatter_settings.api.php";s:4:"body";s:2:"

";}}s:11:"field_group";a:11:{s:32:"hook_field_group_format_settings";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_field_group_format_settings";s:10:"definition";s:49:"function hook_field_group_format_settings($group)";s:11:"description";s:46:"Implements hook_field_group_format_settings().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:3882:"
  // Add a wrapper for extra settings to use by others.
  $form = array(
    'instance_settings' => array(
      '#tree' => TRUE,
      '#weight' => 2,
    ),
  );

  $field_group_types = field_group_formatter_info();
  $mode = $group->mode == 'form' ? 'form' : 'display';
  $formatter = $field_group_types[$mode][$group->format_type];

  // Add the required formatter type selector.
  if (isset($formatter['format_types'])) {
    $form['formatter'] = array(
      '#title' => t('Fieldgroup settings'),
      '#type' => 'select',
      '#options' => drupal_map_assoc($formatter['format_types']),
      '#default_value' => isset($group->format_settings['formatter']) ? $group->format_settings['formatter'] : $formatter['default_formatter'],
      '#weight' => 1,
    );
  }
  if ($mode == 'form') {
    $form['instance_settings']['required_fields'] = array(
      '#type' => 'checkbox',
      '#title' => t('Mark group for required fields.'),
      '#default_value' => isset($group->format_settings['instance_settings']['required_fields']) ? $group->format_settings['instance_settings']['required_fields'] : (isset($formatter['instance_settings']['required_fields']) ? $formatter['instance_settings']['required_fields'] : ''),
      '#weight' => 2,
    );
  }
  $form['instance_settings']['classes'] = array(
    '#title' => t('Extra CSS classes'),
    '#type' => 'textfield',
    '#default_value' => isset($group->format_settings['instance_settings']['classes']) ? $group->format_settings['instance_settings']['classes'] : (isset($formatter['instance_settings']['classes']) ? $formatter['instance_settings']['classes'] : ''),
    '#weight' => 3,
    '#element_validate' => array('field_group_validate_css_class'),
  );
  $form['instance_settings']['description'] = array(
    '#title' => t('Description'),
    '#type' => 'textarea',
    '#default_value' => isset($group->format_settings['instance_settings']['description']) ? $group->format_settings['instance_settings']['description'] : (isset($formatter['instance_settings']['description']) ? $formatter['instance_settings']['description'] : ''),
    '#weight' => 0,
  );

  // Add optional instance_settings.
  switch ($group->format_type) {
    case 'div':
      $form['instance_settings']['effect'] = array(
        '#title' => t('Effect'),
        '#type' => 'select',
        '#options' => array('none' => t('None'), 'blind' => t('Blind')),
        '#default_value' => isset($group->format_settings['instance_settings']['effect']) ? $group->format_settings['instance_settings']['effect'] : $formatter['instance_settings']['effect'],
        '#weight' => 2,
      );
      $form['instance_settings']['speed'] = array(
        '#title' => t('Speed'),
        '#type' => 'select',
        '#options' => array('none' => t('None'), 'slow' => t('Slow'), 'fast' => t('Fast')),
        '#default_value' => isset($group->format_settings['instance_settings']['speed']) ? $group->format_settings['instance_settings']['speed'] : $formatter['instance_settings']['speed'],
        '#weight' => 3,
      );
      break;
    case 'fieldset':
      $form['instance_settings']['classes'] = array(
        '#title' => t('Extra CSS classes'),
        '#type' => 'textfield',
        '#default_value' => isset($group->format_settings['instance_settings']['classes']) ? $group->format_settings['instance_settings']['classes'] : $formatter['instance_settings']['classes'],
        '#weight' => 3,
        '#element_validate' => array('field_group_validate_css_class'),
      );
      break;
    case 'tabs':
    case 'htabs':
    case 'accordion':
      unset($form['instance_settings']['description']);
      if (isset($form['instance_settings']['required_fields'])) {
        unset($form['instance_settings']['required_fields']);
      }
      break;
    case 'tab':
    case 'htab':
    case 'accordion-item':
    default:
  }

  return $form;
";}s:27:"hook_field_group_pre_render";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_field_group_pre_render";s:10:"definition";s:65:"function hook_field_group_pre_render(& $element, $group, & $form)";s:11:"description";s:41:"Implements hook_field_group_pre_render().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:1646:"

  // You can prepare some variables to use in the logic.
  $view_mode = isset($form['#view_mode']) ? $form['#view_mode'] : 'form';
  $id = $form['#entity_type'] . '_' . $form['#bundle'] . '_' . $view_mode . '_' . $group->group_name;

  // Each formatter type can have whole different set of element properties.
  switch ($group->format_type) {

    // Normal or collapsible div.
    case 'div':
      $effect = isset($group->format_settings['instance_settings']['effect']) ? $group->format_settings['instance_settings']['effect'] : 'none';
      $speed = isset($group->format_settings['instance_settings']['speed']) ? $group->format_settings['instance_settings']['speed'] : 'none';
      $add = array(
        '#type' => 'markup',
        '#weight' => $group->weight,
        '#id' => $id,
      );
      $classes .= " speed-$speed effect-$effect";
      if ($group->format_settings['formatter'] != 'open') {
        $add['#prefix'] = '<div class="field-group-format ' . $classes . '">
          <span class="field-group-format-toggler">' . check_plain(t($group->label)) . '</span>
          <div class="field-group-format-wrapper" style="display: none;">';
        $add['#suffix'] = '</div></div>';
      }
      else {
        $add['#prefix'] = '<div class="field-group-format ' . $group->group_name . ' ' . $classes . '">';
        $add['#suffix'] = '</div>';
      }
      if (!empty($description)) {
        $add['#prefix'] .= '<div class="description">' . $description . '</div>';
      }
      $element += $add;

      if ($effect == 'blind') {
        drupal_add_library('system', 'effects.blind');
      }

      break;
    break;
  }
";}s:33:"hook_field_group_pre_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_group_pre_render_alter";s:10:"definition";s:70:"function hook_field_group_pre_render_alter(&$element, $group, & $form)";s:11:"description";s:41:"Implements hook_field_group_pre_render().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:108:"

  if ($group->format_type == 'htab') {
    $element['#theme_wrappers'] = array('my_horizontal_tab');
  }

";}s:39:"hook_field_group_build_pre_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_field_group_build_pre_render_alter";s:10:"definition";s:60:"function hook_field_group_build_pre_render_alter(& $element)";s:11:"description";s:53:"Implements hook_field_group_build_pre_render_alter().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:686:"

  // Prepare variables.
  $display = isset($element['#view_mode']);
  $groups = array_keys($element['#groups']);

  // Example from field_group itself to unset empty elements.
  if ($display) {
    foreach (element_children($element) as $name) {
      if (in_array($name, $groups)) {
        if (field_group_field_group_is_empty($element[$name], $groups)) {
          unset($element[$name]);
        }
      }
    }
  }

  // You might include additional javascript files and stylesheets.
  $element['#attached']['js'][] = drupal_get_path('module', 'field_group') . '/field_group.js';
  $element['#attached']['css'][] = drupal_get_path('module', 'field_group') . '/field_group.css';

";}s:31:"hook_field_group_format_summary";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_group_format_summary";s:10:"definition";s:48:"function hook_field_group_format_summary($group)";s:11:"description";s:45:"Implements hook_field_group_format_summary().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:97:"
  $output = '';
  // Create additional summary or change the default setting.
  return $output;
";}s:22:"hook_ctools_plugin_api";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_ctools_plugin_api";s:10:"definition";s:46:"function hook_ctools_plugin_api($module, $api)";s:11:"description";s:35:"Implement hook_ctools_plugin_api().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:98:"
  if ($module == 'field_group' && $api == 'field_group') {
    return array('version' => 1);
  }
";}s:21:"hook_field_group_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_field_group_info";s:10:"definition";s:32:"function hook_field_group_info()";s:11:"description";s:35:"Implements hook_field_group_info().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:2:"

";}s:27:"hook_field_group_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_field_group_info_alter";s:10:"definition";s:46:"function hook_field_group_info_alter(&$groups)";s:11:"description";s:60:"Alter the field group definitions provided by other modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:185:"
  if (!empty($groups['group_issue_metadata|node|project_issue|form'])) {
    $groups['group_issue_metadata|node|project_issue|form']->data['children'][] = 'taxonomy_vocabulary_9';
  }
";}s:35:"hook_field_group_update_field_group";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_field_group_update_field_group";s:10:"definition";s:52:"function hook_field_group_update_field_group($group)";s:11:"description";s:49:"Implements hook_field_group_update_field_group().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:48:"
  // Delete extra data depending on the group.
";}s:35:"hook_field_group_delete_field_group";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_field_group_delete_field_group";s:10:"definition";s:52:"function hook_field_group_delete_field_group($group)";s:11:"description";s:49:"Implements hook_field_group_delete_field_group().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:48:"
  // Delete extra data depending on the group.
";}s:35:"hook_field_group_create_field_group";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_field_group_create_field_group";s:10:"definition";s:52:"function hook_field_group_create_field_group($group)";s:11:"description";s:49:"Implements hook_field_group_create_field_group().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"field_group";s:9:"file_path";s:34:"public://hooks/field_group.api.php";s:4:"body";s:48:"
  // Create extra data depending on the group.
";}}s:8:"field_ui";a:5:{s:24:"hook_field_settings_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_field_settings_form";s:10:"definition";s:63:"function hook_field_settings_form($field, $instance, $has_data)";s:11:"description";s:38:"Add settings to a field settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"field_ui";s:9:"file_path";s:31:"public://hooks/field_ui.api.php";s:4:"body";s:408:"
  $settings = $field['settings'];
  $form['max_length'] = array(
    '#type' => 'textfield',
    '#title' => t('Maximum length'),
    '#default_value' => $settings['max_length'],
    '#required' => FALSE,
    '#element_validate' => array('element_validate_integer_positive'),
    '#description' => t('The maximum length of the field in characters. Leave blank for an unlimited size.'),
  );
  return $form;
";}s:33:"hook_field_instance_settings_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_field_instance_settings_form";s:10:"definition";s:61:"function hook_field_instance_settings_form($field, $instance)";s:11:"description";s:48:"Add settings to an instance field settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"field_ui";s:9:"file_path";s:31:"public://hooks/field_ui.api.php";s:4:"body";s:835:"
  $settings = $instance['settings'];

  $form['text_processing'] = array(
    '#type' => 'radios',
    '#title' => t('Text processing'),
    '#default_value' => $settings['text_processing'],
    '#options' => array(
      t('Plain text'),
      t('Filtered text (user selects text format)'),
    ),
  );
  if ($field['type'] == 'text_with_summary') {
    $form['display_summary'] = array(
      '#type' => 'select',
      '#title' => t('Display summary'),
      '#options' => array(
        t('No'),
        t('Yes'),
      ),
      '#description' => t('Display the summary to allow the user to input a summary value. Hide the summary to automatically fill it with a trimmed portion from the main post.'),
      '#default_value' => !empty($settings['display_summary']) ? $settings['display_summary'] :  0,
    );
  }

  return $form;
";}s:31:"hook_field_widget_settings_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_field_widget_settings_form";s:10:"definition";s:59:"function hook_field_widget_settings_form($field, $instance)";s:11:"description";s:39:"Add settings to a widget settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"field_ui";s:9:"file_path";s:31:"public://hooks/field_ui.api.php";s:4:"body";s:638:"
  $widget = $instance['widget'];
  $settings = $widget['settings'];

  if ($widget['type'] == 'text_textfield') {
    $form['size'] = array(
      '#type' => 'textfield',
      '#title' => t('Size of textfield'),
      '#default_value' => $settings['size'],
      '#element_validate' => array('element_validate_integer_positive'),
      '#required' => TRUE,
    );
  }
  else {
    $form['rows'] = array(
      '#type' => 'textfield',
      '#title' => t('Rows'),
      '#default_value' => $settings['rows'],
      '#element_validate' => array('element_validate_integer_positive'),
      '#required' => TRUE,
    );
  }

  return $form;
";}s:34:"hook_field_formatter_settings_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_field_formatter_settings_form";s:10:"definition";s:95:"function hook_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state)";s:11:"description";s:53:"Specify the form elements for a formatter's settings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"field_ui";s:9:"file_path";s:31:"public://hooks/field_ui.api.php";s:4:"body";s:504:"
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $element = array();

  if ($display['type'] == 'text_trimmed' || $display['type'] == 'text_summary_or_trimmed') {
    $element['trim_length'] = array(
      '#title' => t('Length'),
      '#type' => 'textfield',
      '#size' => 20,
      '#default_value' => $settings['trim_length'],
      '#element_validate' => array('element_validate_integer_positive'),
      '#required' => TRUE,
    );
  }

  return $element;

";}s:37:"hook_field_formatter_settings_summary";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_field_formatter_settings_summary";s:10:"definition";s:77:"function hook_field_formatter_settings_summary($field, $instance, $view_mode)";s:11:"description";s:73:"Return a short summary for the current formatter settings of an instance.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"field_ui";s:9:"file_path";s:31:"public://hooks/field_ui.api.php";s:4:"body";s:307:"
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $summary = '';

  if ($display['type'] == 'text_trimmed' || $display['type'] == 'text_summary_or_trimmed') {
    $summary = t('Length: @chars chars', array('@chars' => $settings['trim_length']));
  }

  return $summary;
";}}s:4:"file";a:2:{s:25:"hook_file_download_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_file_download_access";s:10:"definition";s:69:"function hook_file_download_access($file_item, $entity_type, $entity)";s:11:"description";s:33:"Control download access to files.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"file";s:9:"file_path";s:27:"public://hooks/file.api.php";s:4:"body";s:78:"
  if ($entity_type == 'node') {
    return node_access('view', $entity);
  }
";}s:31:"hook_file_download_access_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_file_download_access_alter";s:10:"definition";s:85:"function hook_file_download_access_alter(&$grants, $file_item, $entity_type, $entity)";s:11:"description";s:50:"Alter the access rules applied to a file download.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"file";s:9:"file_path";s:27:"public://hooks/file.api.php";s:4:"body";s:162:"
  // For our example module, we always enforce the rules set by node module.
  if (isset($grants['node'])) {
    $grants = array('node' => $grants['node']);
  }
";}}s:11:"file_entity";a:22:{s:22:"hook_ctools_plugin_api";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_ctools_plugin_api";s:10:"definition";s:45:"function hook_ctools_plugin_api($owner, $api)";s:11:"description";s:53:"Declare that your module provides default file types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:95:"
  if ($owner == 'file_entity' && $api == 'file_type') {
    return array('version' => 1);
  }
";}s:23:"hook_file_default_types";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_file_default_types";s:10:"definition";s:34:"function hook_file_default_types()";s:11:"description";s:26:"Define default file types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:358:"
  return array(
    'image' => (object) array(
      'api_version' => 1,
      'type' => 'image',
      'label' => t('Image'),
      'description' => t("An <em>Image</em> is a two-dimensional picture that has a similar appearance to some subject, usually a physical object or a person."),
      'mimetypes' => array(
        'image/*',
      ),
    ),
  );
";}s:29:"hook_file_default_types_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_file_default_types_alter";s:10:"definition";s:47:"function hook_file_default_types_alter(&$types)";s:11:"description";s:25:"Alter default file types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:51:"
  $types['image']->mimetypes[] = 'image/svg+xml';
";}s:24:"hook_file_formatter_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_file_formatter_info";s:10:"definition";s:35:"function hook_file_formatter_info()";s:11:"description";s:23:"Define file formatters.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:25:"
  // @todo Add example.
";}s:30:"hook_file_formatter_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_file_formatter_info_alter";s:10:"definition";s:47:"function hook_file_formatter_info_alter(&$info)";s:11:"description";s:39:"Perform alterations on file formatters.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:25:"
  // @todo Add example.
";}s:34:"hook_file_formatter_FORMATTER_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_file_formatter_FORMATTER_view";s:10:"definition";s:71:"function hook_file_formatter_FORMATTER_view($file, $display, $langcode)";s:11:"description";s:24:"@todo Add documentation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:1:"
";}s:38:"hook_file_formatter_FORMATTER_settings";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_file_formatter_FORMATTER_settings";s:10:"definition";s:79:"function hook_file_formatter_FORMATTER_settings($form, &$form_state, $settings)";s:11:"description";s:24:"@todo Add documentation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:1:"
";}s:24:"hook_file_displays_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_file_displays_alter";s:10:"definition";s:63:"function hook_file_displays_alter($displays, $file, $view_mode)";s:11:"description";s:24:"@todo Add documentation.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:1:"
";}s:14:"hook_file_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_file_view";s:10:"definition";s:53:"function hook_file_view($file, $view_mode, $langcode)";s:11:"description";s:24:"@todo Add documentation.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:1:"
";}s:20:"hook_file_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_file_view_alter";s:10:"definition";s:44:"function hook_file_view_alter($build, $type)";s:11:"description";s:24:"@todo Add documentation.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:1:"
";}s:20:"hook_file_operations";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_file_operations";s:10:"definition";s:31:"function hook_file_operations()";s:11:"description";s:25:"Add mass file operations.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:152:"
  $operations = array(
    'delete' => array(
      'label' => t('Delete selected files'),
      'callback' => NULL,
    ),
  );
  return $operations;
";}s:23:"hook_file_entity_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_file_entity_access";s:10:"definition";s:54:"function hook_file_entity_access($op, $file, $account)";s:11:"description";s:25:"Control access to a file.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:338:"
  $type = is_string($file) ? $file : $file->type;

  if ($op !== 'create' && (REQUEST_TIME - $file->timestamp) < 3600) {
    // If the file was uploaded in the last hour, deny access to it.
    return FILE_ENTITY_ACCESS_DENY;
  }

  // Returning nothing from this function would have the same effect.
  return FILE_ENTITY_ACCESS_IGNORE;
";}s:35:"hook_query_file_entity_access_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_query_file_entity_access_alter";s:10:"definition";s:76:"function hook_query_file_entity_access_alter(QueryAlterableInterface $query)";s:11:"description";s:36:"Control access to listings of files.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:130:"
  // Only show files that have been uploaded more than an hour ago.
  $query->condition('timestamp', REQUEST_TIME - 3600, '<=');
";}s:30:"hook_file_entity_search_result";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_file_entity_search_result";s:10:"definition";s:46:"function hook_file_entity_search_result($file)";s:11:"description";s:49:"Act on a file being displayed as a search result.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:231:"
  $file_usage_count = db_query('SELECT count FROM {file_usage} WHERE fid = :fid', array('fid' => $file->fid))->fetchField();
  return array(
    'file_usage_count' => format_plural($file_usage_count, '1 use', '@count uses'),
  );
";}s:22:"hook_file_update_index";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_file_update_index";s:10:"definition";s:38:"function hook_file_update_index($file)";s:11:"description";s:42:"Act on a file being indexed for searching.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:257:"
  $text = '';
  $uses = db_query('SELECT module, count FROM {file_usage} WHERE fid = :fid', array(':fid' => $file->fid));
  foreach ($uses as $use) {
    $text .= '<h2>' . check_plain($use->module) . '</h2>' . check_plain($use->count);
  }
  return $text;
";}s:17:"hook_file_ranking";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_file_ranking";s:10:"definition";s:28:"function hook_file_ranking()";s:11:"description";s:72:"Provide additional methods of scoring for core search results for files.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:755:"
  // If voting is disabled, we can avoid returning the array, no hard feelings.
  if (variable_get('vote_file_enabled', TRUE)) {
    return array(
      'vote_average' => array(
        'title' => t('Average vote'),
        // Note that we use i.sid, the search index's search item id, rather
        // than fm.fid.
        'join' => 'LEFT JOIN {vote_file_data} vote_file_data ON vote_file_data.fid = i.sid',
        // The highest possible score should be 1,
        // and the lowest possible score, always 0, should be 0.
        'score' => 'vote_file_data.average / CAST(%f AS DECIMAL)',
        // Pass in the highest possible voting score as a decimal argument.
        'arguments' => array(variable_get('vote_score_max', 5)),
      ),
    );
  }
";}s:32:"hook_file_download_headers_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_file_download_headers_alter";s:10:"definition";s:65:"function hook_file_download_headers_alter(array &$headers, $file)";s:11:"description";s:28:"Alter file download headers.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:150:"
  // Instead of being powered by PHP, tell the world this resource was powered
  // by your custom module!
  $headers['X-Powered-By'] = 'My Module';
";}s:18:"hook_file_transfer";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_file_transfer";s:10:"definition";s:49:"function hook_file_transfer($uri, array $headers)";s:11:"description";s:33:"React to a file being downloaded.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:165:"
  // Redirect a download for an S3 file to the actual location.
  if (file_uri_scheme($uri) == 's3') {
    $url = file_create_url($uri);
    drupal_goto($url);
  }
";}s:14:"hook_file_type";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_file_type";s:10:"definition";s:30:"function hook_file_type($file)";s:11:"description";s:69:"Decides which file type (bundle) should be assigned to a file entity.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:145:"
  // Assign all files uploaded by anonymous users to a special file type.
  if (user_is_anonymous()) {
    return array('untrusted_files');
  }
";}s:20:"hook_file_type_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_file_type_alter";s:10:"definition";s:45:"function hook_file_type_alter(&$types, $file)";s:11:"description";s:57:"Alters list of file types that can be assigned to a file.";s:11:"destination";s:16:"%module.file.inc";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:76:"
  // Choose a specific, non-first, file type.
  $types = array($types[4]);
";}s:23:"hook_file_metadata_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_file_metadata_info";s:10:"definition";s:34:"function hook_file_metadata_info()";s:11:"description";s:30:"Provides metadata information.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:2:"

";}s:29:"hook_file_metadata_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_file_metadata_info_alter";s:10:"definition";s:40:"function hook_file_metadata_info_alter()";s:11:"description";s:28:"Alters metadata information.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"file_entity";s:9:"file_path";s:34:"public://hooks/file_entity.api.php";s:4:"body";s:2:"

";}}s:6:"filter";a:9:{s:16:"hook_filter_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_filter_info";s:10:"definition";s:27:"function hook_filter_info()";s:11:"description";s:23:"Define content filters.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:4:{i:0;s:24:"callback_filter_settings";i:1;s:23:"callback_filter_prepare";i:2;s:23:"callback_filter_process";i:3;s:20:"callback_filter_tips";}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:931:"
  $filters['filter_html'] = array(
    'title' => t('Limit allowed HTML tags'),
    'description' => t('Allows you to restrict the HTML tags the user can use. It will also remove harmful content such as JavaScript events, JavaScript URLs and CSS styles from those tags that are not removed.'),
    'process callback' => '_filter_html',
    'settings callback' => '_filter_html_settings',
    'default settings' => array(
      'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      'filter_html_help' => 1,
      'filter_html_nofollow' => 0,
    ),
    'tips callback' => '_filter_html_tips',
  );
  $filters['filter_autop'] = array(
    'title' => t('Convert line breaks'),
    'description' => t('Converts line breaks into HTML (i.e. &lt;br&gt; and &lt;p&gt;) tags.'),
    'process callback' => '_filter_autop',
    'tips callback' => '_filter_autop_tips',
  );
  return $filters;
";}s:22:"hook_filter_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_filter_info_alter";s:10:"definition";s:39:"function hook_filter_info_alter(&$info)";s:11:"description";s:42:"Perform alterations on filter definitions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:333:"
  // Replace the PHP evaluator process callback with an improved
  // PHP evaluator provided by a module.
  $info['php_code']['process callback'] = 'my_module_php_evaluator';

  // Alter the default settings of the URL filter provided by core.
  $info['filter_url']['default settings'] = array(
    'filter_url_length' => 100,
  );
";}s:24:"callback_filter_settings";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:24:"callback_filter_settings";s:10:"definition";s:93:"function callback_filter_settings($form, &$form_state, $filter, $format, $defaults, $filters)";s:11:"description";s:44:"Provide a settings form for filter settings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:253:"
  $filter->settings += $defaults;

  $elements = array();
  $elements['nofollow'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add rel="nofollow" to all links'),
    '#default_value' => $filter->settings['nofollow'],
  );
  return $elements;
";}s:23:"callback_filter_prepare";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:23:"callback_filter_prepare";s:10:"definition";s:87:"function callback_filter_prepare($text, $filter, $format, $langcode, $cache, $cache_id)";s:11:"description";s:54:"Provide prepared text with special characters escaped.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:152:"
  // Escape <code> and </code> tags.
  $text = preg_replace('|<code>(.+?)</code>|se', "[codefilter_code]$1[/codefilter_code]", $text);
  return $text;
";}s:23:"callback_filter_process";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:23:"callback_filter_process";s:10:"definition";s:87:"function callback_filter_process($text, $filter, $format, $langcode, $cache, $cache_id)";s:11:"description";s:56:"Provide text filtered to conform to the supplied format.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:118:"
  $text = preg_replace('|\[codefilter_code\](.+?)\[/codefilter_code\]|se', "<pre>$1</pre>", $text);

  return $text;
";}s:20:"callback_filter_tips";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:20:"callback_filter_tips";s:10:"definition";s:54:"function callback_filter_tips($filter, $format, $long)";s:11:"description";s:30:"Return help text for a filter.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:338:"
 if ($long) {
    return t('Lines and paragraphs are automatically recognized. The &lt;br /&gt; line break, &lt;p&gt; paragraph and &lt;/p&gt; close paragraph tags are inserted automatically. If paragraphs are not recognized simply add a couple blank lines.');
  }
  else {
    return t('Lines and paragraphs break automatically.');
  }
";}s:25:"hook_filter_format_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_filter_format_insert";s:10:"definition";s:43:"function hook_filter_format_insert($format)";s:11:"description";s:56:"Perform actions when a new text format has been created.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:29:"
  mymodule_cache_rebuild();
";}s:25:"hook_filter_format_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_filter_format_update";s:10:"definition";s:43:"function hook_filter_format_update($format)";s:11:"description";s:52:"Perform actions when a text format has been updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:29:"
  mymodule_cache_rebuild();
";}s:26:"hook_filter_format_disable";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_filter_format_disable";s:10:"definition";s:44:"function hook_filter_format_disable($format)";s:11:"description";s:53:"Perform actions when a text format has been disabled.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"filter";s:9:"file_path";s:29:"public://hooks/filter.api.php";s:4:"body";s:29:"
  mymodule_cache_rebuild();
";}}s:11:"focal_point";a:8:{s:45:"hook_focal_point_supported_widget_types_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:45:"hook_focal_point_supported_widget_types_alter";s:10:"definition";s:67:"function hook_focal_point_supported_widget_types_alter(&$supported)";s:11:"description";s:41:"Alter an array of supported widget types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:52:"
  $supported[] = 'mymodule_my_custom_widget_type';
";}s:43:"hook_focal_point_supported_file_types_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_focal_point_supported_file_types_alter";s:10:"definition";s:65:"function hook_focal_point_supported_file_types_alter(&$supported)";s:11:"description";s:46:"Alter an array of supported file entity types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:45:"
  $supported[] = 'custom_file_entity_type';
";}s:36:"hook_focal_point_default_method_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_focal_point_default_method_info";s:10:"definition";s:47:"function hook_focal_point_default_method_info()";s:11:"description";s:49:"Provide a default focal point calculation method.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:132:"
  $info['example'] = array(
    'label' => t('Example module'),
    'callback' => 'callback_get_focal_point',
  );
  return $info;
";}s:42:"hook_focal_point_default_method_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:42:"hook_focal_point_default_method_info_alter";s:10:"definition";s:59:"function hook_focal_point_default_method_info_alter(&$info)";s:11:"description";s:50:"Alter the default focal point calculation methods.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:68:"
  $info['example']['callback'] = 'example_get_better_focal_point';
";}s:21:"hook_focal_point_save";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_focal_point_save";s:10:"definition";s:40:"function hook_focal_point_save($element)";s:11:"description";s:48:"Hook invoked after saving a Focal_Point element.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:22:"
  // Your code here.
";}s:23:"hook_focal_point_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_focal_point_delete";s:10:"definition";s:38:"function hook_focal_point_delete($fid)";s:11:"description";s:49:"Hook invoked after deleting a Focal_Point record.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:22:"
  // Your code here.
";}s:31:"hook_focal_point_pre_save_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_focal_point_pre_save_alter";s:10:"definition";s:84:"function hook_focal_point_pre_save_alter(&$focal_point, $fid, $original_focal_point)";s:11:"description";s:56:"Alters the Focal Point before saving it to the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:161:"
  // Alter the focal point for FID = 1 if the original focal point is empty.
  if (1 == $fid && empty($original_focal_point)) {
    $focal_point = '10,10';
  }
";}s:24:"callback_get_focal_point";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:24:"callback_get_focal_point";s:10:"definition";s:41:"function callback_get_focal_point($image)";s:11:"description";s:34:"Callculate an image's focal point.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:11:"focal_point";s:9:"file_path";s:34:"public://hooks/focal_point.api.php";s:4:"body";s:144:"
  // Return a random point on the image.
  return (array(
    mt_rand(0, $image->info['width']),
    mt_rand(0, $image->info['height']),
  ));
";}}s:6:"system";a:140:{s:24:"callback_batch_operation";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:24:"callback_batch_operation";s:10:"definition";s:62:"function callback_batch_operation($MULTIPLE_PARAMS, &$context)";s:11:"description";s:33:"Perform a single batch operation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:2:{i:0;s:23:"callback_batch_finished";i:1;s:23:"callback_batch_finished";}s:5:"group";s:6:"system";s:9:"file_path";s:27:"public://hooks/form.api.php";s:4:"body";s:1447:"
  if (!isset($context['sandbox']['progress'])) {
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_node'] = 0;
    $context['sandbox']['max'] = db_query('SELECT COUNT(DISTINCT nid) FROM {node}')->fetchField();
  }

  // For this example, we decide that we can safely process
  // 5 nodes at a time without a timeout.
  $limit = 5;

  // With each pass through the callback, retrieve the next group of nids.
  $result = db_query_range("SELECT nid FROM {node} WHERE nid > %d ORDER BY nid ASC", $context['sandbox']['current_node'], 0, $limit);
  while ($row = db_fetch_array($result)) {

    // Here we actually perform our processing on the current node.
    $node = node_load($row['nid'], NULL, TRUE);
    $node->value1 = $options1;
    $node->value2 = $options2;
    node_save($node);

    // Store some result for post-processing in the finished callback.
    $context['results'][] = check_plain($node->title);

    // Update our progress information.
    $context['sandbox']['progress']++;
    $context['sandbox']['current_node'] = $node->nid;
    $context['message'] = t('Now processing %node', array('%node' => $node->title));
  }

  // Inform the batch engine that we are not finished,
  // and provide an estimation of the completion level we reached.
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
";}s:23:"callback_batch_finished";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:23:"callback_batch_finished";s:10:"definition";s:65:"function callback_batch_finished($success, $results, $operations)";s:11:"description";s:25:"Complete a batch process.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:24:"callback_batch_operation";}s:5:"group";s:6:"system";s:9:"file_path";s:27:"public://hooks/form.api.php";s:4:"body";s:694:"
  if ($success) {
    // Here we do something meaningful with the results.
    $message = t("!count items were processed.", array(
      '!count' => count($results),
      ));
    $message .= theme('item_list', array('items' => $results));
    drupal_set_message($message);
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array(
      '%error_operation' => $error_operation[0],
      '@arguments' => print_r($error_operation[1], TRUE)
    ));
    drupal_set_message($message, 'error');
  }
";}s:18:"hook_language_init";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_language_init";s:10:"definition";s:29:"function hook_language_init()";s:11:"description";s:71:"Allows modules to act after language initialization has been performed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:218:"
  global $language, $conf;

  switch ($language->language) {
    case 'it':
      $conf['site_name'] = 'Il mio sito Drupal';
      break;

    case 'fr':
      $conf['site_name'] = 'Mon site Drupal';
      break;
  }
";}s:32:"hook_language_switch_links_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_language_switch_links_alter";s:10:"definition";s:70:"function hook_language_switch_links_alter(array &$links, $type, $path)";s:11:"description";s:47:"Perform alterations on language switcher links.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:221:"
  global $language;

  if ($type == LANGUAGE_TYPE_CONTENT && isset($links[$language->language])) {
    foreach ($links[$language->language] as $link) {
      $link['attributes']['class'][] = 'active-language';
    }
  }
";}s:24:"hook_language_types_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_language_types_info";s:10:"definition";s:35:"function hook_language_types_info()";s:11:"description";s:22:"Define language types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:259:"
  return array(
    'custom_language_type' => array(
      'name' => t('Custom language'),
      'description' => t('A custom language type.'),
    ),
    'fixed_custom_language_type' => array(
      'fixed' => array('custom_language_provider'),
    ),
  );
";}s:30:"hook_language_types_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_language_types_info_alter";s:10:"definition";s:63:"function hook_language_types_info_alter(array &$language_types)";s:11:"description";s:38:"Perform alterations on language types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:161:"
  if (isset($language_types['custom_language_type'])) {
    $language_types['custom_language_type_custom']['description'] = t('A far better description.');
  }
";}s:30:"hook_language_negotiation_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_language_negotiation_info";s:10:"definition";s:41:"function hook_language_negotiation_info()";s:11:"description";s:38:"Define language negotiation providers.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:588:"
  return array(
    'custom_language_provider' => array(
      'callbacks' => array(
        'language' => 'custom_language_provider_callback',
        'switcher' => 'custom_language_switcher_callback',
        'url_rewrite' => 'custom_language_url_rewrite_callback',
      ),
      'file' => drupal_get_path('module', 'custom') . '/custom.module',
      'weight' => -4,
      'types' => array('custom_language_type'),
      'name' => t('Custom language negotiation provider'),
      'description' => t('This is a custom language negotiation provider.'),
      'cache' => 0,
    ),
  );
";}s:36:"hook_language_negotiation_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_language_negotiation_info_alter";s:10:"definition";s:73:"function hook_language_negotiation_info_alter(array &$language_providers)";s:11:"description";s:53:"Perform alterations on language negoiation providers.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:202:"
  if (isset($language_providers['custom_language_provider'])) {
    $language_providers['custom_language_provider']['config'] = 'admin/config/regional/language/configure/custom-language-provider';
  }
";}s:39:"hook_language_fallback_candidates_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_language_fallback_candidates_alter";s:10:"definition";s:77:"function hook_language_fallback_candidates_alter(array &$fallback_candidates)";s:11:"description";s:56:"Perform alterations on the language fallback candidates.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:31:"public://hooks/language.api.php";s:4:"body";s:63:"
  $fallback_candidates = array_reverse($fallback_candidates);
";}s:14:"hook_hook_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_hook_info";s:10:"definition";s:25:"function hook_hook_info()";s:11:"description";s:55:"Defines one or more hooks that are exposed by a module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:138:"
  $hooks['token_info'] = array(
    'group' => 'tokens',
  );
  $hooks['tokens'] = array(
    'group' => 'tokens',
  );
  return $hooks;
";}s:20:"hook_hook_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_hook_info_alter";s:10:"definition";s:38:"function hook_hook_info_alter(&$hooks)";s:11:"description";s:40:"Alter information from hook_hook_info().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:205:"
  // Our module wants to completely override the core tokens, so make
  // sure the core token hooks are not found.
  $hooks['token_info']['group'] = 'mytokens';
  $hooks['tokens']['group'] = 'mytokens';
";}s:16:"hook_entity_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_entity_info";s:10:"definition";s:27:"function hook_entity_info()";s:11:"description";s:72:"Inform the base system and the Field API about one or more entity types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:3:{i:0;s:24:"callback_entity_info_uri";i:1;s:26:"callback_entity_info_label";i:2;s:29:"callback_entity_info_language";}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1992:"
  $return = array(
    'node' => array(
      'label' => t('Node'),
      'controller class' => 'NodeController',
      'base table' => 'node',
      'revision table' => 'node_revision',
      'uri callback' => 'node_uri',
      'fieldable' => TRUE,
      'translation' => array(
        'locale' => TRUE,
      ),
      'entity keys' => array(
        'id' => 'nid',
        'revision' => 'vid',
        'bundle' => 'type',
        'language' => 'language',
      ),
      'bundle keys' => array(
        'bundle' => 'type',
      ),
      'bundles' => array(),
      'view modes' => array(
        'full' => array(
          'label' => t('Full content'),
          'custom settings' => FALSE,
        ),
        'teaser' => array(
          'label' => t('Teaser'),
          'custom settings' => TRUE,
        ),
        'rss' => array(
          'label' => t('RSS'),
          'custom settings' => FALSE,
        ),
      ),
    ),
  );

  // Search integration is provided by node.module, so search-related
  // view modes for nodes are defined here and not in search.module.
  if (module_exists('search')) {
    $return['node']['view modes'] += array(
      'search_index' => array(
        'label' => t('Search index'),
        'custom settings' => FALSE,
      ),
      'search_result' => array(
        'label' => t('Search result highlighting input'),
        'custom settings' => FALSE,
      ),
    );
  }

  // Bundles must provide a human readable name so we can create help and error
  // messages, and the path to attach Field admin pages to.
  foreach (node_type_get_names() as $type => $name) {
    $return['node']['bundles'][$type] = array(
      'label' => $name,
      'admin' => array(
        'path' => 'admin/structure/types/manage/%node_type',
        'real path' => 'admin/structure/types/manage/' . str_replace('_', '-', $type),
        'bundle argument' => 4,
        'access arguments' => array('administer content types'),
      ),
    );
  }

  return $return;
";}s:22:"hook_entity_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_entity_info_alter";s:10:"definition";s:46:"function hook_entity_info_alter(&$entity_info)";s:11:"description";s:22:"Alter the entity info.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:189:"
  // Set the controller class for nodes to an alternate implementation of the
  // DrupalEntityController interface.
  $entity_info['node']['controller class'] = 'MyCustomNodeController';
";}s:16:"hook_entity_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_entity_load";s:10:"definition";s:43:"function hook_entity_load($entities, $type)";s:11:"description";s:28:"Act on entities when loaded.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:99:"
  foreach ($entities as $entity) {
    $entity->foo = mymodule_add_something($entity, $type);
  }
";}s:19:"hook_entity_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_entity_presave";s:10:"definition";s:44:"function hook_entity_presave($entity, $type)";s:11:"description";s:61:"Act on an entity before it is about to be created or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:36:"
  $entity->changed = REQUEST_TIME;
";}s:18:"hook_entity_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_entity_insert";s:10:"definition";s:43:"function hook_entity_insert($entity, $type)";s:11:"description";s:30:"Act on entities when inserted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:334:"
  // Insert the new entity into a fictional table of all entities.
  $info = entity_get_info($type);
  list($id) = entity_extract_ids($type, $entity);
  db_insert('example_entity')
    ->fields(array(
      'type' => $type,
      'id' => $id,
      'created' => REQUEST_TIME,
      'updated' => REQUEST_TIME,
    ))
    ->execute();
";}s:18:"hook_entity_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_entity_update";s:10:"definition";s:43:"function hook_entity_update($entity, $type)";s:11:"description";s:29:"Act on entities when updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:319:"
  // Update the entity's entry in a fictional table of all entities.
  $info = entity_get_info($type);
  list($id) = entity_extract_ids($type, $entity);
  db_update('example_entity')
    ->fields(array(
      'updated' => REQUEST_TIME,
    ))
    ->condition('type', $type)
    ->condition('id', $id)
    ->execute();
";}s:18:"hook_entity_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_entity_delete";s:10:"definition";s:43:"function hook_entity_delete($entity, $type)";s:11:"description";s:29:"Act on entities when deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:261:"
  // Delete the entity's entry from a fictional table of all entities.
  $info = entity_get_info($type);
  list($id) = entity_extract_ids($type, $entity);
  db_delete('example_entity')
    ->condition('type', $type)
    ->condition('id', $id)
    ->execute();
";}s:23:"hook_entity_query_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_entity_query_alter";s:10:"definition";s:40:"function hook_entity_query_alter($query)";s:11:"description";s:37:"Alter or execute an EntityFieldQuery.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:57:"
  $query->executeCallback = 'my_module_query_callback';
";}s:16:"hook_entity_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_entity_view";s:10:"definition";s:64:"function hook_entity_view($entity, $type, $view_mode, $langcode)";s:11:"description";s:49:"Act on entities being assembled before rendering.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:162:"
  $entity->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
";}s:22:"hook_entity_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_entity_view_alter";s:10:"definition";s:47:"function hook_entity_view_alter(&$build, $type)";s:11:"description";s:35:"Alter the results of ENTITY_view().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:303:"
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_node_post_render';
  }
";}s:27:"hook_entity_view_mode_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_entity_view_mode_alter";s:10:"definition";s:59:"function hook_entity_view_mode_alter(&$view_mode, $context)";s:11:"description";s:58:"Change the view mode of an entity that is being displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:170:"
  // For nodes, change the view mode when it is teaser.
  if ($context['entity_type'] == 'node' && $view_mode == 'teaser') {
    $view_mode = 'my_custom_view_mode';
  }
";}s:16:"hook_admin_paths";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_admin_paths";s:10:"definition";s:27:"function hook_admin_paths()";s:11:"description";s:28:"Define administrative paths.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:102:"
  $paths = array(
    'mymodule/*/add' => TRUE,
    'mymodule/*/edit' => TRUE,
  );
  return $paths;
";}s:22:"hook_admin_paths_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_admin_paths_alter";s:10:"definition";s:40:"function hook_admin_paths_alter(&$paths)";s:11:"description";s:55:"Redefine administrative paths defined by other modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:201:"
  // Treat all user pages as administrative.
  $paths['user'] = TRUE;
  $paths['user/*'] = TRUE;
  // Treat the forum topic node form as a non-administrative page.
  $paths['node/add/forum'] = FALSE;
";}s:24:"hook_entity_prepare_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_entity_prepare_view";s:10:"definition";s:62:"function hook_entity_prepare_view($entities, $type, $langcode)";s:11:"description";s:52:"Act on entities as they are being prepared for view.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:249:"
  // Load a specific node into the user object for later theming.
  if ($type == 'user') {
    $nodes = mymodule_get_user_nodes(array_keys($entities));
    foreach ($entities as $uid => $entity) {
      $entity->user_node = $nodes[$uid];
    }
  }
";}s:9:"hook_cron";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_cron";s:10:"definition";s:20:"function hook_cron()";s:11:"description";s:25:"Perform periodic actions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:728:"
  // Short-running operation example, not using a queue:
  // Delete all expired records since the last cron run.
  $expires = variable_get('mymodule_cron_last_run', REQUEST_TIME);
  db_delete('mymodule_table')
    ->condition('expires', $expires, '>=')
    ->execute();
  variable_set('mymodule_cron_last_run', REQUEST_TIME);

  // Long-running operation example, leveraging a queue:
  // Fetch feeds from other sites.
  $result = db_query('SELECT * FROM {aggregator_feed} WHERE checked + refresh < :time AND refresh <> :never', array(
    ':time' => REQUEST_TIME,
    ':never' => AGGREGATOR_CLEAR_NEVER,
  ));
  $queue = DrupalQueue::get('aggregator_feeds');
  foreach ($result as $feed) {
    $queue->createItem($feed);
  }
";}s:20:"hook_cron_queue_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_cron_queue_info";s:10:"definition";s:31:"function hook_cron_queue_info()";s:11:"description";s:62:"Declare queues holding items that need to be run periodically.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:21:"callback_queue_worker";}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:128:"
  $queues['aggregator_feeds'] = array(
    'worker callback' => 'aggregator_refresh',
    'time' => 60,
  );
  return $queues;
";}s:26:"hook_cron_queue_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_cron_queue_info_alter";s:10:"definition";s:45:"function hook_cron_queue_info_alter(&$queues)";s:11:"description";s:46:"Alter cron queue information before cron runs.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:165:"
  // This site has many feeds so let's spend 90 seconds on each cron run
  // updating feeds instead of the default 60.
  $queues['aggregator_feeds']['time'] = 90;
";}s:17:"hook_element_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_element_info";s:10:"definition";s:28:"function hook_element_info()";s:11:"description";s:76:"Allows modules to declare their own Form API element types and specify their";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:80:"
  $types['filter_format'] = array(
    '#input' => TRUE,
  );
  return $types;
";}s:23:"hook_element_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_element_info_alter";s:10:"definition";s:40:"function hook_element_info_alter(&$type)";s:11:"description";s:57:"Alter the element type information returned from modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:133:"
  // Decrease the default size of textfields.
  if (isset($type['textfield']['#size'])) {
    $type['textfield']['#size'] = 40;
  }
";}s:9:"hook_exit";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_exit";s:10:"definition";s:39:"function hook_exit($destination = NULL)";s:11:"description";s:22:"Perform cleanup tasks.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:105:"
  db_update('counter')
    ->expression('hits', 'hits + 1')
    ->condition('type', 1)
    ->execute();
";}s:13:"hook_js_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:13:"hook_js_alter";s:10:"definition";s:36:"function hook_js_alter(&$javascript)";s:11:"description";s:73:"Perform necessary alterations to the JavaScript before it is presented on";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:165:"
  // Swap out jQuery to use an updated version of the library.
  $javascript['misc/jquery.js']['data'] = drupal_get_path('module', 'jquery_update') . '/jquery.js';
";}s:12:"hook_library";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:12:"hook_library";s:10:"definition";s:23:"function hook_library()";s:11:"description";s:60:"Registers JavaScript/CSS libraries associated with a module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1057:"
  // Library One.
  $libraries['library-1'] = array(
    'title' => 'Library One',
    'website' => 'http://example.com/library-1',
    'version' => '1.2',
    'js' => array(
      drupal_get_path('module', 'my_module') . '/library-1.js' => array(),
    ),
    'css' => array(
      drupal_get_path('module', 'my_module') . '/library-2.css' => array(
        'type' => 'file',
        'media' => 'screen',
      ),
    ),
  );
  // Library Two.
  $libraries['library-2'] = array(
    'title' => 'Library Two',
    'website' => 'http://example.com/library-2',
    'version' => '3.1-beta1',
    'js' => array(
      // JavaScript settings may use the 'data' key.
      array(
        'type' => 'setting',
        'data' => array('library2' => TRUE),
      ),
    ),
    'dependencies' => array(
      // Require jQuery UI core by System module.
      array('system', 'ui'),
      // Require our other library.
      array('my_module', 'library-1'),
      // Require another library.
      array('other_module', 'library-3'),
    ),
  );
  return $libraries;
";}s:18:"hook_library_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_library_alter";s:10:"definition";s:49:"function hook_library_alter(&$libraries, $module)";s:11:"description";s:43:"Alters the JavaScript/CSS library registry.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:515:"
  // Update Farbtastic to version 2.0.
  if ($module == 'system' && isset($libraries['farbtastic'])) {
    // Verify existing version is older than the one we are updating to.
    if (version_compare($libraries['farbtastic']['version'], '2.0', '<')) {
      // Update the existing Farbtastic to version 2.0.
      $libraries['farbtastic']['version'] = '2.0';
      $libraries['farbtastic']['js'] = array(
        drupal_get_path('module', 'farbtastic_update') . '/farbtastic-2.0.js' => array(),
      );
    }
  }
";}s:14:"hook_css_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_css_alter";s:10:"definition";s:30:"function hook_css_alter(&$css)";s:11:"description";s:51:"Alter CSS files before they are output on the page.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:102:"
  // Remove defaults.css file.
  unset($css[drupal_get_path('module', 'system') . '/defaults.css']);
";}s:22:"hook_ajax_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_ajax_render_alter";s:10:"definition";s:43:"function hook_ajax_render_alter(&$commands)";s:11:"description";s:72:"Alter the commands that are sent to the user through the Ajax framework.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:155:"
  // Inject any new status messages into the content area.
  $commands[] = ajax_command_prepend('#block-system-main .content', theme('status_messages'));
";}s:15:"hook_page_build";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_page_build";s:10:"definition";s:32:"function hook_page_build(&$page)";s:11:"description";s:45:"Add elements to a page before it is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:304:"
  if (menu_get_object('node', 1)) {
    // We are on a node detail page. Append a standard disclaimer to the
    // content region.
    $page['content']['disclaimer'] = array(
      '#markup' => t('Acme, Inc. is not responsible for the contents of this sample code.'),
      '#weight' => 25,
    );
  }
";}s:24:"hook_menu_get_item_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_menu_get_item_alter";s:10:"definition";s:70:"function hook_menu_get_item_alter(&$router_item, $path, $original_map)";s:11:"description";s:86:"Alter a menu router item right after it has been retrieved from the database or cache.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:197:"
  // When retrieving the router item for the current path...
  if ($path == $_GET['q']) {
    // ...call a function that prepares something for this request.
    mymodule_prepare_something();
  }
";}s:9:"hook_menu";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_menu";s:10:"definition";s:20:"function hook_menu()";s:11:"description";s:37:"Define menu items and page callbacks.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:402:"
  $items['example'] = array(
    'title' => 'Example Page',
    'page callback' => 'example_page',
    'access arguments' => array('access content'),
    'type' => MENU_SUGGESTED_ITEM,
  );
  $items['example/feed'] = array(
    'title' => 'Example RSS feed',
    'page callback' => 'example_feed',
    'access arguments' => array('access content'),
    'type' => MENU_CALLBACK,
  );

  return $items;
";}s:15:"hook_menu_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_menu_alter";s:10:"definition";s:33:"function hook_menu_alter(&$items)";s:11:"description";s:81:"Alter the data being saved to the {menu_router} table after hook_menu is invoked.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:94:"
  // Example - disable the page at node/add
  $items['node/add']['access callback'] = FALSE;
";}s:20:"hook_menu_link_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_menu_link_alter";s:10:"definition";s:37:"function hook_menu_link_alter(&$item)";s:11:"description";s:73:"Alter the data being saved to the {menu_links} table by menu_link_save().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:660:"
  // Make all new admin links hidden (a.k.a disabled).
  if (strpos($item['link_path'], 'admin') === 0 && empty($item['mlid'])) {
    $item['hidden'] = 1;
  }
  // Flag a link to be altered by hook_translated_menu_link_alter().
  if ($item['link_path'] == 'devel/cache/clear') {
    $item['options']['alter'] = TRUE;
  }
  // Flag a link to be altered by hook_translated_menu_link_alter(), but only
  // if it is derived from a menu router item; i.e., do not alter a custom
  // menu link pointing to the same path that has been created by a user.
  if ($item['link_path'] == 'user' && $item['module'] == 'system') {
    $item['options']['alter'] = TRUE;
  }
";}s:31:"hook_translated_menu_link_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_translated_menu_link_alter";s:10:"definition";s:54:"function hook_translated_menu_link_alter(&$item, $map)";s:11:"description";s:73:"Alter a menu link after it has been translated and before it is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:119:"
  if ($item['href'] == 'devel/cache/clear') {
    $item['localized_options']['query'] = drupal_get_destination();
  }
";}s:21:"hook_menu_link_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_menu_link_insert";s:10:"definition";s:37:"function hook_menu_link_insert($link)";s:11:"description";s:49:"Inform modules that a menu link has been created.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:288:"
  // In our sample case, we track menu items as editing sections
  // of the site. These are stored in our table as 'disabled' items.
  $record['mlid'] = $link['mlid'];
  $record['menu_name'] = $link['menu_name'];
  $record['status'] = 0;
  drupal_write_record('menu_example', $record);
";}s:21:"hook_menu_link_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_menu_link_update";s:10:"definition";s:37:"function hook_menu_link_update($link)";s:11:"description";s:49:"Inform modules that a menu link has been updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:381:"
  // If the parent menu has changed, update our record.
  $menu_name = db_query("SELECT menu_name FROM {menu_example} WHERE mlid = :mlid", array(':mlid' => $link['mlid']))->fetchField();
  if ($menu_name != $link['menu_name']) {
    db_update('menu_example')
      ->fields(array('menu_name' => $link['menu_name']))
      ->condition('mlid', $link['mlid'])
      ->execute();
  }
";}s:21:"hook_menu_link_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_menu_link_delete";s:10:"definition";s:37:"function hook_menu_link_delete($link)";s:11:"description";s:49:"Inform modules that a menu link has been deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:124:"
  // Delete the record from our table.
  db_delete('menu_example')
    ->condition('mlid', $link['mlid'])
    ->execute();
";}s:27:"hook_menu_local_tasks_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_menu_local_tasks_alter";s:10:"definition";s:70:"function hook_menu_local_tasks_alter(&$data, $router_item, $root_path)";s:11:"description";s:70:"Alter tabs and actions displayed on the page before they are rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:925:"
  // Add an action linking to node/add to all pages.
  $data['actions']['output'][] = array(
    '#theme' => 'menu_local_task',
    '#link' => array(
      'title' => t('Add new content'),
      'href' => 'node/add',
      'localized_options' => array(
        'attributes' => array(
          'title' => t('Add new content'),
        ),
      ),
    ),
  );

  // Add a tab linking to node/add to all pages.
  $data['tabs'][0]['output'][] = array(
    '#theme' => 'menu_local_task',
    '#link' => array(
      'title' => t('Example tab'),
      'href' => 'node/add',
      'localized_options' => array(
        'attributes' => array(
          'title' => t('Add new content'),
        ),
      ),
    ),
    // Define whether this link is active. This can be omitted for
    // implementations that add links to pages outside of the current page
    // context.
    '#active' => ($router_item['path'] == $root_path),
  );
";}s:26:"hook_menu_breadcrumb_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_menu_breadcrumb_alter";s:10:"definition";s:58:"function hook_menu_breadcrumb_alter(&$active_trail, $item)";s:11:"description";s:72:"Alter links in the active trail before it is rendered as the breadcrumb.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:407:"
  // Always display a link to the current page by duplicating the last link in
  // the active trail. This means that menu_get_active_breadcrumb() will remove
  // the last link (for the current page), but since it is added once more here,
  // it will appear.
  if (!drupal_is_front_page()) {
    $end = end($active_trail);
    if ($item['href'] == $end['href']) {
      $active_trail[] = $end;
    }
  }
";}s:32:"hook_menu_contextual_links_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_menu_contextual_links_alter";s:10:"definition";s:76:"function hook_menu_contextual_links_alter(&$links, $router_item, $root_path)";s:11:"description";s:48:"Alter contextual links before they are rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:285:"
  // Add a link to all contextual links for nodes.
  if ($root_path == 'node/%') {
    $links['foo'] = array(
      'title' => t('Do fu'),
      'href' => 'foo/do',
      'localized_options' => array(
        'query' => array(
          'foo' => 'bar',
        ),
      ),
    );
  }
";}s:15:"hook_page_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_page_alter";s:10:"definition";s:32:"function hook_page_alter(&$page)";s:11:"description";s:46:"Perform alterations before a page is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:214:"
  // Add help text to the user login block.
  $page['sidebar_first']['user_login']['help'] = array(
    '#weight' => -10,
    '#markup' => t('To post comments or add new content, you first have to log in.'),
  );
";}s:15:"hook_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_form_alter";s:10:"definition";s:56:"function hook_form_alter(&$form, &$form_state, $form_id)";s:11:"description";s:46:"Perform alterations before a form is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:367:"
  if (isset($form['type']) && $form['type']['#value'] . '_node_settings' == $form_id) {
    $form['workflow']['upload_' . $form['type']['#value']] = array(
      '#type' => 'radios',
      '#title' => t('Attachments'),
      '#default_value' => variable_get('upload_' . $form['type']['#value'], 1),
      '#options' => array(t('Disabled'), t('Enabled')),
    );
  }
";}s:23:"hook_form_FORM_ID_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_form_FORM_ID_alter";s:10:"definition";s:64:"function hook_form_FORM_ID_alter(&$form, &$form_state, $form_id)";s:11:"description";s:75:"Provide a form-specific alteration instead of the global hook_form_alter().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:415:"
  // Modification for the form with the given form ID goes here. For example, if
  // FORM_ID is "user_register_form" this code would run only on the user
  // registration form.

  // Add a checkbox to registration form about agreeing to terms of use.
  $form['terms_of_use'] = array(
    '#type' => 'checkbox',
    '#title' => t("I agree with the website's terms and conditions."),
    '#required' => TRUE,
  );
";}s:28:"hook_form_BASE_FORM_ID_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_form_BASE_FORM_ID_alter";s:10:"definition";s:69:"function hook_form_BASE_FORM_ID_alter(&$form, &$form_state, $form_id)";s:11:"description";s:61:"Provide a form-specific alteration for shared ('base') forms.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:422:"
  // Modification for the form with the given BASE_FORM_ID goes here. For
  // example, if BASE_FORM_ID is "node_form", this code would run on every
  // node form, regardless of node type.

  // Add a checkbox to the node form about agreeing to terms of use.
  $form['terms_of_use'] = array(
    '#type' => 'checkbox',
    '#title' => t("I agree with the website's terms and conditions."),
    '#required' => TRUE,
  );
";}s:10:"hook_forms";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:10:"hook_forms";s:10:"definition";s:36:"function hook_forms($form_id, $args)";s:11:"description";s:39:"Map form_ids to form builder functions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1251:"
  // Simply reroute the (non-existing) $form_id 'mymodule_first_form' to
  // 'mymodule_main_form'.
  $forms['mymodule_first_form'] = array(
    'callback' => 'mymodule_main_form',
  );

  // Reroute the $form_id and prepend an additional argument that gets passed to
  // the 'mymodule_main_form' form builder function.
  $forms['mymodule_second_form'] = array(
    'callback' => 'mymodule_main_form',
    'callback arguments' => array('some parameter'),
  );

  // Reroute the $form_id, but invoke the form builder function
  // 'mymodule_main_form_wrapper' first, so we can prepopulate the $form array
  // that is passed to the actual form builder 'mymodule_main_form'.
  $forms['mymodule_wrapped_form'] = array(
    'callback' => 'mymodule_main_form',
    'wrapper_callback' => 'mymodule_main_form_wrapper',
  );

  // Build a form with a static class callback.
  $forms['mymodule_class_generated_form'] = array(
    // This will call: MyClass::generateMainForm().
    'callback' => array('MyClass', 'generateMainForm'),
    // The base_form_id is required when the callback is a static function in
    // a class. This can also be used to keep newer code backwards compatible.
    'base_form_id' => 'mymodule_main_form',
  );

  return $forms;
";}s:9:"hook_boot";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_boot";s:10:"definition";s:20:"function hook_boot()";s:11:"description";s:42:"Perform setup tasks for all page requests.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:168:"
  // We need user_access() in the shutdown function. Make sure it gets loaded.
  drupal_load('module', 'user');
  drupal_register_shutdown_function('devel_shutdown');
";}s:9:"hook_init";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_init";s:10:"definition";s:20:"function hook_init()";s:11:"description";s:49:"Perform setup tasks for non-cached page requests.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:211:"
  // Since this file should only be loaded on the front page, it cannot be
  // declared in the info file.
  if (drupal_is_front_page()) {
    drupal_add_css(drupal_get_path('module', 'foo') . '/foo.css');
  }
";}s:19:"hook_image_toolkits";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_image_toolkits";s:10:"definition";s:30:"function hook_image_toolkits()";s:11:"description";s:46:"Define image toolkits provided by this module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:257:"
  return array(
    'working' => array(
      'title' => t('A toolkit that works.'),
      'available' => TRUE,
    ),
    'broken' => array(
      'title' => t('A toolkit that is "broken" and will not be listed.'),
      'available' => FALSE,
    ),
  );
";}s:15:"hook_mail_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_mail_alter";s:10:"definition";s:35:"function hook_mail_alter(&$message)";s:11:"description";s:63:"Alter an email message created with the drupal_mail() function.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:364:"
  if ($message['id'] == 'modulename_messagekey') {
    if (!example_notifications_optin($message['to'], $message['id'])) {
      // If the recipient has opted to not receive such messages, cancel
      // sending.
      $message['send'] = FALSE;
      return;
    }
    $message['body'][] = "--\nMail sent out from " . variable_get('site_name', t('Drupal'));
  }
";}s:28:"hook_module_implements_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_module_implements_alter";s:10:"definition";s:63:"function hook_module_implements_alter(&$implementations, $hook)";s:11:"description";s:50:"Alter the registry of modules implementing a hook.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:455:"
  if ($hook == 'rdf_mapping') {
    // Move my_module_rdf_mapping() to the end of the list. module_implements()
    // iterates through $implementations with a foreach loop which PHP iterates
    // in the order that the items were added, so to move an item to the end of
    // the array, we remove it and then add it.
    $group = $implementations['my_module'];
    unset($implementations['my_module']);
    $implementations['my_module'] = $group;
  }
";}s:22:"hook_system_theme_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_system_theme_info";s:10:"definition";s:33:"function hook_system_theme_info()";s:11:"description";s:45:"Return additional themes provided by modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:143:"
  $themes['mymodule_test_theme'] = drupal_get_path('module', 'mymodule') . '/mymodule_test_theme/mymodule_test_theme.info';
  return $themes;
";}s:22:"hook_system_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_system_info_alter";s:10:"definition";s:53:"function hook_system_info_alter(&$info, $file, $type)";s:11:"description";s:62:"Alter the information parsed from module and theme .info files";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:165:"
  // Only fill this in if the .info file does not define a 'datestamp'.
  if (empty($info['datestamp'])) {
    $info['datestamp'] = filemtime($file->filename);
  }
";}s:15:"hook_permission";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_permission";s:10:"definition";s:26:"function hook_permission()";s:11:"description";s:24:"Define user permissions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:184:"
  return array(
    'administer my module' =>  array(
      'title' => t('Administer my module'),
      'description' => t('Perform administration tasks for my module.'),
    ),
  );
";}s:9:"hook_help";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_help";s:10:"definition";s:31:"function hook_help($path, $arg)";s:11:"description";s:25:"Provide online user help.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1141:"
  switch ($path) {
    // Main module help for the block module
    case 'admin/help#block':
      return '<p>' . t('Blocks are boxes of content rendered into an area, or region, of a web page. The default theme Bartik, for example, implements the regions "Sidebar first", "Sidebar second", "Featured", "Content", "Header", "Footer", etc., and a block may appear in any one of these areas. The <a href="@blocks">blocks administration page</a> provides a drag-and-drop interface for assigning a block to a region, and for controlling the order of blocks within regions.', array('@blocks' => url('admin/structure/block'))) . '</p>';

    // Help for another path in the block module
    case 'admin/structure/block':
      return '<p>' . t('This page provides a drag-and-drop interface for assigning a block to a region, and for controlling the order of blocks within regions. Since not all themes implement the same regions, or display regions in the same way, blocks are positioned on a per-theme basis. Remember that your changes will not be saved until you click the <em>Save blocks</em> button at the bottom of the page.') . '</p>';
  }
";}s:10:"hook_theme";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:10:"hook_theme";s:10:"definition";s:52:"function hook_theme($existing, $type, $theme, $path)";s:11:"description";s:53:"Register a module (or theme's) theme implementations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:831:"
  return array(
    'forum_display' => array(
      'variables' => array('forums' => NULL, 'topics' => NULL, 'parents' => NULL, 'tid' => NULL, 'sortby' => NULL, 'forum_per_page' => NULL),
    ),
    'forum_list' => array(
      'variables' => array('forums' => NULL, 'parents' => NULL, 'tid' => NULL),
    ),
    'forum_topic_list' => array(
      'variables' => array('tid' => NULL, 'topics' => NULL, 'sortby' => NULL, 'forum_per_page' => NULL),
    ),
    'forum_icon' => array(
      'variables' => array('new_posts' => NULL, 'num_posts' => 0, 'comment_mode' => 0, 'sticky' => 0),
    ),
    'status_report' => array(
      'render element' => 'requirements',
      'file' => 'system.admin.inc',
    ),
    'system_date_time_settings' => array(
      'render element' => 'form',
      'file' => 'system.admin.inc',
    ),
  );
";}s:25:"hook_theme_registry_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_theme_registry_alter";s:10:"definition";s:52:"function hook_theme_registry_alter(&$theme_registry)";s:11:"description";s:64:"Alter the theme registry information returned from hook_theme().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:319:"
  // Kill the next/previous forum topic navigation links.
  foreach ($theme_registry['forum_topic_navigation']['preprocess functions'] as $key => $value) {
    if ($value == 'template_preprocess_forum_topic_navigation') {
      unset($theme_registry['forum_topic_navigation']['preprocess functions'][$key]);
    }
  }
";}s:17:"hook_custom_theme";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_custom_theme";s:10:"definition";s:28:"function hook_custom_theme()";s:11:"description";s:74:"Return the machine-readable name of the theme to use for the current page.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:136:"
  // Allow the user to request a particular theme via a query parameter.
  if (isset($_GET['theme'])) {
    return $_GET['theme'];
  }
";}s:11:"hook_xmlrpc";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_xmlrpc";s:10:"definition";s:22:"function hook_xmlrpc()";s:11:"description";s:27:"Register XML-RPC callbacks.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:236:"
  return array(
    'drupal.login' => 'drupal_login',
    array(
      'drupal.site.ping',
      'drupal_directory_ping',
      array('boolean', 'string', 'string', 'string', 'string', 'string'),
      t('Handling ping request'))
  );
";}s:17:"hook_xmlrpc_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_xmlrpc_alter";s:10:"definition";s:37:"function hook_xmlrpc_alter(&$methods)";s:11:"description";s:64:"Alters the definition of XML-RPC methods before they are called.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:388:"
  // Directly change a simple method.
  $methods['drupal.login'] = 'mymodule_login';

  // Alter complex definitions.
  foreach ($methods as $key => &$method) {
    // Skip simple method definitions.
    if (!is_int($key)) {
      continue;
    }
    // Perform the wanted manipulation.
    if ($method[0] == 'drupal.site.ping') {
      $method[1] = 'mymodule_directory_ping';
    }
  }
";}s:13:"hook_watchdog";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:13:"hook_watchdog";s:10:"definition";s:40:"function hook_watchdog(array $log_entry)";s:11:"description";s:21:"Log an event message.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1915:"
  global $base_url, $language;

  $severity_list = array(
    WATCHDOG_EMERGENCY => t('Emergency'),
    WATCHDOG_ALERT     => t('Alert'),
    WATCHDOG_CRITICAL  => t('Critical'),
    WATCHDOG_ERROR     => t('Error'),
    WATCHDOG_WARNING   => t('Warning'),
    WATCHDOG_NOTICE    => t('Notice'),
    WATCHDOG_INFO      => t('Info'),
    WATCHDOG_DEBUG     => t('Debug'),
  );

  $to = 'someone@example.com';
  $params = array();
  $params['subject'] = t('[@site_name] @severity_desc: Alert from your web site', array(
    '@site_name' => variable_get('site_name', 'Drupal'),
    '@severity_desc' => $severity_list[$log_entry['severity']],
  ));

  $params['message']  = "\nSite:         @base_url";
  $params['message'] .= "\nSeverity:     (@severity) @severity_desc";
  $params['message'] .= "\nTimestamp:    @timestamp";
  $params['message'] .= "\nType:         @type";
  $params['message'] .= "\nIP Address:   @ip";
  $params['message'] .= "\nRequest URI:  @request_uri";
  $params['message'] .= "\nReferrer URI: @referer_uri";
  $params['message'] .= "\nUser:         (@uid) @name";
  $params['message'] .= "\nLink:         @link";
  $params['message'] .= "\nMessage:      \n\n@message";

  $params['message'] = t($params['message'], array(
    '@base_url'      => $base_url,
    '@severity'      => $log_entry['severity'],
    '@severity_desc' => $severity_list[$log_entry['severity']],
    '@timestamp'     => format_date($log_entry['timestamp']),
    '@type'          => $log_entry['type'],
    '@ip'            => $log_entry['ip'],
    '@request_uri'   => $log_entry['request_uri'],
    '@referer_uri'   => $log_entry['referer'],
    '@uid'           => $log_entry['uid'],
    '@name'          => $log_entry['user']->name,
    '@link'          => strip_tags($log_entry['link']),
    '@message'       => strip_tags($log_entry['message']),
  ));

  drupal_mail('emaillog', 'entry', $to, $language, $params);
";}s:9:"hook_mail";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_mail";s:10:"definition";s:44:"function hook_mail($key, &$message, $params)";s:11:"description";s:65:"Prepare a message based on parameters; called from drupal_mail().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1283:"
  $account = $params['account'];
  $context = $params['context'];
  $variables = array(
    '%site_name' => variable_get('site_name', 'Drupal'),
    '%username' => format_username($account),
  );
  if ($context['hook'] == 'taxonomy') {
    $entity = $params['entity'];
    $vocabulary = taxonomy_vocabulary_load($entity->vid);
    $variables += array(
      '%term_name' => $entity->name,
      '%term_description' => $entity->description,
      '%term_id' => $entity->tid,
      '%vocabulary_name' => $vocabulary->name,
      '%vocabulary_description' => $vocabulary->description,
      '%vocabulary_id' => $vocabulary->vid,
    );
  }

  // Node-based variable translation is only available if we have a node.
  if (isset($params['node'])) {
    $node = $params['node'];
    $variables += array(
      '%uid' => $node->uid,
      '%node_url' => url('node/' . $node->nid, array('absolute' => TRUE)),
      '%node_type' => node_type_get_name($node),
      '%title' => $node->title,
      '%teaser' => $node->teaser,
      '%body' => $node->body,
    );
  }
  $subject = strtr($context['subject'], $variables);
  $body = strtr($context['message'], $variables);
  $message['subject'] .= str_replace(array("\r", "\n"), '', $subject);
  $message['body'][] = drupal_html_to_text($body);
";}s:17:"hook_flush_caches";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_flush_caches";s:10:"definition";s:28:"function hook_flush_caches()";s:11:"description";s:41:"Add a list of cache tables to be cleared.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:34:"
  return array('cache_example');
";}s:22:"hook_modules_installed";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_modules_installed";s:10:"definition";s:41:"function hook_modules_installed($modules)";s:11:"description";s:54:"Perform necessary actions after modules are installed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:111:"
  if (in_array('lousy_module', $modules)) {
    variable_set('lousy_module_conflicting_variable', FALSE);
  }
";}s:20:"hook_modules_enabled";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_modules_enabled";s:10:"definition";s:39:"function hook_modules_enabled($modules)";s:11:"description";s:52:"Perform necessary actions after modules are enabled.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:171:"
  if (in_array('lousy_module', $modules)) {
    drupal_set_message(t('mymodule is not compatible with lousy_module'), 'error');
    mymodule_disable_functionality();
  }
";}s:21:"hook_modules_disabled";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_modules_disabled";s:10:"definition";s:40:"function hook_modules_disabled($modules)";s:11:"description";s:53:"Perform necessary actions after modules are disabled.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:86:"
  if (in_array('lousy_module', $modules)) {
    mymodule_enable_functionality();
  }
";}s:24:"hook_modules_uninstalled";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_modules_uninstalled";s:10:"definition";s:43:"function hook_modules_uninstalled($modules)";s:11:"description";s:56:"Perform necessary actions after modules are uninstalled.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:155:"
  foreach ($modules as $module) {
    db_delete('mymodule_table')
      ->condition('module', $module)
      ->execute();
  }
  mymodule_cache_rebuild();
";}s:20:"hook_stream_wrappers";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_stream_wrappers";s:10:"definition";s:31:"function hook_stream_wrappers()";s:11:"description";s:70:"Registers PHP stream wrapper implementations associated with a module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1424:"
  return array(
    'public' => array(
      'name' => t('Public files'),
      'class' => 'DrupalPublicStreamWrapper',
      'description' => t('Public local files served by the webserver.'),
      'type' => STREAM_WRAPPERS_LOCAL_NORMAL,
    ),
    'private' => array(
      'name' => t('Private files'),
      'class' => 'DrupalPrivateStreamWrapper',
      'description' => t('Private local files served by Drupal.'),
      'type' => STREAM_WRAPPERS_LOCAL_NORMAL,
    ),
    'temp' => array(
      'name' => t('Temporary files'),
      'class' => 'DrupalTempStreamWrapper',
      'description' => t('Temporary local files for upload and previews.'),
      'type' => STREAM_WRAPPERS_LOCAL_HIDDEN,
    ),
    'cdn' => array(
      'name' => t('Content delivery network files'),
      'class' => 'MyModuleCDNStreamWrapper',
      'description' => t('Files served by a content delivery network.'),
      // 'type' can be omitted to use the default of STREAM_WRAPPERS_NORMAL
    ),
    'youtube' => array(
      'name' => t('YouTube video'),
      'class' => 'MyModuleYouTubeStreamWrapper',
      'description' => t('Video streamed from YouTube.'),
      // A module implementing YouTube integration may decide to support using
      // the YouTube API for uploading video, but here, we assume that this
      // particular module only supports playing YouTube video.
      'type' => STREAM_WRAPPERS_READ_VISIBLE,
    ),
  );
";}s:26:"hook_stream_wrappers_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_stream_wrappers_alter";s:10:"definition";s:47:"function hook_stream_wrappers_alter(&$wrappers)";s:11:"description";s:54:"Alters the list of PHP stream wrapper implementations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:117:"
  // Change the name of private files to reflect the performance.
  $wrappers['private']['name'] = t('Slow files');
";}s:14:"hook_file_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_file_load";s:10:"definition";s:31:"function hook_file_load($files)";s:11:"description";s:46:"Load additional information into file objects.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:326:"
  // Add the upload specific data into the file object.
  $result = db_query('SELECT * FROM {upload} u WHERE u.fid IN (:fids)', array(':fids' => array_keys($files)))->fetchAll(PDO::FETCH_ASSOC);
  foreach ($result as $record) {
    foreach ($record as $key => $value) {
      $files[$record['fid']]->$key = $value;
    }
  }
";}s:18:"hook_file_validate";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_file_validate";s:10:"definition";s:34:"function hook_file_validate($file)";s:11:"description";s:39:"Check that files meet a given criteria.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:311:"
  $errors = array();

  if (empty($file->filename)) {
    $errors[] = t("The file's name is empty. Please give a name to the file.");
  }
  if (strlen($file->filename) > 255) {
    $errors[] = t("The file's name exceeds the 255 characters limit. Please rename the file and try again.");
  }

  return $errors;
";}s:17:"hook_file_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_file_presave";s:10:"definition";s:33:"function hook_file_presave($file)";s:11:"description";s:40:"Act on a file being inserted or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:78:"
  // Change the file timestamp to an hour prior.
  $file->timestamp -= 3600;
";}s:16:"hook_file_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_file_insert";s:10:"definition";s:32:"function hook_file_insert($file)";s:11:"description";s:30:"Respond to a file being added.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:184:"
  // Add a message to the log, if the file is a jpg
  $validate = file_validate_extensions($file, 'jpg');
  if (empty($validate)) {
    watchdog('file', 'A jpg has been added.');
  }
";}s:16:"hook_file_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_file_update";s:10:"definition";s:32:"function hook_file_update($file)";s:11:"description";s:32:"Respond to a file being updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:429:"
  $file_user = user_load($file->uid);
  // Make sure that the file name starts with the owner's user name.
  if (strpos($file->filename, $file_user->name) !== 0) {
    $old_filename = $file->filename;
    $file->filename = $file_user->name . '_' . $file->filename;
    $file->save();

    watchdog('file', t('%source has been renamed to %destination', array('%source' => $old_filename, '%destination' => $file->filename)));
  }
";}s:14:"hook_file_copy";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_file_copy";s:10:"definition";s:39:"function hook_file_copy($file, $source)";s:11:"description";s:39:"Respond to a file that has been copied.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:408:"
  $file_user = user_load($file->uid);
  // Make sure that the file name starts with the owner's user name.
  if (strpos($file->filename, $file_user->name) !== 0) {
    $file->filename = $file_user->name . '_' . $file->filename;
    $file->save();

    watchdog('file', t('Copied file %source has been renamed to %destination', array('%source' => $source->filename, '%destination' => $file->filename)));
  }
";}s:14:"hook_file_move";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_file_move";s:10:"definition";s:39:"function hook_file_move($file, $source)";s:11:"description";s:38:"Respond to a file that has been moved.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:407:"
  $file_user = user_load($file->uid);
  // Make sure that the file name starts with the owner's user name.
  if (strpos($file->filename, $file_user->name) !== 0) {
    $file->filename = $file_user->name . '_' . $file->filename;
    $file->save();

    watchdog('file', t('Moved file %source has been renamed to %destination', array('%source' => $source->filename, '%destination' => $file->filename)));
  }
";}s:16:"hook_file_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_file_delete";s:10:"definition";s:32:"function hook_file_delete($file)";s:11:"description";s:32:"Respond to a file being deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:119:"
  // Delete all information associated with the file.
  db_delete('upload')->condition('fid', $file->fid)->execute();
";}s:18:"hook_file_download";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_file_download";s:10:"definition";s:33:"function hook_file_download($uri)";s:11:"description";s:66:"Control access to private file downloads and specify HTTP headers.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:453:"
  // Check if the file is controlled by the current module.
  if (!file_prepare_directory($uri)) {
    $uri = FALSE;
  }
  if (strpos(file_uri_target($uri), variable_get('user_picture_path', 'pictures') . '/picture-') === 0) {
    if (!user_access('access user profiles')) {
      // Access to the file is denied.
      return -1;
    }
    else {
      $info = image_get_info($uri);
      return array('Content-Type' => $info['mime_type']);
    }
  }
";}s:19:"hook_file_url_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_file_url_alter";s:10:"definition";s:35:"function hook_file_url_alter(&$uri)";s:11:"description";s:24:"Alter the URL to a file.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1221:"
  global $user;

  // User 1 will always see the local file in this example.
  if ($user->uid == 1) {
    return;
  }

  $cdn1 = 'http://cdn1.example.com';
  $cdn2 = 'http://cdn2.example.com';
  $cdn_extensions = array('css', 'js', 'gif', 'jpg', 'jpeg', 'png');

  // Most CDNs don't support private file transfers without a lot of hassle,
  // so don't support this in the common case.
  $schemes = array('public');

  $scheme = file_uri_scheme($uri);

  // Only serve shipped files and public created files from the CDN.
  if (!$scheme || in_array($scheme, $schemes)) {
    // Shipped files.
    if (!$scheme) {
      $path = $uri;
    }
    // Public created files.
    else {
      $wrapper = file_stream_wrapper_get_instance_by_scheme($scheme);
      $path = $wrapper->getDirectoryPath() . '/' . file_uri_target($uri);
    }

    // Clean up Windows paths.
    $path = str_replace('\\', '/', $path);

    // Serve files with one of the CDN extensions from CDN 1, all others from
    // CDN 2.
    $pathinfo = pathinfo($path);
    if (isset($pathinfo['extension']) && in_array($pathinfo['extension'], $cdn_extensions)) {
      $uri = $cdn1 . '/' . $path;
    }
    else {
      $uri = $cdn2 . '/' . $path;
    }
  }
";}s:17:"hook_requirements";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_requirements";s:10:"definition";s:34:"function hook_requirements($phase)";s:11:"description";s:56:"Check installation requirements and do status reporting.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1655:"
  $requirements = array();
  // Ensure translations don't break during installation.
  $t = get_t();

  // Report Drupal version
  if ($phase == 'runtime') {
    $requirements['drupal'] = array(
      'title' => $t('Drupal'),
      'value' => VERSION,
      'severity' => REQUIREMENT_INFO
    );
  }

  // Test PHP version
  $requirements['php'] = array(
    'title' => $t('PHP'),
    'value' => ($phase == 'runtime') ? l(phpversion(), 'admin/reports/status/php') : phpversion(),
  );
  if (version_compare(phpversion(), DRUPAL_MINIMUM_PHP) < 0) {
    $requirements['php']['description'] = $t('Your PHP installation is too old. Drupal requires at least PHP %version.', array('%version' => DRUPAL_MINIMUM_PHP));
    $requirements['php']['severity'] = REQUIREMENT_ERROR;
  }

  // Report cron status
  if ($phase == 'runtime') {
    $cron_last = variable_get('cron_last');

    if (is_numeric($cron_last)) {
      $requirements['cron']['value'] = $t('Last run !time ago', array('!time' => format_interval(REQUEST_TIME - $cron_last)));
    }
    else {
      $requirements['cron'] = array(
        'description' => $t('Cron has not run. It appears cron jobs have not been setup on your system. Check the help pages for <a href="@url">configuring cron jobs</a>.', array('@url' => 'http://drupal.org/cron')),
        'severity' => REQUIREMENT_ERROR,
        'value' => $t('Never run'),
      );
    }

    $requirements['cron']['description'] .= ' ' . $t('You can <a href="@cron">run cron manually</a>.', array('@cron' => url('admin/reports/status/run-cron')));

    $requirements['cron']['title'] = $t('Cron maintenance tasks');
  }

  return $requirements;
";}s:11:"hook_schema";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_schema";s:10:"definition";s:22:"function hook_schema()";s:11:"description";s:50:"Define the current version of the database schema.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1644:"
  $schema['node'] = array(
    // Example (partial) specification for table "node".
    'description' => 'The base table for nodes.',
    'fields' => array(
      'nid' => array(
        'description' => 'The primary identifier for a node.',
        'type' => 'serial',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'vid' => array(
        'description' => 'The current {node_revision}.vid version identifier.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
      ),
      'type' => array(
        'description' => 'The {node_type} of this node.',
        'type' => 'varchar',
        'length' => 32,
        'not null' => TRUE,
        'default' => '',
      ),
      'title' => array(
        'description' => 'The title of this node, always treated as non-markup plain text.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
        'default' => '',
      ),
    ),
    'indexes' => array(
      'node_changed'        => array('changed'),
      'node_created'        => array('created'),
    ),
    'unique keys' => array(
      'nid_vid' => array('nid', 'vid'),
      'vid'     => array('vid'),
    ),
    // For documentation purposes only; foreign keys are not created in the
    // database.
    'foreign keys' => array(
      'node_revision' => array(
        'table' => 'node_revision',
        'columns' => array('vid' => 'vid'),
      ),
      'node_author' => array(
        'table' => 'users',
        'columns' => array('uid' => 'uid'),
      ),
    ),
    'primary key' => array('nid'),
  );
  return $schema;
";}s:17:"hook_schema_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_schema_alter";s:10:"definition";s:36:"function hook_schema_alter(&$schema)";s:11:"description";s:49:"Perform alterations to existing database schemas.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:216:"
  // Add field to existing schema.
  $schema['users']['fields']['timezone_id'] = array(
    'type' => 'int',
    'not null' => TRUE,
    'default' => 0,
    'description' => 'Per-user timezone configuration.',
  );
";}s:16:"hook_query_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_query_alter";s:10:"definition";s:57:"function hook_query_alter(QueryAlterableInterface $query)";s:11:"description";s:42:"Perform alterations to a structured query.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:69:"
  if ($query->hasTag('micro_limit')) {
    $query->range(0, 2);
  }
";}s:20:"hook_query_TAG_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_query_TAG_alter";s:10:"definition";s:61:"function hook_query_TAG_alter(QueryAlterableInterface $query)";s:11:"description";s:58:"Perform alterations to a structured query for a given tag.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1174:"
  // Skip the extra expensive alterations if site has no node access control modules.
  if (!node_access_view_all_nodes()) {
    // Prevent duplicates records.
    $query->distinct();
    // The recognized operations are 'view', 'update', 'delete'.
    if (!$op = $query->getMetaData('op')) {
      $op = 'view';
    }
    // Skip the extra joins and conditions for node admins.
    if (!user_access('bypass node access')) {
      // The node_access table has the access grants for any given node.
      $access_alias = $query->join('node_access', 'na', '%alias.nid = n.nid');
      $or = db_or();
      // If any grant exists for the specified user, then user has access to the node for the specified operation.
      foreach (node_access_grants($op, $query->getMetaData('account')) as $realm => $gids) {
        foreach ($gids as $gid) {
          $or->condition(db_and()
            ->condition($access_alias . '.gid', $gid)
            ->condition($access_alias . '.realm', $realm)
          );
        }
      }

      if (count($or->conditions())) {
        $query->condition($or);
      }

      $query->condition($access_alias . 'grant_' . $op, 1, '>=');
    }
  }
";}s:12:"hook_install";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:12:"hook_install";s:10:"definition";s:23:"function hook_install()";s:11:"description";s:49:"Perform setup tasks when the module is installed.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:259:"
  // Populate the default {node_access} record.
  db_insert('node_access')
    ->fields(array(
      'nid' => 0,
      'gid' => 0,
      'realm' => 'all',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ))
    ->execute();
";}s:13:"hook_update_N";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:13:"hook_update_N";s:10:"definition";s:33:"function hook_update_N(&$sandbox)";s:11:"description";s:24:"Perform a single update.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1716:"
  // For non-multipass updates, the signature can simply be;
  // function hook_update_N() {

  // For most updates, the following is sufficient.
  db_add_field('mytable1', 'newcol', array('type' => 'int', 'not null' => TRUE, 'description' => 'My new integer column.'));

  // However, for more complex operations that may take a long time,
  // you may hook into Batch API as in the following example.

  // Update 3 users at a time to have an exclamation point after their names.
  // (They're really happy that we can do batch API in this hook!)
  if (!isset($sandbox['progress'])) {
    $sandbox['progress'] = 0;
    $sandbox['current_uid'] = 0;
    // We'll -1 to disregard the uid 0...
    $sandbox['max'] = db_query('SELECT COUNT(DISTINCT uid) FROM {users}')->fetchField() - 1;
  }

  $users = db_select('users', 'u')
    ->fields('u', array('uid', 'name'))
    ->condition('uid', $sandbox['current_uid'], '>')
    ->range(0, 3)
    ->orderBy('uid', 'ASC')
    ->execute();

  foreach ($users as $user) {
    $user->name .= '!';
    db_update('users')
      ->fields(array('name' => $user->name))
      ->condition('uid', $user->uid)
      ->execute();

    $sandbox['progress']++;
    $sandbox['current_uid'] = $user->uid;
  }

  $sandbox['#finished'] = empty($sandbox['max']) ? 1 : ($sandbox['progress'] / $sandbox['max']);

  // To display a message to the user when the update is completed, return it.
  // If you do not want to display a completion message, simply return nothing.
  return t('The update did what it was supposed to do.');

  // In case of an error, simply throw an exception with an error message.
  throw new DrupalUpdateException('Something went wrong; here is what you should do.');
";}s:24:"hook_update_dependencies";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_update_dependencies";s:10:"definition";s:35:"function hook_update_dependencies()";s:11:"description";s:64:"Return an array of information about module update dependencies.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:919:"
  // Indicate that the mymodule_update_7000() function provided by this module
  // must run after the another_module_update_7002() function provided by the
  // 'another_module' module.
  $dependencies['mymodule'][7000] = array(
    'another_module' => 7002,
  );
  // Indicate that the mymodule_update_7001() function provided by this module
  // must run before the yet_another_module_update_7004() function provided by
  // the 'yet_another_module' module. (Note that declaring dependencies in this
  // direction should be done only in rare situations, since it can lead to the
  // following problem: If a site has already run the yet_another_module
  // module's database updates before it updates its codebase to pick up the
  // newest mymodule code, then the dependency declared here will be ignored.)
  $dependencies['yet_another_module'][7004] = array(
    'mymodule' => 7001,
  );
  return $dependencies;
";}s:24:"hook_update_last_removed";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_update_last_removed";s:10:"definition";s:35:"function hook_update_last_removed()";s:11:"description";s:64:"Return a number which is no longer available as hook_update_N().";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:153:"
  // We've removed the 5.x-1.x version of mymodule, including database updates.
  // The next update function is mymodule_update_5200().
  return 5103;
";}s:14:"hook_uninstall";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_uninstall";s:10:"definition";s:25:"function hook_uninstall()";s:11:"description";s:44:"Remove any information that the module sets.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:38:"
  variable_del('upload_file_types');
";}s:11:"hook_enable";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_enable";s:10:"definition";s:22:"function hook_enable()";s:11:"description";s:50:"Perform necessary actions after module is enabled.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:29:"
  mymodule_cache_rebuild();
";}s:12:"hook_disable";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:12:"hook_disable";s:10:"definition";s:23:"function hook_disable()";s:11:"description";s:52:"Perform necessary actions before module is disabled.";s:11:"destination";s:15:"%module.install";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:29:"
  mymodule_cache_rebuild();
";}s:25:"hook_registry_files_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_registry_files_alter";s:10:"definition";s:53:"function hook_registry_files_alter(&$files, $modules)";s:11:"description";s:74:"Perform necessary alterations to the list of files parsed by the registry.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:435:"
  foreach ($modules as $module) {
    // Only add test files for disabled modules, as enabled modules should
    // already include any test files they provide.
    if (!$module->status) {
      $dir = $module->dir;
      foreach ($module->info['files'] as $file) {
        if (substr($file, -5) == '.test') {
          $files["$dir/$file"] = array('module' => $module->name, 'weight' => $module->weight);
        }
      }
    }
  }
";}s:18:"hook_install_tasks";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_install_tasks";s:10:"definition";s:44:"function hook_install_tasks(&$install_state)";s:11:"description";s:68:"Return an array of tasks to be performed by an installation profile.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:3468:"
  // Here, we define a variable to allow tasks to indicate that a particular,
  // processor-intensive batch process needs to be triggered later on in the
  // installation.
  $myprofile_needs_batch_processing = variable_get('myprofile_needs_batch_processing', FALSE);
  $tasks = array(
    // This is an example of a task that defines a form which the user who is
    // installing the site will be asked to fill out. To implement this task,
    // your profile would define a function named myprofile_data_import_form()
    // as a normal form API callback function, with associated validation and
    // submit handlers. In the submit handler, in addition to saving whatever
    // other data you have collected from the user, you might also call
    // variable_set('myprofile_needs_batch_processing', TRUE) if the user has
    // entered data which requires that batch processing will need to occur
    // later on.
    'myprofile_data_import_form' => array(
      'display_name' => st('Data import options'),
      'type' => 'form',
    ),
    // Similarly, to implement this task, your profile would define a function
    // named myprofile_settings_form() with associated validation and submit
    // handlers. This form might be used to collect and save additional
    // information from the user that your profile needs. There are no extra
    // steps required for your profile to act as an "installation wizard"; you
    // can simply define as many tasks of type 'form' as you wish to execute,
    // and the forms will be presented to the user, one after another.
    'myprofile_settings_form' => array(
      'display_name' => st('Additional options'),
      'type' => 'form',
    ),
    // This is an example of a task that performs batch operations. To
    // implement this task, your profile would define a function named
    // myprofile_batch_processing() which returns a batch API array definition
    // that the installer will use to execute your batch operations. Due to the
    // 'myprofile_needs_batch_processing' variable used here, this task will be
    // hidden and skipped unless your profile set it to TRUE in one of the
    // previous tasks.
    'myprofile_batch_processing' => array(
      'display_name' => st('Import additional data'),
      'display' => $myprofile_needs_batch_processing,
      'type' => 'batch',
      'run' => $myprofile_needs_batch_processing ? INSTALL_TASK_RUN_IF_NOT_COMPLETED : INSTALL_TASK_SKIP,
    ),
    // This is an example of a task that will not be displayed in the list that
    // the user sees. To implement this task, your profile would define a
    // function named myprofile_final_site_setup(), in which additional,
    // automated site setup operations would be performed. Since this is the
    // last task defined by your profile, you should also use this function to
    // call variable_del('myprofile_needs_batch_processing') and clean up the
    // variable that was used above. If you want the user to pass to the final
    // Drupal installation tasks uninterrupted, return no output from this
    // function. Otherwise, return themed output that the user will see (for
    // example, a confirmation page explaining that your profile's tasks are
    // complete, with a link to reload the current page and therefore pass on
    // to the final Drupal installation tasks when the user is ready to do so).
    'myprofile_final_site_setup' => array(
    ),
  );
  return $tasks;
";}s:22:"hook_drupal_goto_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_drupal_goto_alter";s:10:"definition";s:72:"function hook_drupal_goto_alter(&$path, &$options, &$http_response_code)";s:11:"description";s:53:"Change the page the user is sent to by drupal_goto().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:69:"
  // A good addition to misery module.
  $http_response_code = 500;
";}s:20:"hook_html_head_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_html_head_alter";s:10:"definition";s:46:"function hook_html_head_alter(&$head_elements)";s:11:"description";s:73:"Alter XHTML HEAD tags before they are rendered by drupal_get_html_head().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:276:"
  foreach ($head_elements as $key => $element) {
    if (isset($element['#attributes']['rel']) && $element['#attributes']['rel'] == 'canonical') {
      // I want a custom canonical URL.
      $head_elements[$key]['#attributes']['href'] = mymodule_canonical_url();
    }
  }
";}s:24:"hook_install_tasks_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_install_tasks_alter";s:10:"definition";s:58:"function hook_install_tasks_alter(&$tasks, $install_state)";s:11:"description";s:42:"Alter the full list of installation tasks.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:231:"
  // Replace the "Choose language" installation task provided by Drupal core
  // with a custom callback function defined by this installation profile.
  $tasks['install_select_locale']['function'] = 'myprofile_locale_selection';
";}s:32:"hook_file_mimetype_mapping_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_file_mimetype_mapping_alter";s:10:"definition";s:52:"function hook_file_mimetype_mapping_alter(&$mapping)";s:11:"description";s:75:"Alter MIME type mappings used to determine MIME type from a file extension.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:319:"
  // Add new MIME type 'drupal/info'.
  $mapping['mimetypes']['example_info'] = 'drupal/info';
  // Add new extension '.info' and map it to the 'drupal/info' MIME type.
  $mapping['extensions']['info'] = 'example_info';
  // Override existing extension mapping for '.ogg' files.
  $mapping['extensions']['ogg'] = 189;
";}s:16:"hook_action_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_action_info";s:10:"definition";s:27:"function hook_action_info()";s:11:"description";s:35:"Declares information about actions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:806:"
  return array(
    'comment_unpublish_action' => array(
      'type' => 'comment',
      'label' => t('Unpublish comment'),
      'configurable' => FALSE,
      'behavior' => array('changes_property'),
      'triggers' => array('comment_presave', 'comment_insert', 'comment_update'),
    ),
    'comment_unpublish_by_keyword_action' => array(
      'type' => 'comment',
      'label' => t('Unpublish comment containing keyword(s)'),
      'configurable' => TRUE,
      'behavior' => array('changes_property'),
      'triggers' => array('comment_presave', 'comment_insert', 'comment_update'),
    ),
    'comment_save_action' => array(
      'type' => 'comment',
      'label' => t('Save comment'),
      'configurable' => FALSE,
      'triggers' => array('comment_insert', 'comment_update'),
    ),
  );
";}s:19:"hook_actions_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_actions_delete";s:10:"definition";s:34:"function hook_actions_delete($aid)";s:11:"description";s:41:"Executes code after an action is deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:82:"
  db_delete('actions_assignments')
    ->condition('aid', $aid)
    ->execute();
";}s:22:"hook_action_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_action_info_alter";s:10:"definition";s:42:"function hook_action_info_alter(&$actions)";s:11:"description";s:46:"Alters the actions declared by another module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:93:"
  $actions['node_unpublish_action']['label'] = t('Unpublish and remove from public view.');
";}s:18:"hook_archiver_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_archiver_info";s:10:"definition";s:29:"function hook_archiver_info()";s:11:"description";s:32:"Declare archivers to the system.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:138:"
  return array(
    'tar' => array(
      'class' => 'ArchiverTar',
      'extensions' => array('tar', 'tar.gz', 'tar.bz2'),
    ),
  );
";}s:24:"hook_archiver_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_archiver_info_alter";s:10:"definition";s:41:"function hook_archiver_info_alter(&$info)";s:11:"description";s:53:"Alter archiver information declared by other modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:41:"
  $info['tar']['extensions'][] = 'tgz';
";}s:22:"hook_date_format_types";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_date_format_types";s:10:"definition";s:33:"function hook_date_format_types()";s:11:"description";s:29:"Define additional date types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:143:"
  // Define the core date format types.
  return array(
    'long' => t('Long'),
    'medium' => t('Medium'),
    'short' => t('Short'),
  );
";}s:28:"hook_date_format_types_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_date_format_types_alter";s:10:"definition";s:46:"function hook_date_format_types_alter(&$types)";s:11:"description";s:27:"Modify existing date types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:77:"
  foreach ($types as $name => $type) {
    $types[$name]['locked'] = 1;
  }
";}s:17:"hook_date_formats";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_date_formats";s:10:"definition";s:28:"function hook_date_formats()";s:11:"description";s:31:"Define additional date formats.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:383:"
  return array(
    array(
      'type' => 'mymodule_extra_long',
      'format' => 'l jS F Y H:i:s e',
      'locales' => array('en-ie'),
    ),
    array(
      'type' => 'mymodule_extra_long',
      'format' => 'l jS F Y h:i:sa',
      'locales' => array('en', 'en-us'),
    ),
    array(
      'type' => 'short',
      'format' => 'F Y',
      'locales' => array(),
    ),
  );
";}s:23:"hook_date_formats_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_date_formats_alter";s:10:"definition";s:43:"function hook_date_formats_alter(&$formats)";s:11:"description";s:46:"Alter date formats declared by another module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:88:"
  foreach ($formats as $id => $format) {
    $formats[$id]['locales'][] = 'en-ca';
  }
";}s:33:"hook_page_delivery_callback_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_page_delivery_callback_alter";s:10:"definition";s:54:"function hook_page_delivery_callback_alter(&$callback)";s:11:"description";s:89:"Alters the delivery callback used to send the result of the page callback to the browser.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:391:"
  // jQuery sets a HTTP_X_REQUESTED_WITH header of 'XMLHttpRequest'.
  // If a page would normally be delivered as an html page, and it is called
  // from jQuery, deliver it instead as an Ajax response.
  if (isset($_SERVER['HTTP_X_REQUESTED_WITH']) && $_SERVER['HTTP_X_REQUESTED_WITH'] == 'XMLHttpRequest' && $callback == 'drupal_deliver_html_page') {
    $callback = 'ajax_deliver';
  }
";}s:29:"hook_system_themes_page_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_system_themes_page_alter";s:10:"definition";s:54:"function hook_system_themes_page_alter(&$theme_groups)";s:11:"description";s:29:"Alters theme operation links.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:333:"
  foreach ($theme_groups as $state => &$group) {
    foreach ($theme_groups[$state] as &$theme) {
      // Add a foo link to each list of theme operations.
      $theme->operations[] = array(
        'title' => t('Foo'),
        'href' => 'admin/appearance/foo',
        'query' => array('theme' => $theme->name)
      );
    }
  }
";}s:22:"hook_url_inbound_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_url_inbound_alter";s:10:"definition";s:71:"function hook_url_inbound_alter(&$path, $original_path, $path_language)";s:11:"description";s:28:"Alters inbound URL requests.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:221:"
  // Create the path user/me/edit, which allows a user to edit their account.
  if (preg_match('|^user/me/edit(/.*)?|', $path, $matches)) {
    global $user;
    $path = 'user/' . $user->uid . '/edit' . $matches[1];
  }
";}s:23:"hook_url_outbound_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_url_outbound_alter";s:10:"definition";s:67:"function hook_url_outbound_alter(&$path, &$options, $original_path)";s:11:"description";s:21:"Alters outbound URLs.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:412:"
  // Use an external RSS feed rather than the Drupal one.
  if ($path == 'rss.xml') {
    $path = 'http://example.com/rss.xml';
    $options['external'] = TRUE;
  }

  // Instead of pointing to user/[uid]/edit, point to user/me/edit.
  if (preg_match('|^user/([0-9]*)/edit(/.*)?|', $path, $matches)) {
    global $user;
    if ($user->uid == $matches[1]) {
      $path = 'user/me/edit' . $matches[2];
    }
  }
";}s:19:"hook_username_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_username_alter";s:10:"definition";s:46:"function hook_username_alter(&$name, $account)";s:11:"description";s:48:"Alter the username that is displayed for a user.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:140:"
  // Display the user's uid instead of name.
  if (isset($account->uid)) {
    $name = t('User !uid', array('!uid' => $account->uid));
  }
";}s:11:"hook_tokens";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_tokens";s:10:"definition";s:85:"function hook_tokens($type, $tokens, array $data = array(), array $options = array())";s:11:"description";s:50:"Provide replacement values for placeholder tokens.";s:11:"destination";s:18:"%module.tokens.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:1706:"
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  $replacements = array();

  if ($type == 'node' && !empty($data['node'])) {
    $node = $data['node'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        // Simple key values on the node.
        case 'nid':
          $replacements[$original] = $node->nid;
          break;

        case 'title':
          $replacements[$original] = $sanitize ? check_plain($node->title) : $node->title;
          break;

        case 'edit-url':
          $replacements[$original] = url('node/' . $node->nid . '/edit', $url_options);
          break;

        // Default values for the chained tokens handled below.
        case 'author':
          $name = ($node->uid == 0) ? variable_get('anonymous', t('Anonymous')) : $node->name;
          $replacements[$original] = $sanitize ? filter_xss($name) : $name;
          break;

        case 'created':
          $replacements[$original] = format_date($node->created, 'medium', '', NULL, $language_code);
          break;
      }
    }

    if ($author_tokens = token_find_with_prefix($tokens, 'author')) {
      $author = user_load($node->uid);
      $replacements += token_generate('user', $author_tokens, array('user' => $author), $options);
    }

    if ($created_tokens = token_find_with_prefix($tokens, 'created')) {
      $replacements += token_generate('date', $created_tokens, array('date' => $node->created), $options);
    }
  }

  return $replacements;
";}s:17:"hook_tokens_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_tokens_alter";s:10:"definition";s:64:"function hook_tokens_alter(array &$replacements, array $context)";s:11:"description";s:48:"Alter replacement values for placeholder tokens.";s:11:"destination";s:18:"%module.tokens.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:710:"
  $options = $context['options'];

  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  if ($context['type'] == 'node' && !empty($context['data']['node'])) {
    $node = $context['data']['node'];

    // Alter the [node:title] token, and replace it with the rendered content
    // of a field (field_title).
    if (isset($context['tokens']['title'])) {
      $title = field_view_field('node', $node, 'field_title', 'default', $language_code);
      $replacements[$context['tokens']['title']] = drupal_render($title);
    }
  }
";}s:15:"hook_token_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_token_info";s:10:"definition";s:26:"function hook_token_info()";s:11:"description";s:71:"Provide information about available placeholder tokens and token types.";s:11:"destination";s:18:"%module.tokens.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:920:"
  $type = array(
    'name' => t('Nodes'),
    'description' => t('Tokens related to individual nodes.'),
    'needs-data' => 'node',
  );

  // Core tokens for nodes.
  $node['nid'] = array(
    'name' => t("Node ID"),
    'description' => t("The unique ID of the node."),
  );
  $node['title'] = array(
    'name' => t("Title"),
    'description' => t("The title of the node."),
  );
  $node['edit-url'] = array(
    'name' => t("Edit URL"),
    'description' => t("The URL of the node's edit page."),
  );

  // Chained tokens for nodes.
  $node['created'] = array(
    'name' => t("Date created"),
    'description' => t("The date the node was posted."),
    'type' => 'date',
  );
  $node['author'] = array(
    'name' => t("Author"),
    'description' => t("The author of the node."),
    'type' => 'user',
  );

  return array(
    'types' => array('node' => $type),
    'tokens' => array('node' => $node),
  );
";}s:21:"hook_token_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_token_info_alter";s:10:"definition";s:38:"function hook_token_info_alter(&$data)";s:11:"description";s:70:"Alter the metadata about available placeholder tokens and token types.";s:11:"destination";s:18:"%module.tokens.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:512:"
  // Modify description of node tokens for our site.
  $data['tokens']['node']['nid'] = array(
    'name' => t("Node ID"),
    'description' => t("The unique ID of the article."),
  );
  $data['tokens']['node']['title'] = array(
    'name' => t("Title"),
    'description' => t("The title of the article."),
  );

  // Chained tokens for nodes.
  $data['tokens']['node']['created'] = array(
    'name' => t("Date created"),
    'description' => t("The date the article was posted."),
    'type' => 'date',
  );
";}s:16:"hook_batch_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_batch_alter";s:10:"definition";s:34:"function hook_batch_alter(&$batch)";s:11:"description";s:52:"Alter batch information before a batch is processed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:404:"
  // If the current page request is inside the overlay, add ?render=overlay to
  // the success callback URL, so that it appears correctly within the overlay.
  if (overlay_get_mode() == 'child') {
    if (isset($batch['url_options']['query'])) {
      $batch['url_options']['query']['render'] = 'overlay';
    }
    else {
      $batch['url_options']['query'] = array('render' => 'overlay');
    }
  }
";}s:17:"hook_updater_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_updater_info";s:10:"definition";s:28:"function hook_updater_info()";s:11:"description";s:65:"Provide information on Updaters (classes that can update Drupal).";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:263:"
  return array(
    'module' => array(
      'class' => 'ModuleUpdater',
      'name' => t('Update modules'),
      'weight' => 0,
    ),
    'theme' => array(
      'class' => 'ThemeUpdater',
      'name' => t('Update themes'),
      'weight' => 0,
    ),
  );
";}s:23:"hook_updater_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_updater_info_alter";s:10:"definition";s:44:"function hook_updater_info_alter(&$updaters)";s:11:"description";s:36:"Alter the Updater information array.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:156:"
  // Adjust weight so that the theme Updater gets a chance to handle a given
  // update task before module updaters.
  $updaters['theme']['weight'] = -1;
";}s:20:"hook_countries_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_countries_alter";s:10:"definition";s:42:"function hook_countries_alter(&$countries)";s:11:"description";s:31:"Alter the default country list.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:97:"
  // Elbonia is now independent, so add it to the country list.
  $countries['EB'] = 'Elbonia';
";}s:27:"hook_menu_site_status_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_menu_site_status_alter";s:10:"definition";s:63:"function hook_menu_site_status_alter(&$menu_site_status, $path)";s:11:"description";s:44:"Control site status before menu dispatching.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:236:"
  // Allow access to my_module/authentication even if site is in offline mode.
  if ($menu_site_status == MENU_SITE_OFFLINE && user_is_anonymous() && $path == 'my_module/authentication') {
    $menu_site_status = MENU_SITE_ONLINE;
  }
";}s:22:"hook_filetransfer_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_filetransfer_info";s:10:"definition";s:33:"function hook_filetransfer_info()";s:11:"description";s:69:"Register information about FileTransfer classes provided by a module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:180:"
  $info['sftp'] = array(
    'title' => t('SFTP (Secure FTP)'),
    'file' => 'sftp.filetransfer.inc',
    'class' => 'FileTransferSFTP',
    'weight' => 10,
  );
  return $info;
";}s:28:"hook_filetransfer_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_filetransfer_info_alter";s:10:"definition";s:58:"function hook_filetransfer_info_alter(&$filetransfer_info)";s:11:"description";s:38:"Alter the FileTransfer class registry.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:219:"
  if (variable_get('paranoia', FALSE)) {
    // Remove the FTP option entirely.
    unset($filetransfer_info['ftp']);
    // Make sure the SSH option is listed first.
    $filetransfer_info['ssh']['weight'] = -10;
  }
";}s:21:"callback_queue_worker";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:21:"callback_queue_worker";s:10:"definition";s:48:"function callback_queue_worker($queue_item_data)";s:11:"description";s:28:"Work on a single queue item.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:94:"
  $node = node_load($queue_item_data);
  $node->title = 'Updated title';
  node_save($node);
";}s:24:"callback_entity_info_uri";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:24:"callback_entity_info_uri";s:10:"definition";s:42:"function callback_entity_info_uri($entity)";s:11:"description";s:29:"Return the URI for an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:60:"
  return array(
    'path' => 'node/' . $entity->nid,
  );
";}s:26:"callback_entity_info_label";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:26:"callback_entity_info_label";s:10:"definition";s:58:"function callback_entity_info_label($entity, $entity_type)";s:11:"description";s:30:"Return the label of an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:70:"
  return empty($entity->title) ? 'Untitled entity' : $entity->title;
";}s:29:"callback_entity_info_language";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:29:"callback_entity_info_language";s:10:"definition";s:61:"function callback_entity_info_language($entity, $entity_type)";s:11:"description";s:39:"Return the language code of the entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:29:"public://hooks/system.api.php";s:4:"body";s:29:"
  return $entity->language;
";}s:37:"hook_form_system_theme_settings_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_form_system_theme_settings_alter";s:10:"definition";s:68:"function hook_form_system_theme_settings_alter(&$form, &$form_state)";s:11:"description";s:55:"Allow themes to alter the theme-specific settings form.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:323:"
  // Add a checkbox to toggle the breadcrumb trail.
  $form['toggle_breadcrumb'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display the breadcrumb'),
    '#default_value' => theme_get_setting('toggle_breadcrumb'),
    '#description'   => t('Show a trail of links from the homepage to the current page.'),
  );
";}s:15:"hook_preprocess";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_preprocess";s:10:"definition";s:44:"function hook_preprocess(&$variables, $hook)";s:11:"description";s:41:"Preprocess theme variables for templates.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:837:"
 static $hooks;

  // Add contextual links to the variables, if the user has permission.

  if (!user_access('access contextual links')) {
    return;
  }

  if (!isset($hooks)) {
    $hooks = theme_get_registry();
  }

  // Determine the primary theme function argument.
  if (isset($hooks[$hook]['variables'])) {
    $keys = array_keys($hooks[$hook]['variables']);
    $key = $keys[0];
  }
  else {
    $key = $hooks[$hook]['render element'];
  }

  if (isset($variables[$key])) {
    $element = $variables[$key];
  }

  if (isset($element) && is_array($element) && !empty($element['#contextual_links'])) {
    $variables['title_suffix']['contextual_links'] = contextual_links_view($element);
    if (!empty($variables['title_suffix']['contextual_links'])) {
      $variables['classes_array'][] = 'contextual-links-region';
    }
  }
";}s:20:"hook_preprocess_HOOK";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_preprocess_HOOK";s:10:"definition";s:42:"function hook_preprocess_HOOK(&$variables)";s:11:"description";s:53:"Preprocess theme variables for a specific theme hook.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:172:"
  // This example is from rdf_preprocess_image(). It adds an RDF attribute
  // to the image hook's variables.
  $variables['attributes']['typeof'] = array('foaf:Image');
";}s:12:"hook_process";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:12:"hook_process";s:10:"definition";s:41:"function hook_process(&$variables, $hook)";s:11:"description";s:38:"Process theme variables for templates.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:532:"
  // Wraps variables in RDF wrappers.
  if (!empty($variables['rdf_template_variable_attributes_array'])) {
    foreach ($variables['rdf_template_variable_attributes_array'] as $variable_name => $attributes) {
      $context = array(
        'hook' => $hook,
        'variable_name' => $variable_name,
        'variables' => $variables,
      );
      $variables[$variable_name] = theme('rdf_template_variable_wrapper', array('content' => $variables[$variable_name], 'attributes' => $attributes, 'context' => $context));
    }
  }
";}s:17:"hook_process_HOOK";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_process_HOOK";s:10:"definition";s:39:"function hook_process_HOOK(&$variables)";s:11:"description";s:50:"Process theme variables for a specific theme hook.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:375:"
  // @todo There are no use-cases in Drupal core for this hook. Find one from a
  //   contributed module, or come up with a good example. Coming up with a good
  //   example might be tough, since the intent is for nearly everything to be
  //   achievable via preprocess functions, and for process functions to only be
  //   used when requiring the later execution time.
";}s:19:"hook_themes_enabled";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_themes_enabled";s:10:"definition";s:41:"function hook_themes_enabled($theme_list)";s:11:"description";s:32:"Respond to themes being enabled.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:77:"
  foreach ($theme_list as $theme) {
    block_theme_initialize($theme);
  }
";}s:20:"hook_themes_disabled";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_themes_disabled";s:10:"definition";s:42:"function hook_themes_disabled($theme_list)";s:11:"description";s:33:"Respond to themes being disabled.";s:11:"destination";s:12:"template.php";s:12:"dependencies";a:0:{}s:5:"group";s:6:"system";s:9:"file_path";s:28:"public://hooks/theme.api.php";s:4:"body";s:62:"
 // Clear all update module caches.
  _update_cache_clear();
";}}s:5:"image";a:7:{s:22:"hook_image_effect_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_image_effect_info";s:10:"definition";s:33:"function hook_image_effect_info()";s:11:"description";s:60:"Define information about image effects provided by a module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:413:"
  $effects = array();

  $effects['mymodule_resize'] = array(
    'label' => t('Resize'),
    'help' => t('Resize an image to an exact set of dimensions, ignoring aspect ratio.'),
    'effect callback' => 'mymodule_resize_effect',
    'dimensions callback' => 'mymodule_resize_dimensions',
    'form callback' => 'mymodule_resize_form',
    'summary theme' => 'mymodule_resize_summary',
  );

  return $effects;
";}s:28:"hook_image_effect_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_image_effect_info_alter";s:10:"definition";s:48:"function hook_image_effect_info_alter(&$effects)";s:11:"description";s:59:"Alter the information provided in hook_image_effect_info().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:279:"
  // Override the Image module's crop effect with more options.
  $effects['image_crop']['effect callback'] = 'mymodule_crop_effect';
  $effects['image_crop']['dimensions callback'] = 'mymodule_crop_dimensions';
  $effects['image_crop']['form callback'] = 'mymodule_crop_form';
";}s:21:"hook_image_style_save";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_image_style_save";s:10:"definition";s:38:"function hook_image_style_save($style)";s:11:"description";s:32:"Respond to image style updating.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:302:"
  // If a module defines an image style and that style is renamed by the user
  // the module should update any references to that style.
  if (isset($style['old_name']) && $style['old_name'] == variable_get('mymodule_image_style', '')) {
    variable_set('mymodule_image_style', $style['name']);
  }
";}s:23:"hook_image_style_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_image_style_delete";s:10:"definition";s:40:"function hook_image_style_delete($style)";s:11:"description";s:32:"Respond to image style deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:292:"
  // Administrators can choose an optional replacement style when deleting.
  // Update the modules style variable accordingly.
  if (isset($style['old_name']) && $style['old_name'] == variable_get('mymodule_image_style', '')) {
    variable_set('mymodule_image_style', $style['name']);
  }
";}s:22:"hook_image_style_flush";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_image_style_flush";s:10:"definition";s:39:"function hook_image_style_flush($style)";s:11:"description";s:32:"Respond to image style flushing.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:115:"
  // Empty cached data that contains information about the style.
  cache_clear_all('*', 'cache_mymodule', TRUE);
";}s:23:"hook_image_styles_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_image_styles_alter";s:10:"definition";s:42:"function hook_image_styles_alter(&$styles)";s:11:"description";s:62:"Modify any image styles provided by other modules or the user.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:365:"
  // Check that we only affect a default style.
  if ($styles['thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    // Add an additional effect to the thumbnail style.
    $styles['thumbnail']['effects'][] = array(
      'name' => 'image_desaturate',
      'data' => array(),
      'weight' => 1,
      'effect callback' => 'image_desaturate_effect',
    );
  }
";}s:25:"hook_image_default_styles";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_image_default_styles";s:10:"definition";s:36:"function hook_image_default_styles()";s:11:"description";s:62:"Provide module-based image styles for reuse throughout Drupal.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"image";s:9:"file_path";s:28:"public://hooks/image.api.php";s:4:"body";s:415:"
  $styles = array();

  $styles['mymodule_preview'] = array(
    'label' => 'My module preview',
    'effects' => array(
      array(
        'name' => 'image_scale',
        'data' => array('width' => 400, 'height' => 400, 'upscale' => 1),
        'weight' => 0,
      ),
      array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
";}}s:9:"ip_geoloc";a:3:{s:29:"hook_get_ip_geolocation_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_get_ip_geolocation_alter";s:10:"definition";s:50:"function hook_get_ip_geolocation_alter(&$location)";s:11:"description";s:75:"To hook in your own gelocation data provider or to modify the existing one.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"ip_geoloc";s:9:"file_path";s:32:"public://hooks/ip_geoloc.api.php";s:4:"body";s:150:"
  if (empty($location['ip_address'])) {
    return;
  }
  $location['provider'] = 'MYMODULE';
  // ....
  $location['city'] = $location['locality'];
";}s:37:"hook_ip_geoloc_marker_locations_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_ip_geoloc_marker_locations_alter";s:10:"definition";s:74:"function hook_ip_geoloc_marker_locations_alter(&$marker_locations, &$view)";s:11:"description";s:73:"Modify the array of locations coming from the View before they're mapped.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"ip_geoloc";s:9:"file_path";s:32:"public://hooks/ip_geoloc.api.php";s:4:"body";s:1162:"
  // The $marker_location->marker_color has to be the name (without extension)
  // of one of the files in the ip_geoloc/markers directory, or alternative,
  // if configured at admin/config/system/ip_geoloc.
  // The code below changes the color of the first two markers returned by the
  // View to orange and yellow and then prepends an additional marker, not in
  // the View.
  // Because the marker is added at the front of the location array, the map can
  // be centered on it. Or you can choose one of the other centering options, as
  // per normal.
  //
  // Machine name of your view goes in the line below.
  if ($view->name == 'my_beautiful_view') {
    if (count($marker_locations) >= 2) {
      $marker_locations[0]->marker_color = 'orange';
      $marker_locations[1]->marker_color = 'yellow';
    }
    $observatory = new stdClass();
    $observatory->latitude = 51.4777;
    $observatory->longitude = -0.0015;
    $observatory->balloon_text = t('The zero-meridian passes through the courtyard of the <strong>Greenwich</strong> observatory.');
    $observatory->marker_color = 'white';

    array_unshift($marker_locations, $observatory);
  }
";}s:41:"hook_ip_geoloc_get_visitor_location_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:41:"hook_ip_geoloc_get_visitor_location_alter";s:10:"definition";s:62:"function hook_ip_geoloc_get_visitor_location_alter(&$location)";s:11:"description";s:40:"Alter the visitor's location attributes.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"ip_geoloc";s:9:"file_path";s:32:"public://hooks/ip_geoloc.api.php";s:4:"body";s:168:"
  $location['latitude'] = 46.734;
  $location['longitude'] = 8.957;
  $location['popup'] = t('Your current location');
  $location['tooltip'] = t('Current location');
";}}s:13:"job_scheduler";a:2:{s:28:"hook_cron_job_scheduler_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_cron_job_scheduler_info";s:10:"definition";s:39:"function hook_cron_job_scheduler_info()";s:11:"description";s:70:"Declare job scheduling holding items that need to be run periodically.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"job_scheduler";s:9:"file_path";s:36:"public://hooks/job_scheduler.api.php";s:4:"body";s:214:"
  $info = array();
  $info['example_reset'] = array(
    'worker callback' => 'example_cache_clear_worker',
  );
  $info['example_import'] = array(
    'queue name' => 'example_import_queue',
  );
  return $info;
";}s:34:"hook_cron_job_scheduler_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_cron_job_scheduler_info_alter";s:10:"definition";s:51:"function hook_cron_job_scheduler_info_alter(&$info)";s:11:"description";s:46:"Alter cron queue information before cron runs.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"job_scheduler";s:9:"file_path";s:36:"public://hooks/job_scheduler.api.php";s:4:"body";s:129:"
  // Replace the default callback 'example_cache_clear_worker'
  $info['example_reset']['worker callback'] = 'my_custom_reset';
";}}s:7:"leaflet";a:3:{s:21:"hook_leaflet_map_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_leaflet_map_info";s:10:"definition";s:32:"function hook_leaflet_map_info()";s:11:"description";s:62:"Define one or map definitions to be used when rendering a map.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"leaflet";s:9:"file_path";s:30:"public://hooks/leaflet.api.php";s:4:"body";s:1943:"
  return array(
    'OSM Mapnik' => array(
      'label' => 'OSM Mapnik',
      'description' => t('Leaflet default map.'),
      'settings' => array(
        'dragging' => TRUE,
        'touchZoom' => TRUE,
        'scrollWheelZoom' => TRUE,
        'doubleClickZoom' => TRUE,
        'zoomControl' => TRUE,
        'attributionControl' => TRUE,
        'trackResize' => TRUE,
        'fadeAnimation' => TRUE,
        'zoomAnimation' => TRUE,
        'closePopupOnClick' => TRUE,
        'layerControl' => TRUE,
        // 'minZoom' => 10,
        // 'maxZoom' => 15,
        // 'zoom' => 15, // set the map zoom fixed to 15
      ),
      'layers' => array(
        'earth' => array(
          'urlTemplate' => '//{s}.tile.openstreetmap.org/{z}/{x}/{y}.png',
          'options' => array(
            'attribution' => 'OSM Mapnik',
            // The switchZoom controls require multiple layers, referencing one
            // another as "switchLayer".
            'switchZoomBelow' => 15,
            'switchLayer' => 'satellite',
          ),
        ),
        'satellite' => array(
          'urlTemplate' => '//otile{s}.mqcdn.com/tiles/1.0.0/sat/{z}/{x}/{y}.png',
          'options' => array(
            'attribution' => 'OSM Mapnik',
            'subdomains' => '1234',
            'switchZoomAbove' => 15,
            'switchLayer' => 'earth',
          ),
        ),
      ),
      // Uncomment the lines below to use a custom icon
      // 'icon' => array(
      //   'iconUrl'       => '/sites/default/files/icon.png',
      //   'iconSize'      => array('x' => '20', 'y' => '40'),
      //   'iconAnchor'    => array('x' => '20', 'y' => '40'),
      //   'popupAnchor'   => array('x' => '-8', 'y' => '-32'),
      //   'shadowUrl'     => '/sites/default/files/icon-shadow.png',
      //   'shadowSize'    => array('x' => '25', 'y' => '27'),
      //   'shadowAnchor'  => array('x' => '0', 'y' => '27'),
      // ),
    ),
  );
";}s:31:"hook_leaflet_map_prebuild_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_leaflet_map_prebuild_alter";s:10:"definition";s:52:"function hook_leaflet_map_prebuild_alter(&$settings)";s:11:"description";s:49:"Alters the js settings passed to the leaflet map.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"leaflet";s:9:"file_path";s:30:"public://hooks/leaflet.api.php";s:4:"body";s:86:"
  $settings['mapId'] = 'my-map-id';
  $settings['features']['icon'] = 'my-icon-url';
";}s:42:"hook_leaflet_views_alter_points_data_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:42:"hook_leaflet_views_alter_points_data_alter";s:10:"definition";s:70:"function hook_leaflet_views_alter_points_data_alter($result, &$points)";s:11:"description";s:75:"Allow modules to alter the points data while rendering a leaflet views row.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"leaflet";s:9:"file_path";s:36:"public://hooks/leaflet_views.api.php";s:4:"body";s:219:"
  if (isset($result->number)) {
    // Add number value to every points data entry, if present.
    array_walk($points, function(&$point, $key, $number) {
      $point['number'] = $number;
    }, $result->number);
  }
";}}s:21:"leaflet_markercluster";a:1:{s:27:"hook_leaflet_map_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_leaflet_map_info_alter";s:10:"definition";s:44:"function hook_leaflet_map_info_alter(&$maps)";s:11:"description";s:76:"Add extra options for Leaflet Markercluster, using hooks provided by Leaflet";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:21:"leaflet_markercluster";s:9:"file_path";s:44:"public://hooks/leaflet_markercluster.api.php";s:4:"body";s:1966:"
  // See https://github.com/Leaflet/Leaflet.markercluster for all options
  $maps['OSM Mapnik']['settings'] += array(
    // When you click a cluster we zoom to its bounds.
    'zoomToBoundsOnClick' => TRUE,
    // When you mouse over a cluster it shows the bounds of its markers.
    'showCoverageOnHover' => TRUE,
    // When you click a cluster at the bottom zoom level we spiderfy it so you
    // can see all of its markers.
    'spiderfyOnMaxZoom' => TRUE,
    // If set to true then adding individual markers to the MarkerClusterGroup
    // after it has been added to the map will add the marker and animate it
    // into the cluster. Defaults to false as this gives better performance when
    // bulk adding markers.
    'animateAddingMarkers' => FALSE,
    // If set, at this zoom level and below markers will not be clustered. This
    // defaults to disabled.
    'disableClusteringAtZoom' => FALSE,
    // The maximum radius that a cluster will cover from the central marker
    // (in pixels). Default 80. Decreasing will make more smaller clusters.
    'maxClusterRadius' => 80,
    // Add tooltips to each cluster showing the region the cluster is in and its
    // subregions. Requires you to pass in a region hierarchy on each marker.
    // See module drupal.org/project/ip_geoloc for details.
    'addRegionToolTips' => TRUE,
  );

  // Adding a custom cluster icon. This overwrites the standard cluster icons 
  // and does not yet support icon clusters depending on the cluster size.
  $maps['OSM Mapnik']['markercluster_icon'] = array(
    'iconUrl'       => '/sites/default/files/icon.png',
    'iconSize'      => array('x' => '20', 'y' => '40'),
    'iconAnchor'    => array('x' => '20', 'y' => '40'),
    'popupAnchor'   => array('x' => '-8', 'y' => '-32'),
    'shadowUrl'     => '/sites/default/files/icon-shadow.png',
    'shadowSize'    => array('x' => '25', 'y' => '27'),
    'shadowAnchor'  => array('x' => '0', 'y' => '27'),
  );
";}}s:9:"libraries";a:3:{s:19:"hook_libraries_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_libraries_info";s:10:"definition";s:30:"function hook_libraries_info()";s:11:"description";s:44:"Return information about external libraries.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"libraries";s:9:"file_path";s:32:"public://hooks/libraries.api.php";s:4:"body";s:8418:"
  // The following is a full explanation of all properties. See below for more
  // concrete example implementations.

  // This array key lets Libraries API search for 'sites/all/libraries/example'
  // directory, which should contain the entire, original extracted library.
  $libraries['example'] = array(
    // Only used in administrative UI of Libraries API.
    'name' => 'Example library',
    'vendor url' => 'http://example.com',
    'download url' => 'http://example.com/download',
    // It is important that this URL does not include the actual version to
    // download. Not all libraries provide such a static URL.
    'download file url' => 'http://example.com/latest.tar.gz',
    // Optional: If, after extraction, the actual library files are contained in
    // 'sites/all/libraries/example/lib', specify the relative path here.
    'path' => 'lib',
    // Optional: Define a custom version detection callback, if required.
    'version callback' => 'mymodule_get_version',
    // Specify arguments for the version callback. By default,
    // libraries_get_version() takes a named argument array:
    'version arguments' => array(
      'file' => 'docs/CHANGELOG.txt',
      'pattern' => '@version\s+([0-9a-zA-Z\.-]+)@',
      'lines' => 5,
      'cols' => 20,
    ),
    // Default list of files of the library to load. Important: Only specify
    // third-party files belonging to the library here, not integration files of
    // your module.
    'files' => array(
      // 'js' and 'css' follow the syntax of hook_library(), but file paths are
      // relative to the library path.
      'js' => array(
        'exlib.js',
        'gadgets/foo.js',
      ),
      'css' => array(
        'lib_style.css',
        'skin/example.css',
      ),
      // For PHP libraries, specify include files here, still relative to the
      // library path.
      'php' => array(
        'exlib.php',
        'exlib.inc',
      ),
    ),
    // Optional: Specify alternative variants of the library, if available.
    'variants' => array(
      // All properties defined for 'minified' override top-level properties.
      'minified' => array(
        'files' => array(
          'js' => array(
            'exlib.min.js',
            'gadgets/foo.min.js',
          ),
          'css' => array(
            'lib_style.css',
            'skin/example.css',
          ),
        ),
        'variant callback' => 'mymodule_check_variant',
        'variant arguments' => array(
          'variant' => 'minified',
        ),
      ),
    ),
    // Optional, but usually required: Override top-level properties for later
    // versions of the library. The properties of the minimum version that is
    // matched override the top-level properties. Note:
    // - When registering 'versions', it usually does not make sense to register
    //   'files', 'variants', and 'integration files' on the top-level, as most
    //   of those likely need to be different per version and there are no
    //   defaults.
    // - The array keys have to be strings, as PHP does not support floats for
    //   array keys.
    'versions' => array(
      '2' => array(
        'files' => array(
          'js' => array('exlib.js'),
          'css' => array('exlib_style.css'),
        ),
      ),
      '3.0' => array(
        'files' => array(
          'js' => array('exlib.js'),
          'css' => array('lib_style.css'),
        ),
      ),
      '3.2' => array(
        'files' => array(
          'js' => array(
            'exlib.js',
            'gadgets/foo.js',
          ),
          'css' => array(
            'lib_style.css',
            'skin/example.css',
          ),
        ),
      ),
    ),
    // Optional: Register files to auto-load for your module. All files must be
    // keyed by module, and follow the syntax of the 'files' property.
    'integration files' => array(
      'mymodule' => array(
        'js' => array('ex_lib.inc'),
      ),
    ),
    // Optionally register callbacks to apply to the library during different
    // stages of its lifetime ('callback groups').
    'callbacks' => array(
      // Used to alter the info associated with the library.
      'info' => array(
        'mymodule_example_libraries_info_callback',
      ),
      // Called before detecting the given library.
      'pre-detect' => array(
        'mymodule_example_libraries_predetect_callback',
      ),
      // Called after detecting the library.
      'post-detect' => array(
        'mymodule_example_libraries_postdetect_callback',
      ),
      // Called before the library's dependencies are loaded.
      'pre-dependencies-load' => array(
        'mymodule_example_libraries_pre_dependencies_load_callback',
      ),
      // Called before the library is loaded.
      'pre-load' => array(
        'mymodule_example_libraries_preload_callback',
      ),
      // Called after the library is loaded.
      'post-load' => array(
        'mymodule_example_libraries_postload_callback',
      ),
    ),
  );

  // A very simple library. No changing APIs (hence, no versions), no variants.
  // Expected to be extracted into 'sites/all/libraries/simple'.
  $libraries['simple'] = array(
    'name' => 'Simple library',
    'vendor url' => 'http://example.com/simple',
    'download url' => 'http://example.com/simple',
    // The download file URL can also point to a single file (instead of an
    // archive).
    'download file url' => 'http://example.com/latest/simple.js',
    'version arguments' => array(
      'file' => 'readme.txt',
      // Best practice: Document the actual version strings for later reference.
      // 1.x: Version 1.0
      'pattern' => '/Version (\d+)/',
      'lines' => 5,
    ),
    'files' => array(
      'js' => array('simple.js'),
    ),
  );

  // A library that (naturally) evolves over time with API changes.
  $libraries['tinymce'] = array(
    'name' => 'TinyMCE',
    'vendor url' => 'http://tinymce.moxiecode.com',
    'download url' => 'http://tinymce.moxiecode.com/download.php',
    'path' => 'jscripts/tiny_mce',
    // The regular expression catches two parts (the major and the minor
    // version), which libraries_get_version() doesn't allow.
    'version callback' => 'tinymce_get_version',
    'version arguments' => array(
      // It can be easier to parse the first characters of a minified file
      // instead of doing a multi-line pattern matching in a source file. See
      // 'lines' and 'cols' below.
      'file' => 'jscripts/tiny_mce/tiny_mce.js',
      // Best practice: Document the actual version strings for later reference.
      // 2.x: this.majorVersion="2";this.minorVersion="1.3"
      // 3.x: majorVersion:'3',minorVersion:'2.0.1'
      'pattern' => '@majorVersion[=:]["\'](\d).+?minorVersion[=:]["\']([\d\.]+)@',
      'lines' => 1,
      'cols' => 100,
    ),
    'versions' => array(
      '2.1' => array(
        'files' => array(
          'js' => array('tiny_mce.js'),
        ),
        'variants' => array(
          'source' => array(
            'files' => array(
              'js' => array('tiny_mce_src.js'),
            ),
          ),
        ),
        'integration files' => array(
          'wysiwyg' => array(
            'js' => array('editors/js/tinymce-2.js'),
            'css' => array('editors/js/tinymce-2.css'),
          ),
        ),
      ),
      // Definition used if 3.1 or above is detected.
      '3.1' => array(
        // Does not support JS aggregation.
        'files' => array(
          'js' => array(
            'tiny_mce.js' => array('preprocess' => FALSE),
          ),
        ),
        'variants' => array(
          // New variant leveraging jQuery. Not stable yet; therefore not the
          // default variant.
          'jquery' => array(
            'files' => array(
              'js' => array(
                'tiny_mce_jquery.js' => array('preprocess' => FALSE),
              ),
            ),
          ),
          'source' => array(
            'files' => array(
              'js' => array(
                'tiny_mce_src.js' => array('preprocess' => FALSE),
              ),
            ),
          ),
        ),
        'integration files' => array(
          'wysiwyg' => array(
            'js' => array('editors/js/tinymce-3.js'),
            'css' => array('editors/js/tinymce-3.css'),
          ),
        ),
      ),
    ),
  );
  return $libraries;
";}s:25:"hook_libraries_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_libraries_info_alter";s:10:"definition";s:47:"function hook_libraries_info_alter(&$libraries)";s:11:"description";s:71:"Alter the library information before detection and caching takes place.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"libraries";s:9:"file_path";s:32:"public://hooks/libraries.api.php";s:4:"body";s:165:"
  $files = array(
    'php' => array('example_module.php_spellchecker.inc'),
  );
  $libraries['php_spellchecker']['integration files']['example_module'] = $files;
";}s:30:"hook_libraries_info_file_paths";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_libraries_info_file_paths";s:10:"definition";s:41:"function hook_libraries_info_file_paths()";s:11:"description";s:45:"Specify paths to look for library info files.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:9:"libraries";s:9:"file_path";s:32:"public://hooks/libraries.api.php";s:4:"body";s:176:"
  // Taken from the Libraries test module, which needs to specify the path to
  // the test library.
  return array(drupal_get_path('module', 'libraries_test') . '/example');
";}}s:6:"locale";a:2:{s:11:"hook_locale";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_locale";s:10:"definition";s:36:"function hook_locale($op = 'groups')";s:11:"description";s:70:"Allows modules to define their own text groups that can be translated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"locale";s:9:"file_path";s:29:"public://hooks/locale.api.php";s:4:"body";s:86:"
  switch ($op) {
    case 'groups':
      return array('custom' => t('Custom'));
  }
";}s:34:"hook_multilingual_settings_changed";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_multilingual_settings_changed";s:10:"definition";s:45:"function hook_multilingual_settings_changed()";s:11:"description";s:52:"Allow modules to react to language settings changes.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"locale";s:9:"file_path";s:29:"public://hooks/locale.api.php";s:4:"body";s:29:"
  field_info_cache_clear();
";}}s:5:"media";a:11:{s:16:"hook_media_parse";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_media_parse";s:10:"definition";s:31:"function hook_media_parse($url)";s:11:"description";s:48:"Parses a url or embedded code into a unique URI.";s:11:"destination";s:17:"%module.media.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:28:"public://hooks/media.api.php";s:4:"body";s:359:"
  // Only parse URLs from our website of choice: examplevideo.com
  if (substr($url, 0, 27) == 'http://www.examplevideo.com') {
    // Each video has a 5 digit ID, i.e. http://www.examplevideo.com/12345
    // Grab the ID and use it in our URI.
    $id = substr($url, 28, 33);
    return file_stream_wrapper_uri_normalize('examplevideo://video/' . $id);
  }
";}s:22:"hook_media_parse_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_media_parse_alter";s:10:"definition";s:52:"function hook_media_parse_alter(&$success, $context)";s:11:"description";s:63:"Alters the parsing of urls and embedded codes into unique URIs.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:28:"public://hooks/media.api.php";s:4:"body";s:369:"
  $url = $context['url'];
  $url_info = parse_url($url);

  // Restrict users to only embedding secure links.
  if ($url_info['scheme'] != 'https') {
    $success = NULL;
  }

  // Use a custom handler for detecting YouTube videos.
  if ($context['module' == 'media_youtube']) {
    $handler = new CustomYouTubeHandler($url);
    $success = $handler->parse($url);
  }
";}s:30:"hook_media_browser_plugin_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_media_browser_plugin_info";s:10:"definition";s:41:"function hook_media_browser_plugin_info()";s:11:"description";s:48:"Returns a list of plugins for the media browser.";s:11:"destination";s:17:"%module.media.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:28:"public://hooks/media.api.php";s:4:"body";s:231:"
  $info['media_upload'] = array(
    'title' => t('Upload'),
    'class' => 'MediaBrowserUpload',
    'weight' => -10,
    'access callback' => 'user_access',
    'access arguments' => array('create files'),
  );

  return $info;
";}s:36:"hook_media_browser_plugin_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_media_browser_plugin_info_alter";s:10:"definition";s:53:"function hook_media_browser_plugin_info_alter(&$info)";s:11:"description";s:48:"Alter the list of plugins for the media browser.";s:11:"destination";s:17:"%module.media.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:28:"public://hooks/media.api.php";s:4:"body";s:118:"
  $info['media_upload']['title'] = t('Upload 2.0');
  $info['media_upload']['class'] = 'MediaBrowserUploadImproved';
";}s:32:"hook_media_browser_plugins_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_media_browser_plugins_alter";s:10:"definition";s:58:"function hook_media_browser_plugins_alter(&$plugin_output)";s:11:"description";s:43:"Alter the plugins before they are rendered.";s:11:"destination";s:17:"%module.media.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:28:"public://hooks/media.api.php";s:4:"body";s:148:"
  $plugin_output['upload']['form']['upload']['#title'] = t('Upload 2.0');
  $plugin_output['media_internet']['form']['embed_code']['#size'] = 100;
";}s:31:"hook_media_browser_params_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_media_browser_params_alter";s:10:"definition";s:57:"function hook_media_browser_params_alter(&$stored_params)";s:11:"description";s:60:"Alter a singleton of the params passed to the media browser.";s:11:"destination";s:17:"%module.media.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:28:"public://hooks/media.api.php";s:4:"body";s:131:"
  $stored_params['view_mode'] = 'custom';
  $stored_params['types'][] = 'document';
  unset($stored_params['enabledPlugins'][0]);
";}s:29:"hook_media_internet_providers";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_media_internet_providers";s:10:"definition";s:40:"function hook_media_internet_providers()";s:11:"description";s:70:"Returns a list of Internet media providers for URL/embed code testing.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:37:"public://hooks/media_internet.api.php";s:4:"body";s:123:"
  return array(
    'MyModuleYouTubeHandler' => array(
      'title' => t('YouTube'),
      'hidden' => TRUE,
    ),
  );
";}s:35:"hook_media_internet_providers_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_media_internet_providers_alter";s:10:"definition";s:57:"function hook_media_internet_providers_alter(&$providers)";s:11:"description";s:43:"Alter the list of Internet media providers.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:37:"public://hooks/media_internet.api.php";s:4:"body";s:133:"
  $providers['MyModuleYouTubeHandler']['title'] = t('Google video hosting');
  $providers['MyModuleYouTubeHandler']['weight'] = 42;
";}s:51:"hook_media_wysiwyg_wysiwyg_allowed_view_modes_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:51:"hook_media_wysiwyg_wysiwyg_allowed_view_modes_alter";s:10:"definition";s:81:"function hook_media_wysiwyg_wysiwyg_allowed_view_modes_alter(&$view_modes, $file)";s:11:"description";s:70:"Alter a list of view modes allowed for a file embedded in the WYSIWYG.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:36:"public://hooks/media_wysiwyg.api.php";s:4:"body";s:118:"
  $view_modes['default']['label'] = t('Display an unmodified version of the file');
  unset($view_modes['preview']);
";}s:44:"hook_media_wysiwyg_format_form_prepare_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:44:"hook_media_wysiwyg_format_form_prepare_alter";s:10:"definition";s:82:"function hook_media_wysiwyg_format_form_prepare_alter(&$form, &$form_state, $file)";s:11:"description";s:43:"Alter the WYSIWYG view mode selection form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:36:"public://hooks/media_wysiwyg.api.php";s:4:"body";s:215:"
  $form['preview']['#access'] = FALSE;

  $file = $form_state['file'];
  $form['heading']['#markup'] = t('Embedding %filename of type %filetype', array('%filename' => $file->filename, '%filetype' => $file->type));
";}s:40:"hook_media_wysiwyg_token_to_markup_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_media_wysiwyg_token_to_markup_alter";s:10:"definition";s:82:"function hook_media_wysiwyg_token_to_markup_alter(&$element, $tag_info, $settings)";s:11:"description";s:48:"Alter the output generated by Media filter tags.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"media";s:9:"file_path";s:36:"public://hooks/media_wysiwyg.api.php";s:4:"body";s:181:"
  if (empty($settings['wysiwyg'])) {
    $element['#attributes']['alt'] = t('This media has been output using the @mode view mode.', array('@mode' => $tag_info['view_mode']));
  }
";}}s:4:"menu";a:3:{s:16:"hook_menu_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_menu_insert";s:10:"definition";s:32:"function hook_menu_insert($menu)";s:11:"description";s:34:"Respond to a custom menu creation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"menu";s:9:"file_path";s:27:"public://hooks/menu.api.php";s:4:"body";s:215:"
  // For example, we track available menus in a variable.
  $my_menus = variable_get('my_module_menus', array());
  $my_menus[$menu['menu_name']] = $menu['menu_name'];
  variable_set('my_module_menus', $my_menus);
";}s:16:"hook_menu_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_menu_update";s:10:"definition";s:32:"function hook_menu_update($menu)";s:11:"description";s:32:"Respond to a custom menu update.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"menu";s:9:"file_path";s:27:"public://hooks/menu.api.php";s:4:"body";s:215:"
  // For example, we track available menus in a variable.
  $my_menus = variable_get('my_module_menus', array());
  $my_menus[$menu['menu_name']] = $menu['menu_name'];
  variable_set('my_module_menus', $my_menus);
";}s:16:"hook_menu_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_menu_delete";s:10:"definition";s:32:"function hook_menu_delete($menu)";s:11:"description";s:34:"Respond to a custom menu deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"menu";s:9:"file_path";s:27:"public://hooks/menu.api.php";s:4:"body";s:185:"
  // Delete the record from our variable.
  $my_menus = variable_get('my_module_menus', array());
  unset($my_menus[$menu['menu_name']]);
  variable_set('my_module_menus', $my_menus);
";}}s:10:"menu_block";a:5:{s:26:"hook_menu_block_tree_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_menu_block_tree_alter";s:10:"definition";s:53:"function hook_menu_block_tree_alter(&$tree, &$config)";s:11:"description";s:70:"Alter the menu tree and its configuration before the tree is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"menu_block";s:9:"file_path";s:33:"public://hooks/menu_block.api.php";s:4:"body";s:1:"
";}s:22:"hook_menu_block_blocks";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_menu_block_blocks";s:10:"definition";s:33:"function hook_menu_block_blocks()";s:11:"description";s:48:"Return a list of configurations for menu blocks.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"menu_block";s:9:"file_path";s:33:"public://hooks/menu_block.api.php";s:4:"body";s:854:"
  return array(
    // The array key is the block id used by menu block.
    'custom-nav' => array(
      // Use the array keys/values described in menu_tree_build().
      'menu_name'   => 'primary-links',
      'parent_mlid' => 0,
      'title_link'  => FALSE,
      'admin_title' => 'Drop-down navigation',
      'level'       => 1,
      'follow'      => 0,
      'depth'       => 2,
      'expanded'    => TRUE,
      'sort'        => FALSE,
    ),
    // To prevent clobbering of the block id, it is recommended to prefix it
    // with the module name.
    'custom-active' => array(
      'menu_name'   => MENU_TREE__CURRENT_PAGE_MENU,
      'title_link'  => TRUE,
      'admin_title' => 'Secondary navigation',
      'level'       => 3,
      'depth'       => 3,
      // Any config options not specified will get the default value.
    ),
  );
";}s:25:"hook_menu_block_get_menus";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_menu_block_get_menus";s:10:"definition";s:36:"function hook_menu_block_get_menus()";s:11:"description";s:57:"Return a list of menus to use with the menu_block module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"menu_block";s:9:"file_path";s:33:"public://hooks/menu_block.api.php";s:4:"body";s:128:"
  $menus = array();
  // For each menu, add the following information:
  $menus['menu_name'] = 'menu title';

  return $menus;
";}s:30:"hook_menu_block_get_sort_menus";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_menu_block_get_sort_menus";s:10:"definition";s:41:"function hook_menu_block_get_sort_menus()";s:11:"description";s:60:"Return a list of menus to use on menu block's settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"menu_block";s:9:"file_path";s:33:"public://hooks/menu_block.api.php";s:4:"body";s:248:"
  $menus = array();
  // For each menu, add the following information:
  $menus['menu_name'] = 'menu title';
  // Optionally, add a regular expression to match several menus at once.
  $menus['/^my\-menus\-.+/'] = t('My menus');

  return $menus;
";}s:22:"hook_menu_block_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_menu_block_delete";s:10:"definition";s:46:"function hook_menu_block_delete(array $config)";s:11:"description";s:31:"Respond to menu block deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"menu_block";s:9:"file_path";s:33:"public://hooks/menu_block.api.php";s:4:"body";s:127:"
  db_delete('block_data')
    ->condition('module', 'menu_block')
    ->condition('delta', $config['delta'])
    ->execute();
";}}s:14:"module_builder";a:1:{s:24:"hook_module_builder_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_module_builder_info";s:10:"definition";s:43:"function hook_module_builder_info($version)";s:11:"description";s:66:"Provide information about hook definition files to Module builder.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:14:"module_builder";s:9:"file_path";s:37:"public://hooks/module_builder.api.php";s:4:"body";s:999:"
  $data = array(
    // Hooks on behalf of Drupal core.
    'system' => array(
      'url' => 'http://cvs.drupal.org/viewvc.py/drupal/contributions/docs/developer/hooks/%file?view=co&pathrev=%branch',
      'branch' => 'DRUPAL-6--1',
      'group' => '#filenames',
      'hook_files' => array(
        // List of files we should slurp from the url for hook defs.
        // and the destination file for processed code.
        'core.php' =>    '%module.module',
        'node.php' =>    '%module.module',      
        'install.php' => '%module.install',      
      ),
    ),
    // We need to do our own stuff now we have a hook!
    'module_builder' => array(
      'url' => 'http://cvs.drupal.org/viewvc.py/drupal/contributions/modules/module_builder/hooks/%file?view=co&pathrev=%branch',
      'branch' => 'DRUPAL-6--2',
      'group' => 'module builder',      
      'hook_files' => array(
        'module_builder.php' => '%module.module_builder.inc',
      ),
    ),
  );
  
  return $data;
";}}s:6:"navbar";a:3:{s:11:"hook_navbar";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_navbar";s:10:"definition";s:22:"function hook_navbar()";s:11:"description";s:29:"Add items to the navbar menu.";s:11:"destination";s:18:"%module.navbar.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"navbar";s:9:"file_path";s:29:"public://hooks/navbar.api.php";s:4:"body";s:3091:"
  $items = array();

  // Add a search field to the navbar. The search field employs no navbar
  // module theming functions.
  $items['global_search'] = array(
    '#type' => 'navbar_item',
    'tab' => array(
      '#type' => 'search',
      '#attributes' => array(
        'placeholder' => t('Search the site'),
        'class' => array('search-global'),
      ),
    ),
    '#weight' => 200,
    // Custom CSS, JS or a library can be associated with the navbar item.
    '#attached' => array(
      'css' => array(
        drupal_get_path('module', 'search') . '/css/search.base.css',
      ),
    ),
  );

  // The 'Home' tab is a simple link, which is wrapped in markup associated
  // with a visual tab styling.
  $items['home'] = array(
    '#type' => 'navbar_item',
    'tab' => array(
      '#type' => 'link',
      '#title' => t('Home'),
      '#href' => '<front>',
      '#options' => array(
        'attributes' => array(
          'title' => t('Home page'),
          'class' => array('navbar-icon', 'navbar-icon-home'),
        ),
      ),
    ),
    '#weight' => -20,
  );

  // A tray may be associated with a tab.
  //
  // When the tab is activated, the tray will become visible, either in a
  // horizontal or vertical orientation on the screen.
  //
  // The tray should contain a renderable array. An optional #heading property
  // can be passed. This text is written to a heading tag in the tray as a
  // landmark for accessibility.
  $items['commerce'] = array(
    '#type' => 'navbar_item',
    'tab' => array(
      '#type' => 'link',
      '#title' => t('Shopping cart'),
      '#href' => '/cart',
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(
          'title' => t('Shopping cart'),
        ),
      ),
    ),
    'tray' => array(
      '#heading' => t('Shopping cart actions'),
      'shopping_cart' => array(
        '#theme' => 'item_list',
        '#items' => array( /* An item list renderable array */ ),
      ),
    ),
    '#weight' => 150,
  );

  // The tray can be used to render arbritrary content.
  //
  // A renderable array passed to the 'tray' property will be rendered outside
  // the administration bar but within the containing navbar element.
  //
  // If the default behavior and styling of a navbar tray is not desired, one
  // can render content to the navbar element and apply custom theming and
  // behaviors.
  $items['user_messages'] = array(
    // Include the navbar_tab_wrapper to style the link like a navbar tab.
    // Exclude the theme wrapper if custom styling is desired.
    '#type' => 'navbar_item',
    'tab' => array(
      '#type' => 'link',
      '#theme' => 'user_message_navbar_tab',
      '#theme_wrappers' => array(),
      '#title' => t('Messages'),
      '#href' => '/user/messages',
      '#options' => array(
        'attributes' => array(
          'title' => t('Messages'),
        ),
      ),
    ),
    'tray' => array(
      '#heading' => t('User messages'),
      'messages' => array(/* renderable content */),
    ),
    '#weight' => 125,
  );

  return $items;
";}s:17:"hook_navbar_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_navbar_alter";s:10:"definition";s:35:"function hook_navbar_alter(&$items)";s:11:"description";s:53:"Alter the navbar menu after hook_navbar() is invoked.";s:11:"destination";s:18:"%module.navbar.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"navbar";s:9:"file_path";s:29:"public://hooks/navbar.api.php";s:4:"body";s:75:"
  // Move the User tab to the right.
  $items['commerce']['#weight'] = 5;
";}s:29:"hook_navbar_breakpoints_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_navbar_breakpoints_alter";s:10:"definition";s:53:"function hook_navbar_breakpoints_alter(&$breakpoints)";s:11:"description";s:72:"Implementing hook_navbar_breakpoints_alter allows a module to change the";s:11:"destination";s:18:"%module.navbar.inc";s:12:"dependencies";a:0:{}s:5:"group";s:6:"navbar";s:9:"file_path";s:29:"public://hooks/navbar.api.php";s:4:"body";s:67:"
  $breakpoints['standard'] = 'only screen and (min-width: 35em)';
";}}s:4:"node";a:32:{s:16:"hook_node_grants";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_node_grants";s:10:"definition";s:40:"function hook_node_grants($account, $op)";s:11:"description";s:60:"Inform the node access system what permissions the user has.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:167:"
  if (user_access('access private content', $account)) {
    $grants['example'] = array(1);
  }
  $grants['example_author'] = array($account->uid);
  return $grants;
";}s:24:"hook_node_access_records";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_node_access_records";s:10:"definition";s:40:"function hook_node_access_records($node)";s:11:"description";s:57:"Set permissions for a node to be written to the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:1017:"
  // We only care about the node if it has been marked private. If not, it is
  // treated just like any other node and we completely ignore it.
  if ($node->private) {
    $grants = array();
    // Only published nodes should be viewable to all users. If we allow access
    // blindly here, then all users could view an unpublished node.
    if ($node->status) {
      $grants[] = array(
        'realm' => 'example',
        'gid' => 1,
        'grant_view' => 1,
        'grant_update' => 0,
        'grant_delete' => 0,
        'priority' => 0,
      );
    }
    // For the example_author array, the GID is equivalent to a UID, which
    // means there are many groups of just 1 user.
    // Note that an author can always view his or her nodes, even if they
    // have status unpublished.
    $grants[] = array(
      'realm' => 'example_author',
      'gid' => $node->uid,
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
      'priority' => 0,
    );

    return $grants;
  }
";}s:30:"hook_node_access_records_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_node_access_records_alter";s:10:"definition";s:56:"function hook_node_access_records_alter(&$grants, $node)";s:11:"description";s:66:"Alter permissions for a node before it is written to the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:526:"
  // Our module allows editors to mark specific articles with the 'is_preview'
  // field. If the node being saved has a TRUE value for that field, then only
  // our grants are retained, and other grants are removed. Doing so ensures
  // that our rules are enforced no matter what priority other grants are given.
  if ($node->is_preview) {
    // Our module grants are set in $grants['example'].
    $temp = $grants['example'];
    // Now remove all module grants but our own.
    $grants = array('example' => $temp);
  }
";}s:22:"hook_node_grants_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_node_grants_alter";s:10:"definition";s:56:"function hook_node_grants_alter(&$grants, $account, $op)";s:11:"description";s:67:"Alter user access rules when trying to view, edit or delete a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:614:"
  // Our sample module never allows certain roles to edit or delete
  // content. Since some other node access modules might allow this
  // permission, we expressly remove it by returning an empty $grants
  // array for roles specified in our variable setting.

  // Get our list of banned roles.
  $restricted = variable_get('example_restricted_roles', array());

  if ($op != 'view' && !empty($restricted)) {
    // Now check the roles for this account against the restrictions.
    foreach ($restricted as $role_id) {
      if (isset($account->roles[$role_id])) {
        $grants = array();
      }
    }
  }
";}s:20:"hook_node_operations";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_node_operations";s:10:"definition";s:31:"function hook_node_operations()";s:11:"description";s:25:"Add mass node operations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:1484:"
  $operations = array(
    'publish' => array(
      'label' => t('Publish selected content'),
      'callback' => 'node_mass_update',
      'callback arguments' => array('updates' => array('status' => NODE_PUBLISHED)),
    ),
    'unpublish' => array(
      'label' => t('Unpublish selected content'),
      'callback' => 'node_mass_update',
      'callback arguments' => array('updates' => array('status' => NODE_NOT_PUBLISHED)),
    ),
    'promote' => array(
      'label' => t('Promote selected content to front page'),
      'callback' => 'node_mass_update',
      'callback arguments' => array('updates' => array('status' => NODE_PUBLISHED, 'promote' => NODE_PROMOTED)),
    ),
    'demote' => array(
      'label' => t('Demote selected content from front page'),
      'callback' => 'node_mass_update',
      'callback arguments' => array('updates' => array('promote' => NODE_NOT_PROMOTED)),
    ),
    'sticky' => array(
      'label' => t('Make selected content sticky'),
      'callback' => 'node_mass_update',
      'callback arguments' => array('updates' => array('status' => NODE_PUBLISHED, 'sticky' => NODE_STICKY)),
    ),
    'unsticky' => array(
      'label' => t('Make selected content not sticky'),
      'callback' => 'node_mass_update',
      'callback arguments' => array('updates' => array('sticky' => NODE_NOT_STICKY)),
    ),
    'delete' => array(
      'label' => t('Delete selected content'),
      'callback' => NULL,
    ),
  );
  return $operations;
";}s:16:"hook_node_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_node_delete";s:10:"definition";s:32:"function hook_node_delete($node)";s:11:"description";s:25:"Respond to node deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:76:"
  db_delete('mytable')
    ->condition('nid', $node->nid)
    ->execute();
";}s:25:"hook_node_revision_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_node_revision_delete";s:10:"definition";s:41:"function hook_node_revision_delete($node)";s:11:"description";s:39:"Respond to deletion of a node revision.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:76:"
  db_delete('mytable')
    ->condition('vid', $node->vid)
    ->execute();
";}s:16:"hook_node_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_node_insert";s:10:"definition";s:32:"function hook_node_insert($node)";s:11:"description";s:34:"Respond to creation of a new node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:126:"
  db_insert('mytable')
    ->fields(array(
      'nid' => $node->nid,
      'extra' => $node->extra,
    ))
    ->execute();
";}s:14:"hook_node_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_node_load";s:10:"definition";s:39:"function hook_node_load($nodes, $types)";s:11:"description";s:54:"Act on arbitrary nodes being loaded from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:442:"
  // Decide whether any of $types are relevant to our purposes.
  if (count(array_intersect($types_we_want_to_process, $types))) {
    // Gather our extra data for each of these nodes.
    $result = db_query('SELECT nid, foo FROM {mytable} WHERE nid IN(:nids)', array(':nids' => array_keys($nodes)));
    // Add our extra data to the node objects.
    foreach ($result as $record) {
      $nodes[$record->nid]->foo = $record->foo;
    }
  }
";}s:16:"hook_node_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_node_access";s:10:"definition";s:47:"function hook_node_access($node, $op, $account)";s:11:"description";s:25:"Control access to a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:826:"
  $type = is_string($node) ? $node : $node->type;

  if (in_array($type, node_permissions_get_configured_types())) {
    if ($op == 'create' && user_access('create ' . $type . ' content', $account)) {
      return NODE_ACCESS_ALLOW;
    }

    if ($op == 'update') {
      if (user_access('edit any ' . $type . ' content', $account) || (user_access('edit own ' . $type . ' content', $account) && ($account->uid == $node->uid))) {
        return NODE_ACCESS_ALLOW;
      }
    }

    if ($op == 'delete') {
      if (user_access('delete any ' . $type . ' content', $account) || (user_access('delete own ' . $type . ' content', $account) && ($account->uid == $node->uid))) {
        return NODE_ACCESS_ALLOW;
      }
    }
  }

  // Returning nothing from this function would have the same effect.
  return NODE_ACCESS_IGNORE;
";}s:17:"hook_node_prepare";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_node_prepare";s:10:"definition";s:33:"function hook_node_prepare($node)";s:11:"description";s:60:"Act on a node object about to be shown on the add/edit form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:114:"
  if (!isset($node->comment)) {
    $node->comment = variable_get("comment_$node->type", COMMENT_NODE_OPEN);
  }
";}s:23:"hook_node_search_result";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_node_search_result";s:10:"definition";s:39:"function hook_node_search_result($node)";s:11:"description";s:49:"Act on a node being displayed as a search result.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:226:"
  $comments = db_query('SELECT comment_count FROM {node_comment_statistics} WHERE nid = :nid', array('nid' => $node->nid))->fetchField();
  return array('comment' => format_plural($comments, '1 comment', '@count comments'));
";}s:17:"hook_node_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_node_presave";s:10:"definition";s:33:"function hook_node_presave($node)";s:11:"description";s:40:"Act on a node being inserted or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:152:"
  if ($node->nid && $node->moderate) {
    // Reset votes when node is updated:
    $node->score = 0;
    $node->users = '';
    $node->votes = 0;
  }
";}s:16:"hook_node_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_node_update";s:10:"definition";s:32:"function hook_node_update($node)";s:11:"description";s:29:"Respond to updates to a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:121:"
  db_update('mytable')
    ->fields(array('extra' => $node->extra))
    ->condition('nid', $node->nid)
    ->execute();
";}s:22:"hook_node_update_index";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_node_update_index";s:10:"definition";s:38:"function hook_node_update_index($node)";s:11:"description";s:42:"Act on a node being indexed for searching.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:370:"
  $text = '';
  $comments = db_query('SELECT subject, comment, format FROM {comment} WHERE nid = :nid AND status = :status', array(':nid' => $node->nid, ':status' => COMMENT_PUBLISHED));
  foreach ($comments as $comment) {
    $text .= '<h2>' . check_plain($comment->subject) . '</h2>' . check_markup($comment->comment, $comment->format, '', TRUE);
  }
  return $text;
";}s:18:"hook_node_validate";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_node_validate";s:10:"definition";s:55:"function hook_node_validate($node, $form, &$form_state)";s:11:"description";s:60:"Perform node validation before a node is created or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:173:"
  if (isset($node->end) && isset($node->start)) {
    if ($node->start > $node->end) {
      form_set_error('time', t('An event may not end before it starts.'));
    }
  }
";}s:16:"hook_node_submit";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_node_submit";s:10:"definition";s:53:"function hook_node_submit($node, $form, &$form_state)";s:11:"description";s:65:"Act on a node after validated form values have been copied to it.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:310:"
  // Decompose the selected menu parent option into 'menu_name' and 'plid', if
  // the form used the default parent selection widget.
  if (!empty($form_state['values']['menu']['parent'])) {
    list($node->menu['menu_name'], $node->menu['plid']) = explode(':', $form_state['values']['menu']['parent']);
  }
";}s:14:"hook_node_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_node_view";s:10:"definition";s:53:"function hook_node_view($node, $view_mode, $langcode)";s:11:"description";s:55:"Act on a node that is being assembled before rendering.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:160:"
  $node->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
";}s:20:"hook_node_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_node_view_alter";s:10:"definition";s:38:"function hook_node_view_alter(&$build)";s:11:"description";s:33:"Alter the results of node_view().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:297:"
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;
  }

  // Add a #post_render callback to act on the rendered HTML of the node.
  $build['#post_render'][] = 'my_module_node_post_render';
";}s:14:"hook_node_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_node_info";s:10:"definition";s:25:"function hook_node_info()";s:11:"description";s:34:"Define module-provided node types.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:194:"
  return array(
    'blog' => array(
      'name' => t('Blog entry'),
      'base' => 'blog',
      'description' => t('Use for multi-user blogs. Every user gets a personal blog.'),
    )
  );
";}s:12:"hook_ranking";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:12:"hook_ranking";s:10:"definition";s:23:"function hook_ranking()";s:11:"description";s:72:"Provide additional methods of scoring for core search results for nodes.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:851:"
  // If voting is disabled, we can avoid returning the array, no hard feelings.
  if (variable_get('vote_node_enabled', TRUE)) {
    return array(
      'vote_average' => array(
        'title' => t('Average vote'),
        // Note that we use i.sid, the search index's search item id, rather than
        // n.nid.
        'join' => array(
          'type' => 'LEFT',
          'table' => 'vote_node_data',
          'alias' => 'vote_node_data',
          'on' => 'vote_node_data.nid = i.sid',
        ),
        // The highest possible score should be 1, and the lowest possible score,
        // always 0, should be 0.
        'score' => 'vote_node_data.average / CAST(%f AS DECIMAL)',
        // Pass in the highest possible voting score as a decimal argument.
        'arguments' => array(variable_get('vote_score_max', 5)),
      ),
    );
  }
";}s:21:"hook_node_type_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_node_type_insert";s:10:"definition";s:37:"function hook_node_type_insert($info)";s:11:"description";s:30:"Respond to node type creation.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:124:"
  drupal_set_message(t('You have just created a content type with a machine name %type.', array('%type' => $info->type)));
";}s:21:"hook_node_type_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_node_type_update";s:10:"definition";s:37:"function hook_node_type_update($info)";s:11:"description";s:29:"Respond to node type updates.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:252:"
  if (!empty($info->old_type) && $info->old_type != $info->type) {
    $setting = variable_get('comment_' . $info->old_type, COMMENT_NODE_OPEN);
    variable_del('comment_' . $info->old_type);
    variable_set('comment_' . $info->type, $setting);
  }
";}s:21:"hook_node_type_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_node_type_delete";s:10:"definition";s:37:"function hook_node_type_delete($info)";s:11:"description";s:30:"Respond to node type deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:43:"
  variable_del('comment_' . $info->type);
";}s:11:"hook_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_delete";s:10:"definition";s:27:"function hook_delete($node)";s:11:"description";s:25:"Respond to node deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:76:"
  db_delete('mytable')
    ->condition('nid', $node->nid)
    ->execute();
";}s:12:"hook_prepare";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:12:"hook_prepare";s:10:"definition";s:28:"function hook_prepare($node)";s:11:"description";s:60:"Act on a node object about to be shown on the add/edit form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:79:"
  if (!isset($node->mymodule_value)) {
    $node->mymodule_value = 'foo';
  }
";}s:9:"hook_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_form";s:10:"definition";s:39:"function hook_form($node, &$form_state)";s:11:"description";s:28:"Display a node editing form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:713:"
  $type = node_type_get_type($node);

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => check_plain($type->title_label),
    '#default_value' => !empty($node->title) ? $node->title : '',
    '#required' => TRUE, '#weight' => -5
  );

  $form['field1'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom field'),
    '#default_value' => $node->field1,
    '#maxlength' => 127,
  );
  $form['selectbox'] = array(
    '#type' => 'select',
    '#title' => t('Select box'),
    '#default_value' => $node->selectbox,
    '#options' => array(
      1 => 'Option A',
      2 => 'Option B',
      3 => 'Option C',
    ),
    '#description' => t('Choose an option.'),
  );

  return $form;
";}s:11:"hook_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_insert";s:10:"definition";s:27:"function hook_insert($node)";s:11:"description";s:34:"Respond to creation of a new node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:126:"
  db_insert('mytable')
    ->fields(array(
      'nid' => $node->nid,
      'extra' => $node->extra,
    ))
    ->execute();
";}s:9:"hook_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_load";s:10:"definition";s:26:"function hook_load($nodes)";s:11:"description";s:44:"Act on nodes being loaded from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:199:"
  $result = db_query('SELECT nid, foo FROM {mytable} WHERE nid IN (:nids)', array(':nids' => array_keys($nodes)));
  foreach ($result as $record) {
    $nodes[$record->nid]->foo = $record->foo;
  }
";}s:11:"hook_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_update";s:10:"definition";s:27:"function hook_update($node)";s:11:"description";s:29:"Respond to updates to a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:121:"
  db_update('mytable')
    ->fields(array('extra' => $node->extra))
    ->condition('nid', $node->nid)
    ->execute();
";}s:13:"hook_validate";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:13:"hook_validate";s:10:"definition";s:50:"function hook_validate($node, $form, &$form_state)";s:11:"description";s:60:"Perform node validation before a node is created or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:173:"
  if (isset($node->end) && isset($node->start)) {
    if ($node->start > $node->end) {
      form_set_error('time', t('An event may not end before it starts.'));
    }
  }
";}s:9:"hook_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:9:"hook_view";s:10:"definition";s:55:"function hook_view($node, $view_mode, $langcode = NULL)";s:11:"description";s:15:"Display a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"node";s:9:"file_path";s:27:"public://hooks/node.api.php";s:4:"body";s:419:"
  if ($view_mode == 'full' && node_is_page($node)) {
    $breadcrumb = array();
    $breadcrumb[] = l(t('Home'), NULL);
    $breadcrumb[] = l(t('Example'), 'example');
    $breadcrumb[] = l($node->field1, 'example/' . $node->field1);
    drupal_set_breadcrumb($breadcrumb);
  }

  $node->content['myfield'] = array(
    '#markup' => theme('mymodule_myfield', $node->myfield),
    '#weight' => 1,
  );

  return $node;
";}}s:12:"node_convert";a:3:{s:22:"hook_ctools_plugin_api";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_ctools_plugin_api";s:10:"definition";s:46:"function hook_ctools_plugin_api($module, $api)";s:11:"description";s:51:"Provide implementation of hook_ctools_plugin_api().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"node_convert";s:9:"file_path";s:35:"public://hooks/node_convert.api.php";s:4:"body";s:274:"
  // Conversion behaviors.
  if ($module == 'node_convert' && $api == NODE_CONVERT_BEHAVIOR_PLUGIN) {
    return array(
      'version' => 1,
      'path' => drupal_get_path('module', 'custom') . '/includes/',
      'file' => "$module.$api.inc",
    );
  }

  return NULL;
";}s:24:"hook_node_convert_change";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_node_convert_change";s:10:"definition";s:45:"function hook_node_convert_change($data, $op)";s:11:"description";s:107:"This is an example implementation for the hook. Preforms actions when converting a node based on it's type.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"node_convert";s:9:"file_path";s:35:"public://hooks/node_convert.api.php";s:4:"body";s:3072:"
  // All of this is just an example.
  if ($op == 'insert') {
    if ($data['dest_node_type'] == 'book') {
      $book = array();
      $node = $data['node'];
      $book['link_path'] = 'node/' . $node->nid;
      $book['link_title'] = $node->title;
      $book['plid'] = 0;
      $book['menu_name'] = book_menu_name($node->nid);
      $mlid = menu_link_save($book);
      $book['bid'] = $data['hook_options']['bid'];
      if ($book['bid'] == 'self') {
        $book['bid'] = $node->nid;
      }
      $id = db_insert('book')
        ->fields(array(
          'nid' => $node->nid,
          'mlid' => $book['mlid'],
          'bid' => $book['bid'],
        ))
        ->execute();
    }
    if ($data['dest_node_type'] == 'forum') {
      $id = db_insert('forum')
        ->fields(array(
          'tid' => $data['hook_options']['forum'],
          'vid' => $data['node']->vid,
          'nid' => $data['node']->nid,
        ))
        ->execute();

      $id = db_insert('taxonomy_term_node')
        ->fields(array(
          'tid' => $data['hook_options']['forum'],
          'vid' => $data['node']->vid,
          'nid' => $data['node']->nid,
        ))
        ->execute();
    }
  }
  elseif ($op == 'delete') {
    if ($data['node']->type == 'book') {
      menu_link_delete($data['node']->book['mlid']);
      db_delete('book')
        ->condition('mlid', $data['node']->book['mlid'])
        ->execute();
    }
    if ($data['node']->type == 'forum') {
      db_delete('forum')
        ->condition('nid', $data['node']->nid)
        ->execute();

      db_delete('taxonomy_term_node')
        ->condition('nid', $data['node']->nid)
        ->execute();
    }
  }
  elseif ($op == 'options') {
    $form = array();
    if ($data['dest_node_type'] == 'book') {
      foreach (book_get_books() as $book) {
        $options[$book['nid']] = $book['title'];
      }
      $options = array('self' => '<' . t('create a new book') . '>') + $options;
      $form['bid'] = array(
        '#type' => 'select',
        '#title' => t('Book'),
        '#options' => $options,
        '#description' => t('Your page will be a part of the selected book.'),
        '#attributes' => array('class' => 'book-title-select'),
      );
    }
    if ($data['dest_node_type'] == 'forum') {
      $vid = variable_get('forum_nav_vocabulary', '');
      $form['forum'] = taxonomy_form($vid);
      $form['forum']['#weight'] = 7;
      $form['forum']['#required'] = TRUE;
      $form['forum']['#options'][''] = t('- Please choose -');
    }
    return $form;
  }
  elseif ($op == 'options validate') {
    $form_state = $data['form_state'];
    if ($data['dest_node_type'] == 'forum') {
      $containers = variable_get('forum_containers', array());
      $term = $form_state['values']['hook_options']['forum'];
      if (in_array($term, $containers)) {
        $term = taxonomy_term_load($term);
        form_set_error('hook_options][forum', t('The item %forum is only a container for forums. Please select one of the forums below it.', array('%forum' => $term->name)));
      }
    }
  }
";}s:25:"hook_node_convert_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_node_convert_presave";s:10:"definition";s:66:"function hook_node_convert_presave($node, $hook_options = array())";s:11:"description";s:67:"Allow modifying a node during conversion but before the final save.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"node_convert";s:9:"file_path";s:35:"public://hooks/node_convert.api.php";s:4:"body";s:50:"
  // Set the author to user 1.
  $node->uid = 1;
";}}s:6:"openid";a:6:{s:11:"hook_openid";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:11:"hook_openid";s:10:"definition";s:35:"function hook_openid($op, $request)";s:11:"description";s:54:"Allow modules to modify the OpenID request parameters.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"openid";s:9:"file_path";s:29:"public://hooks/openid.api.php";s:4:"body";s:115:"
  if ($op == 'request') {
    $request['openid.identity'] = 'http://myname.myopenid.com/';
  }
  return $request;
";}s:20:"hook_openid_response";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_openid_response";s:10:"definition";s:50:"function hook_openid_response($response, $account)";s:11:"description";s:52:"Allow modules to act upon a successful OpenID login.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"openid";s:9:"file_path";s:29:"public://hooks/openid.api.php";s:4:"body";s:99:"
  if (isset($response['openid.ns.ax'])) {
    _mymodule_store_ax_fields($response, $account);
  }
";}s:33:"hook_openid_discovery_method_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_openid_discovery_method_info";s:10:"definition";s:44:"function hook_openid_discovery_method_info()";s:11:"description";s:50:"Allow modules to declare OpenID discovery methods.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"openid";s:9:"file_path";s:29:"public://hooks/openid.api.php";s:4:"body";s:74:"
  return array(
    'new_discovery_idea' => '_my_discovery_method',
  );
";}s:39:"hook_openid_discovery_method_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_openid_discovery_method_info_alter";s:10:"definition";s:59:"function hook_openid_discovery_method_info_alter(&$methods)";s:11:"description";s:41:"Allow modules to alter discovery methods.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"openid";s:9:"file_path";s:29:"public://hooks/openid.api.php";s:4:"body";s:61:"
  // Remove XRI discovery scheme.
  unset($methods['xri']);
";}s:37:"hook_openid_normalization_method_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_openid_normalization_method_info";s:10:"definition";s:48:"function hook_openid_normalization_method_info()";s:11:"description";s:54:"Allow modules to declare OpenID normalization methods.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"openid";s:9:"file_path";s:29:"public://hooks/openid.api.php";s:4:"body";s:82:"
  return array(
    'new_normalization_idea' => '_my_normalization_method',
  );
";}s:43:"hook_openid_normalization_method_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_openid_normalization_method_info_alter";s:10:"definition";s:63:"function hook_openid_normalization_method_info_alter(&$methods)";s:11:"description";s:45:"Allow modules to alter normalization methods.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"openid";s:9:"file_path";s:29:"public://hooks/openid.api.php";s:4:"body";s:72:"
  // Remove Google IDP normalization.
  unset($methods['google_idp']);
";}}s:10:"openlayers";a:2:{s:39:"hook_openlayers_object_preprocess_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_openlayers_object_preprocess_alter";s:10:"definition";s:114:"function hook_openlayers_object_preprocess_alter(array &$build, \Drupal\openlayers\Types\ObjectInterface $context)";s:11:"description";s:76:"This hook will be triggered before a map is built and on each of its object.";s:11:"destination";s:22:"%module.openlayers.inc";s:12:"dependencies";a:0:{}s:5:"group";s:10:"openlayers";s:9:"file_path";s:33:"public://hooks/openlayers.api.php";s:4:"body";s:2:"

";}s:40:"hook_openlayers_object_postprocess_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_openlayers_object_postprocess_alter";s:10:"definition";s:115:"function hook_openlayers_object_postprocess_alter(array &$build, \Drupal\openlayers\Types\ObjectInterface $context)";s:11:"description";s:75:"This hook will be triggered after a map is built and on each of its object.";s:11:"destination";s:22:"%module.openlayers.inc";s:12:"dependencies";a:0:{}s:5:"group";s:10:"openlayers";s:9:"file_path";s:33:"public://hooks/openlayers.api.php";s:4:"body";s:2:"

";}}s:7:"overlay";a:2:{s:30:"hook_overlay_parent_initialize";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_overlay_parent_initialize";s:10:"definition";s:41:"function hook_overlay_parent_initialize()";s:11:"description";s:66:"Allow modules to act when an overlay parent window is initialized.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"overlay";s:9:"file_path";s:30:"public://hooks/overlay.api.php";s:4:"body";s:106:"
  // Add our custom JavaScript.
  drupal_add_js(drupal_get_path('module', 'hook') . '/hook-overlay.js');
";}s:29:"hook_overlay_child_initialize";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_overlay_child_initialize";s:10:"definition";s:40:"function hook_overlay_child_initialize()";s:11:"description";s:65:"Allow modules to act when an overlay child window is initialized.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"overlay";s:9:"file_path";s:30:"public://hooks/overlay.api.php";s:4:"body";s:112:"
  // Add our custom JavaScript.
  drupal_add_js(drupal_get_path('module', 'hook') . '/hook-overlay-child.js');
";}}s:4:"path";a:3:{s:16:"hook_path_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_path_insert";s:10:"definition";s:32:"function hook_path_insert($path)";s:11:"description";s:33:"Respond to a path being inserted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"path";s:9:"file_path";s:27:"public://hooks/path.api.php";s:4:"body";s:130:"
  db_insert('mytable')
    ->fields(array(
      'alias' => $path['alias'],
      'pid' => $path['pid'],
    ))
    ->execute();
";}s:16:"hook_path_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_path_update";s:10:"definition";s:32:"function hook_path_update($path)";s:11:"description";s:32:"Respond to a path being updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"path";s:9:"file_path";s:27:"public://hooks/path.api.php";s:4:"body";s:125:"
  db_update('mytable')
    ->fields(array('alias' => $path['alias']))
    ->condition('pid', $path['pid'])
    ->execute();
";}s:16:"hook_path_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_path_delete";s:10:"definition";s:32:"function hook_path_delete($path)";s:11:"description";s:32:"Respond to a path being deleted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"path";s:9:"file_path";s:27:"public://hooks/path.api.php";s:4:"body";s:78:"
  db_delete('mytable')
    ->condition('pid', $path['pid'])
    ->execute();
";}}s:8:"pathauto";a:6:{s:21:"hook_path_alias_types";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_path_alias_types";s:10:"definition";s:32:"function hook_path_alias_types()";s:11:"description";s:73:"Used primarily by the bulk delete form.  This hooks provides pathauto the";s:11:"destination";s:20:"%module.pathauto.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"pathauto";s:9:"file_path";s:31:"public://hooks/pathauto.api.php";s:4:"body";s:90:"
  $objects['user/'] = t('Users');
  $objects['node/'] = t('Content');
  return $objects;
";}s:13:"hook_pathauto";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:13:"hook_pathauto";s:10:"definition";s:27:"function hook_pathauto($op)";s:11:"description";s:70:"Provide information about the way your module's aliases will be built.";s:11:"destination";s:20:"%module.pathauto.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"pathauto";s:9:"file_path";s:31:"public://hooks/pathauto.api.php";s:4:"body";s:830:"
  switch ($op) {
    case 'settings':
      $settings = array();
      $settings['module'] = 'file';
      $settings['token_type'] = 'file';
      $settings['groupheader'] = t('File paths');
      $settings['patterndescr'] = t('Default path pattern (applies to all file types with blank patterns below)');
      $settings['patterndefault'] = 'files/[file:name]';
      $settings['batch_update_callback'] = 'file_entity_pathauto_bulk_update_batch_process';
      $settings['batch_file'] = drupal_get_path('module', 'file_entity') . '/file_entity.pathauto.inc';

      foreach (file_type_get_enabled_types() as $file_type => $type) {
        $settings['patternitems'][$file_type] = t('Pattern for all @file_type paths.', array('@file_type' => $type->label));
      }
      return (object) $settings;

    default:
      break;
  }
";}s:31:"hook_pathauto_is_alias_reserved";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_pathauto_is_alias_reserved";s:10:"definition";s:68:"function hook_pathauto_is_alias_reserved($alias, $source, $langcode)";s:11:"description";s:73:"Determine if a possible URL alias would conflict with any existing paths.";s:11:"destination";s:20:"%module.pathauto.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"pathauto";s:9:"file_path";s:31:"public://hooks/pathauto.api.php";s:4:"body";s:203:"
  // Check our module's list of paths and return TRUE if $alias matches any of
  // them.
  return (bool) db_query("SELECT 1 FROM {mytable} WHERE path = :path", array(':path' => $alias))->fetchField();
";}s:27:"hook_pathauto_pattern_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_pathauto_pattern_alter";s:10:"definition";s:63:"function hook_pathauto_pattern_alter(&$pattern, array $context)";s:11:"description";s:70:"Alter the pattern to be used before an alias is generated by Pathauto.";s:11:"destination";s:20:"%module.pathauto.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"pathauto";s:9:"file_path";s:31:"public://hooks/pathauto.api.php";s:4:"body";s:243:"
  // Switch out any [node:created:*] tokens with [node:updated:*] on update.
  if ($context['module'] == 'node' && ($context['op'] == 'update')) {
    $pattern = preg_replace('/\[node:created(\:[^]]*)?\]/', '[node:updated$1]', $pattern);
  }
";}s:25:"hook_pathauto_alias_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_pathauto_alias_alter";s:10:"definition";s:60:"function hook_pathauto_alias_alter(&$alias, array &$context)";s:11:"description";s:47:"Alter Pathauto-generated aliases before saving.";s:11:"destination";s:20:"%module.pathauto.inc";s:12:"dependencies";a:0:{}s:5:"group";s:8:"pathauto";s:9:"file_path";s:31:"public://hooks/pathauto.api.php";s:4:"body";s:194:"
  // Add a suffix so that all aliases get saved as 'content/my-title.html'
  $alias .= '.html';

  // Force all aliases to be saved as language neutral.
  $context['language'] = LANGUAGE_NONE;
";}s:37:"hook_pathauto_punctuation_chars_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_pathauto_punctuation_chars_alter";s:10:"definition";s:67:"function hook_pathauto_punctuation_chars_alter(array &$punctuation)";s:11:"description";s:62:"Alter the list of punctuation characters for Pathauto control.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"pathauto";s:9:"file_path";s:31:"public://hooks/pathauto.api.php";s:4:"body";s:183:"
  // Add the trademark symbol.
  $punctuation['trademark'] = array('value' => '™', 'name' => t('Trademark symbol'));

  // Remove the dollar sign.
  unset($punctuation['dollar']);
";}}s:3:"rdf";a:2:{s:16:"hook_rdf_mapping";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_rdf_mapping";s:10:"definition";s:27:"function hook_rdf_mapping()";s:11:"description";s:55:"Allow modules to define RDF mappings for field bundles.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:3:"rdf";s:9:"file_path";s:26:"public://hooks/rdf.api.php";s:4:"body";s:713:"
  return array(
    array(
      'type' => 'node',
      'bundle' => 'blog',
      'mapping' => array(
        'rdftype' => array('sioct:Weblog'),
        'title' => array(
          'predicates' => array('dc:title'),
        ),
        'created' => array(
          'predicates' => array('dc:date', 'dc:created'),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
        'body' => array(
          'predicates' => array('content:encoded'),
        ),
        'uid' => array(
          'predicates' => array('sioc:has_creator'),
          'type' => 'rel',
        ),
        'name' => array(
          'predicates' => array('foaf:name'),
        ),
      ),
    ),
  );
";}s:19:"hook_rdf_namespaces";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_rdf_namespaces";s:10:"definition";s:30:"function hook_rdf_namespaces()";s:11:"description";s:52:"Allow modules to define namespaces for RDF mappings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:3:"rdf";s:9:"file_path";s:26:"public://hooks/rdf.api.php";s:4:"body";s:485:"
  return array(
    'content'  => 'http://purl.org/rss/1.0/modules/content/',
    'dc'       => 'http://purl.org/dc/terms/',
    'foaf'     => 'http://xmlns.com/foaf/0.1/',
    'og'       => 'http://ogp.me/ns#',
    'rdfs'     => 'http://www.w3.org/2000/01/rdf-schema#',
    'sioc'     => 'http://rdfs.org/sioc/ns#',
    'sioct'    => 'http://rdfs.org/sioc/types#',
    'skos'     => 'http://www.w3.org/2004/02/skos/core#',
    'xsd'      => 'http://www.w3.org/2001/XMLSchema#',
  );
";}}s:12:"registration";a:6:{s:24:"hook_registration_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_registration_access";s:10:"definition";s:70:"function hook_registration_access($op, $registration, $account = NULL)";s:11:"description";s:62:"Override registration_access with custom access control logic.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"registration";s:9:"file_path";s:35:"public://hooks/registration.api.php";s:4:"body";s:72:"
  if ($registration->user_uid == $account->uid) {
    return TRUE;
  }
";}s:33:"hook_registration_entity_settings";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:33:"hook_registration_entity_settings";s:10:"definition";s:53:"function hook_registration_entity_settings($settings)";s:11:"description";s:68:"Provide a form API element exposed as a Registration entity setting.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"registration";s:9:"file_path";s:35:"public://hooks/registration.api.php";s:4:"body";s:457:"
  return array(
    'registration_entity_access_roles' => array(
      '#type' => 'checkboxes',
      '#title' => t('Roles'),
      '#description' => t('Override default access control settings by selecting which roles can register for this event.'),
      '#options' => user_roles(),
      '#default_value' => isset($settings['settings']['registration_entity_access_roles']) ? $settings['settings']['registration_entity_access_roles'] : NULL,
    ),
  );
";}s:35:"hook_registration_event_count_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_registration_event_count_alter";s:10:"definition";s:63:"function hook_registration_event_count_alter(&$count, $context)";s:11:"description";s:38:"Allow modules to override event count.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"registration";s:9:"file_path";s:35:"public://hooks/registration.api.php";s:4:"body";s:2:"

";}s:38:"hook_registration_send_broadcast_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_registration_send_broadcast_alter";s:10:"definition";s:74:"function hook_registration_send_broadcast_alter(&$registrations, $context)";s:11:"description";s:74:"Allow modules to alter registration entity settings prior to sending email";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"registration";s:9:"file_path";s:35:"public://hooks/registration.api.php";s:4:"body";s:371:"
  // Loop through each registration.
  foreach ($registrations as $reg_id => $registration) {
    // Only send broadcast email for registrations where
    // user registered themself; not other user or anonymous.
    if (!($registration->user_uid == $registration->author_uid) ||
      !empty($registration->anon_mail)) {
      unset($registrations[$reg_id]);
    }
  }
";}s:50:"hook_registration_send_broadcast_ENTITY_TYPE_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:50:"hook_registration_send_broadcast_ENTITY_TYPE_alter";s:10:"definition";s:86:"function hook_registration_send_broadcast_ENTITY_TYPE_alter(&$registrations, $context)";s:11:"description";s:76:"Allow modules to alter registration entity settings for a specific node type";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"registration";s:9:"file_path";s:35:"public://hooks/registration.api.php";s:4:"body";s:371:"
  // Loop through each registration.
  foreach ($registrations as $reg_id => $registration) {
    // Only send broadcast email for registrations where
    // user registered themself; not other user or anonymous.
    if (!($registration->user_uid == $registration->author_uid) ||
      !empty($registration->anon_mail)) {
      unset($registrations[$reg_id]);
    }
  }
";}s:53:"hook_registration_send_broadcast_ENTITY_TYPE_ID_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:53:"hook_registration_send_broadcast_ENTITY_TYPE_ID_alter";s:10:"definition";s:89:"function hook_registration_send_broadcast_ENTITY_TYPE_ID_alter(&$registrations, $context)";s:11:"description";s:75:"Allow modules to alter registration entity settings for a particular entity";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:12:"registration";s:9:"file_path";s:35:"public://hooks/registration.api.php";s:4:"body";s:371:"
  // Loop through each registration.
  foreach ($registrations as $reg_id => $registration) {
    // Only send broadcast email for registrations where
    // user registered themself; not other user or anonymous.
    if (!($registration->user_uid == $registration->author_uid) ||
      !empty($registration->anon_mail)) {
      unset($registrations[$reg_id]);
    }
  }
";}}s:17:"registry_autoload";a:1:{s:37:"hook_registry_autoload_registry_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_registry_autoload_registry_alter";s:10:"definition";s:64:"function hook_registry_autoload_registry_alter(array &$registry)";s:11:"description";s:52:"Alter hook to update the registry_autoload registry.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:17:"registry_autoload";s:9:"file_path";s:40:"public://hooks/registry_autoload.api.php";s:4:"body";s:342:"
  // Remove all classes within RegistryAutoloadTestTest.php as defined by
  // registry_autoload_test module within the includes/ directory.
  $module_path = drupal_get_path('module', 'registry_autoload_test');
  $filename = 'includes/RegistryAutoloadTestTest.class.php';
  $path = $module_path . '/' . $filename;
  unset($registry[$path]);
";}}s:5:"rules";a:33:{s:22:"hook_rules_action_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_rules_action_info";s:10:"definition";s:33:"function hook_rules_action_info()";s:11:"description";s:32:"Define rules compatible actions.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:409:"
  return array(
    'mail_user' => array(
      'label' => t('Send a mail to a user'),
      'parameter' => array(
        'user' => array('type' => 'user', 'label' => t('Recipient')),
      ),
      'group' => t('System'),
      'base' => 'rules_action_mail_user',
      'callbacks' => array(
        'validate' => 'rules_action_custom_validation',
        'help' => 'rules_mail_help',
      ),
    ),
  );
";}s:24:"hook_rules_category_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_rules_category_info";s:10:"definition";s:35:"function hook_rules_category_info()";s:11:"description";s:70:"Define categories for Rules items, e.g. actions, conditions or events.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:300:"
  return array(
    'rules_data' => array(
      'label' => t('Data'),
      'equals group' => t('Data'),
      'weight' => -50,
    ),
    'fluxtwitter' => array(
      'label' => t('Twitter'),
      'icon font class' => 'icon-twitter',
      'icon font background color' => '#30a9fd',
    ),
  );
";}s:20:"hook_rules_file_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_rules_file_info";s:10:"definition";s:31:"function hook_rules_file_info()";s:11:"description";s:48:"Specify files containing rules integration code.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:42:"
  return array('yourmodule.rules-eval');
";}s:20:"hook_rules_directory";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_rules_directory";s:10:"definition";s:31:"function hook_rules_directory()";s:11:"description";s:63:"Specifies directories for class-based plugin handler discovery.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:44:"
  return 'lib/Drupal/fluxtwitter/Rules/*';
";}s:25:"hook_rules_condition_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_rules_condition_info";s:10:"definition";s:36:"function hook_rules_condition_info()";s:11:"description";s:24:"Define rules conditions.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:318:"
  return array(
    'rules_condition_text_compare' => array(
      'label' => t('Textual comparison'),
      'parameter' => array(
        'text1' => array('label' => t('Text 1'), 'type' => 'text'),
        'text2' => array('label' => t('Text 2'), 'type' => 'text'),
      ),
      'group' => t('Rules'),
    ),
  );
";}s:21:"hook_rules_event_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_rules_event_info";s:10:"definition";s:32:"function hook_rules_event_info()";s:11:"description";s:20:"Define rules events.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:1192:"
  $items = array(
    'node_insert' => array(
      'label' => t('After saving new content'),
      'group' => t('Node'),
      'variables' => rules_events_node_variables(t('created content')),
    ),
    'node_update' => array(
      'label' => t('After updating existing content'),
      'group' => t('Node'),
      'variables' => rules_events_node_variables(t('updated content'), TRUE),
    ),
    'node_presave' => array(
      'label' => t('Content is going to be saved'),
      'group' => t('Node'),
      'variables' => rules_events_node_variables(t('saved content'), TRUE),
    ),
    'node_view' => array(
      'label' => t('Content is going to be viewed'),
      'group' => t('Node'),
      'variables' => rules_events_node_variables(t('viewed content')) + array(
        'view_mode' => array('type' => 'text', 'label' => t('view mode')),
      ),
    ),
    'node_delete' => array(
      'label' => t('After deleting content'),
      'group' => t('Node'),
      'variables' => rules_events_node_variables(t('deleted content')),
    ),
  );
  // Specify that on presave the node is saved anyway.
  $items['node_presave']['variables']['node']['skip save'] = TRUE;
  return $items;
";}s:20:"hook_rules_data_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_rules_data_info";s:10:"definition";s:31:"function hook_rules_data_info()";s:11:"description";s:24:"Define rules data types.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:428:"
  return array(
    'node' => array(
      'label' => t('content'),
      'parent' => 'entity',
      'group' => t('Node'),
    ),
    // Formatted text as used by in hook_entity_property_info() for text fields.
    'text_formatted' => array(
      'label' => t('formatted text'),
      'ui class' => 'RulesDataUITextFormatted',
      'wrap' => TRUE,
      'property info' => entity_property_text_formatted_info(),
    ),
  );
";}s:22:"hook_rules_plugin_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_rules_plugin_info";s:10:"definition";s:33:"function hook_rules_plugin_info()";s:11:"description";s:22:"Defines rules plugins.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:595:"
  return array(
    'or' => array(
      'label' => t('Condition set (OR)'),
      'class' => 'RulesOr',
      'embeddable' => 'RulesConditionContainer',
      'component' => TRUE,
      'extenders' => array(
        'RulesPluginUIInterface' => array(
          'class' => 'RulesConditionContainerUI',
        ),
      ),
    ),
    'rule' => array(
      'class' => 'Rule',
      'embeddable' => 'RulesRuleSet',
      'extenders' => array(
        'RulesPluginUIInterface' => array(
          'class' => 'RulesRuleUI',
        ),
      ),
      'import keys' => array('DO', 'IF'),
    ),
  );
";}s:25:"hook_rules_evaluator_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_rules_evaluator_info";s:10:"definition";s:36:"function hook_rules_evaluator_info()";s:11:"description";s:40:"Declare provided rules input evaluators.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:151:"
  return array(
    'token' => array(
      'class' => 'RulesTokenEvaluator',
      'type' => array('text', 'uri'),
      'weight' => 0,
     ),
  );
";}s:30:"hook_rules_data_processor_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_rules_data_processor_info";s:10:"definition";s:41:"function hook_rules_data_processor_info()";s:11:"description";s:39:"Declare provided rules data processors.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:149:"
  return array(
    'date_offset' => array(
      'class' => 'RulesDateOffsetProcessor',
      'type' => 'date',
      'weight' => -2,
     ),
  );
";}s:28:"hook_rules_action_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_rules_action_info_alter";s:10:"definition";s:48:"function hook_rules_action_info_alter(&$actions)";s:11:"description";s:31:"Alter rules compatible actions.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:232:"
  // The rules action is more powerful, so hide the core action
  unset($actions['rules_core_node_assign_owner_action']);
  // We prefer handling saving by rules - not by the user.
  unset($actions['rules_core_node_save_action']);
";}s:31:"hook_rules_condition_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_rules_condition_info_alter";s:10:"definition";s:54:"function hook_rules_condition_info_alter(&$conditions)";s:11:"description";s:23:"Alter rules conditions.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:25:"
  // Change conditions.
";}s:27:"hook_rules_event_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_rules_event_info_alter";s:10:"definition";s:46:"function hook_rules_event_info_alter(&$events)";s:11:"description";s:19:"Alter rules events.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:21:"
  // Change events.
";}s:26:"hook_rules_data_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_rules_data_info_alter";s:10:"definition";s:48:"function hook_rules_data_info_alter(&$data_info)";s:11:"description";s:23:"Alter rules data types.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:25:"
  // Change data types.
";}s:28:"hook_rules_plugin_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:28:"hook_rules_plugin_info_alter";s:10:"definition";s:52:"function hook_rules_plugin_info_alter(&$plugin_info)";s:11:"description";s:24:"Alter rules plugin info.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:26:"
  // Change plugin info.
";}s:31:"hook_rules_evaluator_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_rules_evaluator_info_alter";s:10:"definition";s:58:"function hook_rules_evaluator_info_alter(&$evaluator_info)";s:11:"description";s:33:"Alter rules input evaluator info.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:29:"
  // Change evaluator info.
";}s:36:"hook_rules_data_processor_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_rules_data_processor_info_alter";s:10:"definition";s:63:"function hook_rules_data_processor_info_alter(&$processor_info)";s:11:"description";s:32:"Alter rules data_processor info.";s:11:"destination";s:17:"%module.rules.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:29:"
  // Change processor info.
";}s:22:"hook_rules_config_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_rules_config_load";s:10:"definition";s:41:"function hook_rules_config_load($configs)";s:11:"description";s:58:"Act on rules configuration being loaded from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:197:"
  $result = db_query('SELECT id, foo FROM {mytable} WHERE id IN(:ids)', array(':ids' => array_keys($configs)));
  foreach ($result as $record) {
    $configs[$record->id]->foo = $record->foo;
  }
";}s:24:"hook_rules_config_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_rules_config_insert";s:10:"definition";s:42:"function hook_rules_config_insert($config)";s:11:"description";s:49:"Respond to creation of a new rules configuration.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:131:"
  db_insert('mytable')
    ->fields(array(
      'nid' => $config->id,
      'plugin' => $config->plugin,
    ))
    ->execute();
";}s:25:"hook_rules_config_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_rules_config_presave";s:10:"definition";s:43:"function hook_rules_config_presave($config)";s:11:"description";s:55:"Act on a rules configuration being inserted or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:135:"
  if ($config->id && $config->owner == 'your_module') {
    // Add custom condition.
    $config->conditon(/* Your condition */);
  }
";}s:24:"hook_rules_config_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_rules_config_update";s:10:"definition";s:42:"function hook_rules_config_update($config)";s:11:"description";s:44:"Respond to updates to a rules configuration.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:125:"
  db_update('mytable')
    ->fields(array('plugin' => $config->plugin))
    ->condition('id', $config->id)
    ->execute();
";}s:24:"hook_rules_config_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_rules_config_delete";s:10:"definition";s:42:"function hook_rules_config_delete($config)";s:11:"description";s:40:"Respond to rules configuration deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:76:"
  db_delete('mytable')
    ->condition('id', $config->id)
    ->execute();
";}s:25:"hook_rules_config_execute";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_rules_config_execute";s:10:"definition";s:43:"function hook_rules_config_execute($config)";s:11:"description";s:41:"Respond to rules configuration execution.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:2:"

";}s:32:"hook_default_rules_configuration";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_default_rules_configuration";s:10:"definition";s:43:"function hook_default_rules_configuration()";s:11:"description";s:36:"Define default rules configurations.";s:11:"destination";s:26:"%module.rules_defaults.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:476:"
  $rule = rules_reaction_rule();
  $rule->label = 'example default rule';
  $rule->active = FALSE;
  $rule->event('node_update')
       ->condition(rules_condition('data_is', array('data:select' => 'node:status', 'value' => TRUE))->negate())
       ->condition('data_is', array('data:select' => 'node:type', 'value' => 'page'))
       ->action('drupal_message', array('message' => 'A node has been updated.'));

  $configs['rules_test_default_1'] = $rule;
  return $configs;
";}s:38:"hook_default_rules_configuration_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_default_rules_configuration_alter";s:10:"definition";s:58:"function hook_default_rules_configuration_alter(&$configs)";s:11:"description";s:35:"Alter default rules configurations.";s:11:"destination";s:26:"%module.rules_defaults.inc";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:65:"
  // Add custom condition.
  $configs['foo']->condition('bar');
";}s:34:"hook_rules_config_defaults_rebuild";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_rules_config_defaults_rebuild";s:10:"definition";s:71:"function hook_rules_config_defaults_rebuild($rules_configs, $originals)";s:11:"description";s:44:"Act after rebuilding default configurations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:440:"
  // Once all defaults have been rebuilt, update all i18n strings at once. That
  // way we build the rules cache once the rebuild is complete and avoid
  // rebuilding caches for each updated rule.
  foreach ($rules_configs as $name => $rule_config) {
    if (empty($originals[$name])) {
      rules_i18n_rules_config_insert($rule_config);
    }
    else {
      rules_i18n_rules_config_update($rule_config, $originals[$name]);
    }
  }
";}s:26:"hook_rules_component_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_rules_component_alter";s:10:"definition";s:68:"function hook_rules_component_alter($plugin, RulesPlugin $component)";s:11:"description";s:40:"Alter rules components before execution.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:2:"

";}s:26:"hook_rules_event_set_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_rules_event_set_alter";s:10:"definition";s:74:"function hook_rules_event_set_alter($event_name, RulesEventSet $event_set)";s:11:"description";s:18:"Alters event sets.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:2:"

";}s:39:"hook_rules_action_base_upgrade_map_name";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_rules_action_base_upgrade_map_name";s:10:"definition";s:58:"function hook_rules_action_base_upgrade_map_name($element)";s:11:"description";s:70:"D6 to D7 upgrade procedure hook for mapping action or condition names.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:22:"
  return 'data_set';
";}s:30:"hook_rules_action_base_upgrade";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_rules_action_base_upgrade";s:10:"definition";s:70:"function hook_rules_action_base_upgrade($element, RulesPlugin $target)";s:11:"description";s:78:"D6 to D7 upgrade procedure hook for mapping action or condition configuration.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:160:"
  $target->settings['data:select'] = $element['#settings']['#argument map']['node'] . ':title';
  $target->settings['value'] = $element['#settings']['title'];
";}s:32:"hook_rules_element_upgrade_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_rules_element_upgrade_alter";s:10:"definition";s:60:"function hook_rules_element_upgrade_alter($element, $target)";s:11:"description";s:78:"D6 to D7 upgrade procedure hook for mapping action or condition configuration.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:2:"

";}s:24:"hook_rules_ui_menu_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_rules_ui_menu_alter";s:10:"definition";s:67:"function hook_rules_ui_menu_alter(&$items, $base_path, $base_count)";s:11:"description";s:59:"Allows modules to alter or to extend the provided Rules UI.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:543:"
  $items[$base_path . '/manage/%rules_config/schedule'] = array(
    'title callback' => 'rules_get_title',
    'title arguments' => array('Schedule !plugin "!label"', $base_count + 1),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('rules_scheduler_schedule_form', $base_count + 1, $base_path),
    'access callback' => 'rules_config_access',
    'access arguments' => array('update', $base_count + 1),
    'file' => 'rules_scheduler.admin.inc',
    'file path' => drupal_get_path('module', 'rules_scheduler'),
  );
";}s:24:"hook_rules_config_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_rules_config_access";s:10:"definition";s:77:"function hook_rules_config_access($op, $rules_config = NULL, $account = NULL)";s:11:"description";s:39:"Control access to Rules configurations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"rules";s:9:"file_path";s:28:"public://hooks/rules.api.php";s:4:"body";s:217:"
  // Instead of returning FALSE return nothing, so others still can grant
  // access.
  if (isset($rules_config) && $rules_config->owner == 'mymodule' && user_access('my modules permission')) {
    return TRUE;
  }
";}}s:6:"search";a:10:{s:16:"hook_search_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_search_info";s:10:"definition";s:27:"function hook_search_info()";s:11:"description";s:28:"Define a custom search type.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:26:"callback_search_conditions";}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:180:"
  // Make the title translatable.
  t('Content');

  return array(
    'title' => 'Content',
    'path' => 'node',
    'conditions_callback' => 'callback_search_conditions',
  );
";}s:18:"hook_search_access";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_search_access";s:10:"definition";s:29:"function hook_search_access()";s:11:"description";s:41:"Define access to a custom search routine.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:41:"
  return user_access('access content');
";}s:17:"hook_search_reset";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_search_reset";s:10:"definition";s:28:"function hook_search_reset()";s:11:"description";s:57:"Take action when the search index is going to be rebuilt.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:127:"
  db_update('search_dataset')
    ->fields(array('reindex' => REQUEST_TIME))
    ->condition('type', 'node')
    ->execute();
";}s:18:"hook_search_status";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_search_status";s:10:"definition";s:29:"function hook_search_status()";s:11:"description";s:30:"Report the status of indexing.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:339:"
  $total = db_query('SELECT COUNT(*) FROM {node} WHERE status = 1')->fetchField();
  $remaining = db_query("SELECT COUNT(*) FROM {node} n LEFT JOIN {search_dataset} d ON d.type = 'node' AND d.sid = n.nid WHERE n.status = 1 AND d.sid IS NULL OR d.reindex <> 0")->fetchField();
  return array('remaining' => $remaining, 'total' => $total);
";}s:17:"hook_search_admin";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_search_admin";s:10:"definition";s:28:"function hook_search_admin()";s:11:"description";s:41:"Add elements to the search settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:1020:"
  // Output form for defining rank factor weights.
  $form['content_ranking'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content ranking'),
  );
  $form['content_ranking']['#theme'] = 'node_search_admin';
  $form['content_ranking']['info'] = array(
    '#value' => '<em>' . t('The following numbers control which properties the content search should favor when ordering the results. Higher numbers mean more influence, zero means the property is ignored. Changing these numbers does not require the search index to be rebuilt. Changes take effect immediately.') . '</em>'
  );

  // Note: reversed to reflect that higher number = higher ranking.
  $options = drupal_map_assoc(range(0, 10));
  foreach (module_invoke_all('ranking') as $var => $values) {
    $form['content_ranking']['factors']['node_rank_' . $var] = array(
      '#title' => $values['title'],
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => variable_get('node_rank_' . $var, 0),
    );
  }
  return $form;
";}s:19:"hook_search_execute";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_search_execute";s:10:"definition";s:62:"function hook_search_execute($keys = NULL, $conditions = NULL)";s:11:"description";s:40:"Execute a search for a set of key words.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:1732:"
  // Build matching conditions
  $query = db_select('search_index', 'i', array('target' => 'slave'))->extend('SearchQuery')->extend('PagerDefault');
  $query->join('node', 'n', 'n.nid = i.sid');
  $query
    ->condition('n.status', 1)
    ->addTag('node_access')
    ->searchExpression($keys, 'node');

  // Insert special keywords.
  $query->setOption('type', 'n.type');
  $query->setOption('language', 'n.language');
  if ($query->setOption('term', 'ti.tid')) {
    $query->join('taxonomy_index', 'ti', 'n.nid = ti.nid');
  }
  // Only continue if the first pass query matches.
  if (!$query->executeFirstPass()) {
    return array();
  }

  // Add the ranking expressions.
  _node_rankings($query);

  // Load results.
  $find = $query
    ->limit(10)
    ->execute();
  $results = array();
  foreach ($find as $item) {
    // Build the node body.
    $node = node_load($item->sid);
    node_build_content($node, 'search_result');
    $node->body = drupal_render($node->content);

    // Fetch comments for snippet.
    $node->rendered .= ' ' . module_invoke('comment', 'node_update_index', $node);
    // Fetch terms for snippet.
    $node->rendered .= ' ' . module_invoke('taxonomy', 'node_update_index', $node);

    $extra = module_invoke_all('node_search_result', $node);

    $results[] = array(
      'link' => url('node/' . $item->sid, array('absolute' => TRUE)),
      'type' => check_plain(node_type_get_name($node)),
      'title' => $node->title,
      'user' => theme('username', array('account' => $node)),
      'date' => $node->changed,
      'node' => $node,
      'extra' => $extra,
      'score' => $item->calculated_score,
      'snippet' => search_excerpt($keys, $node->body),
    );
  }
  return $results;
";}s:16:"hook_search_page";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_search_page";s:10:"definition";s:35:"function hook_search_page($results)";s:11:"description";s:41:"Override the rendering of search results.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:310:"
  $output['prefix']['#markup'] = '<ol class="search-results">';

  foreach ($results as $entry) {
    $output[] = array(
      '#theme' => 'search_result',
      '#result' => $entry,
      '#module' => 'my_module_name',
    );
  }
  $output['suffix']['#markup'] = '</ol>' . theme('pager');

  return $output;
";}s:22:"hook_search_preprocess";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_search_preprocess";s:10:"definition";s:38:"function hook_search_preprocess($text)";s:11:"description";s:27:"Preprocess text for search.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:45:"
  // Do processing on $text
  return $text;
";}s:17:"hook_update_index";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_update_index";s:10:"definition";s:28:"function hook_update_index()";s:11:"description";s:40:"Update the search index for this module.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:932:"
  $limit = (int)variable_get('search_cron_limit', 100);

  $result = db_query_range("SELECT n.nid FROM {node} n LEFT JOIN {search_dataset} d ON d.type = 'node' AND d.sid = n.nid WHERE d.sid IS NULL OR d.reindex <> 0 ORDER BY d.reindex ASC, n.nid ASC", 0, $limit);

  foreach ($result as $node) {
    $node = node_load($node->nid);

    // Save the changed time of the most recent indexed node, for the search
    // results half-life calculation.
    variable_set('node_cron_last', $node->changed);

    // Render the node.
    node_build_content($node, 'search_index');
    $node->rendered = drupal_render($node->content);

    $text = '<h1>' . check_plain($node->title) . '</h1>' . $node->rendered;

    // Fetch extra data normally not visible
    $extra = module_invoke_all('node_update_index', $node);
    foreach ($extra as $t) {
      $text .= $t;
    }

    // Update index
    search_index($node->nid, 'node', $text);
  }
";}s:26:"callback_search_conditions";a:9:{s:4:"type";s:8:"callback";s:4:"name";s:26:"callback_search_conditions";s:10:"definition";s:42:"function callback_search_conditions($keys)";s:11:"description";s:32:"Provide search query conditions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"search";s:9:"file_path";s:29:"public://hooks/search.api.php";s:4:"body";s:405:"
  $conditions = array();

  if (!empty($_REQUEST['keys'])) {
    $conditions['keys'] = $_REQUEST['keys'];
  }
  if (!empty($_REQUEST['sample_search_keys'])) {
    $conditions['sample_search_keys'] = $_REQUEST['sample_search_keys'];
  }
  if ($force_keys = config('sample_search.settings')->get('force_keywords')) {
    $conditions['sample_search_force_keywords'] = $force_keys;
  }
  return $conditions;
";}}s:13:"service_links";a:2:{s:18:"hook_service_links";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_service_links";s:10:"definition";s:29:"function hook_service_links()";s:11:"description";s:36:"Obtains all available service links.";s:11:"destination";s:25:"%module.service_links.inc";s:12:"dependencies";a:0:{}s:5:"group";s:13:"service_links";s:9:"file_path";s:36:"public://hooks/service_links.api.php";s:4:"body";s:1306:"
  $links = array();

  $links['myservice'] = array(
    // The name of the service.
    'name' => 'MyService',
    // A short description for the link.
    'description' => t('Share this post on MyService'),
    // The service URL and its params.
    'link' => 'http://example.com/?url=<encoded-url>&title=<encoded-title>&summary=<encoded-teaser>',
    // The service icon. The id name and .png extension is used as default.
    'icon' => drupal_get_path('module', 'myservice') .'/myservice.png',
    // Any additional attributes to apply to the element.
    'attributes' => array(
      'class' => array('myservice-special-class'), // A special class.
      'style' => 'text-decoration: underline;', // Apply any special inline styles.
    ),
    // JavaScript to add when this link is processed, can be a string or an array.
    'javascript' => drupal_get_path('module', 'myservice') .'/myservice.js',
    // CSS to add when this link is processed, can be a string or an array.
    'css' => drupal_get_path('module', 'myservice') .'/myservice.css',
    // A PHP function invoked before the link is created, useful to add new tags.
    'preset' => 'myservice_preset',
    // A PHP function callback that is invoked when the link is created.
    'callback' => 'myservice_callback',
  );

  return $links;
";}s:24:"hook_service_links_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_service_links_alter";s:10:"definition";s:42:"function hook_service_links_alter(&$links)";s:11:"description";s:39:"Allows alteration of the Service Links.";s:11:"destination";s:25:"%module.service_links.inc";s:12:"dependencies";a:0:{}s:5:"group";s:13:"service_links";s:9:"file_path";s:36:"public://hooks/service_links.api.php";s:4:"body";s:150:"
  if (isset($links['myservice'])) {
    // Change the icon of MyService.
    $links['myservice']['icon'] = 'http://drupal.org/misc/favicon.ico';
  }
";}}s:8:"shortcut";a:1:{s:25:"hook_shortcut_default_set";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_shortcut_default_set";s:10:"definition";s:44:"function hook_shortcut_default_set($account)";s:11:"description";s:72:"Return the name of a default shortcut set for the provided user account.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"shortcut";s:9:"file_path";s:31:"public://hooks/shortcut.api.php";s:4:"body";s:209:"
  // Use a special set of default shortcuts for administrators only.
  if (in_array(variable_get('user_admin_role', 0), $account->roles)) {
    return variable_get('mymodule_shortcut_admin_default_set');
  }
";}}s:10:"simpletest";a:4:{s:21:"hook_simpletest_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_simpletest_alter";s:10:"definition";s:40:"function hook_simpletest_alter(&$groups)";s:11:"description";s:24:"Alter the list of tests.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"simpletest";s:9:"file_path";s:33:"public://hooks/simpletest.api.php";s:4:"body";s:220:"
  // An alternative session handler module would not want to run the original
  // Session HTTPS handling test because it checks the sessions table in the
  // database.
  unset($groups['Session']['testHttpsSession']);
";}s:23:"hook_test_group_started";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_test_group_started";s:10:"definition";s:34:"function hook_test_group_started()";s:11:"description";s:25:"A test group has started.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"simpletest";s:9:"file_path";s:33:"public://hooks/simpletest.api.php";s:4:"body";s:1:"
";}s:24:"hook_test_group_finished";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_test_group_finished";s:10:"definition";s:35:"function hook_test_group_finished()";s:11:"description";s:26:"A test group has finished.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"simpletest";s:9:"file_path";s:33:"public://hooks/simpletest.api.php";s:4:"body";s:1:"
";}s:18:"hook_test_finished";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_test_finished";s:10:"definition";s:37:"function hook_test_finished($results)";s:11:"description";s:32:"An individual test has finished.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:10:"simpletest";s:9:"file_path";s:33:"public://hooks/simpletest.api.php";s:4:"body";s:1:"
";}}s:8:"taxonomy";a:12:{s:29:"hook_taxonomy_vocabulary_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_taxonomy_vocabulary_load";s:10:"definition";s:53:"function hook_taxonomy_vocabulary_load($vocabularies)";s:11:"description";s:41:"Act on taxonomy vocabularies when loaded.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:243:"
  $result = db_select('mytable', 'm')
    ->fields('m', array('vid', 'foo'))
    ->condition('m.vid', array_keys($vocabularies), 'IN')
    ->execute();
  foreach ($result as $record) {
    $vocabularies[$record->vid]->foo = $record->foo;
  }
";}s:32:"hook_taxonomy_vocabulary_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_taxonomy_vocabulary_presave";s:10:"definition";s:54:"function hook_taxonomy_vocabulary_presave($vocabulary)";s:11:"description";s:51:"Act on taxonomy vocabularies before they are saved.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:29:"
  $vocabulary->foo = 'bar';
";}s:31:"hook_taxonomy_vocabulary_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_taxonomy_vocabulary_insert";s:10:"definition";s:53:"function hook_taxonomy_vocabulary_insert($vocabulary)";s:11:"description";s:43:"Act on taxonomy vocabularies when inserted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:90:"
  if ($vocabulary->machine_name == 'my_vocabulary') {
    $vocabulary->weight = 100;
  }
";}s:31:"hook_taxonomy_vocabulary_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_taxonomy_vocabulary_update";s:10:"definition";s:53:"function hook_taxonomy_vocabulary_update($vocabulary)";s:11:"description";s:42:"Act on taxonomy vocabularies when updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:129:"
  db_update('mytable')
    ->fields(array('foo' => $vocabulary->foo))
    ->condition('vid', $vocabulary->vid)
    ->execute();
";}s:31:"hook_taxonomy_vocabulary_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_taxonomy_vocabulary_delete";s:10:"definition";s:53:"function hook_taxonomy_vocabulary_delete($vocabulary)";s:11:"description";s:49:"Respond to the deletion of taxonomy vocabularies.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:82:"
  db_delete('mytable')
    ->condition('vid', $vocabulary->vid)
    ->execute();
";}s:23:"hook_taxonomy_term_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_taxonomy_term_load";s:10:"definition";s:40:"function hook_taxonomy_term_load($terms)";s:11:"description";s:34:"Act on taxonomy terms when loaded.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:229:"
  $result = db_select('mytable', 'm')
    ->fields('m', array('tid', 'foo'))
    ->condition('m.tid', array_keys($terms), 'IN')
    ->execute();
  foreach ($result as $record) {
    $terms[$record->tid]->foo = $record->foo;
  }
";}s:26:"hook_taxonomy_term_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_taxonomy_term_presave";s:10:"definition";s:42:"function hook_taxonomy_term_presave($term)";s:11:"description";s:44:"Act on taxonomy terms before they are saved.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:23:"
  $term->foo = 'bar';
";}s:25:"hook_taxonomy_term_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_taxonomy_term_insert";s:10:"definition";s:41:"function hook_taxonomy_term_insert($term)";s:11:"description";s:36:"Act on taxonomy terms when inserted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:122:"
  db_insert('mytable')
    ->fields(array(
      'tid' => $term->tid,
      'foo' => $term->foo,
    ))
    ->execute();
";}s:25:"hook_taxonomy_term_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_taxonomy_term_update";s:10:"definition";s:41:"function hook_taxonomy_term_update($term)";s:11:"description";s:35:"Act on taxonomy terms when updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:117:"
  db_update('mytable')
    ->fields(array('foo' => $term->foo))
    ->condition('tid', $term->tid)
    ->execute();
";}s:25:"hook_taxonomy_term_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:25:"hook_taxonomy_term_delete";s:10:"definition";s:41:"function hook_taxonomy_term_delete($term)";s:11:"description";s:42:"Respond to the deletion of taxonomy terms.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:76:"
  db_delete('mytable')
    ->condition('tid', $term->tid)
    ->execute();
";}s:23:"hook_taxonomy_term_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_taxonomy_term_view";s:10:"definition";s:62:"function hook_taxonomy_term_view($term, $view_mode, $langcode)";s:11:"description";s:64:"Act on a taxonomy term that is being assembled before rendering.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:160:"
  $term->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
";}s:29:"hook_taxonomy_term_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_taxonomy_term_view_alter";s:10:"definition";s:47:"function hook_taxonomy_term_view_alter(&$build)";s:11:"description";s:42:"Alter the results of taxonomy_term_view().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:8:"taxonomy";s:9:"file_path";s:31:"public://hooks/taxonomy.api.php";s:4:"body";s:297:"
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;
  }

  // Add a #post_render callback to act on the rendered HTML of the term.
  $build['#post_render'][] = 'my_module_node_post_render';
";}}s:7:"trigger";a:2:{s:17:"hook_trigger_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_trigger_info";s:10:"definition";s:28:"function hook_trigger_info()";s:11:"description";s:57:"Declare triggers (events) for users to assign actions to.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"trigger";s:9:"file_path";s:30:"public://hooks/trigger.api.php";s:4:"body";s:554:"
  return array(
    'node' => array(
      'node_presave' => array(
        'label' => t('When either saving new content or updating existing content'),
      ),
      'node_insert' => array(
        'label' => t('After saving new content'),
      ),
      'node_update' => array(
        'label' => t('After saving updated content'),
      ),
      'node_delete' => array(
        'label' => t('After deleting content'),
      ),
      'node_view' => array(
        'label' => t('When content is viewed by an authenticated user'),
      ),
    ),
  );
";}s:23:"hook_trigger_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_trigger_info_alter";s:10:"definition";s:44:"function hook_trigger_info_alter(&$triggers)";s:11:"description";s:47:"Alter triggers declared by hook_trigger_info().";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"trigger";s:9:"file_path";s:30:"public://hooks/trigger.api.php";s:4:"body";s:75:"
  $triggers['node']['node_insert']['label'] = t('When content is saved');
";}}s:6:"update";a:3:{s:26:"hook_update_projects_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_update_projects_alter";s:10:"definition";s:47:"function hook_update_projects_alter(&$projects)";s:11:"description";s:71:"Alter the list of projects before fetching data and comparing versions.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"update";s:9:"file_path";s:29:"public://hooks/update.api.php";s:4:"body";s:1801:"
  // Hide a site-specific module from the list.
  unset($projects['site_specific_module']);

  // Add a disabled module to the list.
  // The key for the array should be the machine-readable project "short name".
  $projects['disabled_project_name'] = array(
    // Machine-readable project short name (same as the array key above).
    'name' => 'disabled_project_name',
    // Array of values from the main .info file for this project.
    'info' => array(
      'name' => 'Some disabled module',
      'description' => 'A module not enabled on the site that you want to see in the available updates report.',
      'version' => '7.x-1.0',
      'core' => '7.x',
      // The maximum file change time (the "ctime" returned by the filectime()
      // PHP method) for all of the .info files included in this project.
      '_info_file_ctime' => 1243888165,
    ),
    // The date stamp when the project was released, if known. If the disabled
    // project was an officially packaged release from drupal.org, this will
    // be included in the .info file as the 'datestamp' field. This only
    // really matters for development snapshot releases that are regenerated,
    // so it can be left undefined or set to 0 in most cases.
    'datestamp' => 1243888185,
    // Any modules (or themes) included in this project. Keyed by machine-
    // readable "short name", value is the human-readable project name printed
    // in the UI.
    'includes' => array(
      'disabled_project' => 'Disabled module',
      'disabled_project_helper' => 'Disabled module helper module',
      'disabled_project_foo' => 'Disabled module foo add-on module',
    ),
    // Does this project contain a 'module', 'theme', 'disabled-module', or
    // 'disabled-theme'?
    'project_type' => 'disabled-module',
  );
";}s:24:"hook_update_status_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_update_status_alter";s:10:"definition";s:45:"function hook_update_status_alter(&$projects)";s:11:"description";s:59:"Alter the information about available updates for projects.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"update";s:9:"file_path";s:29:"public://hooks/update.api.php";s:4:"body";s:774:"
  $settings = variable_get('update_advanced_project_settings', array());
  foreach ($projects as $project => $project_info) {
    if (isset($settings[$project]) && isset($settings[$project]['check']) &&
        ($settings[$project]['check'] == 'never' ||
          (isset($project_info['recommended']) &&
            $settings[$project]['check'] === $project_info['recommended']))) {
      $projects[$project]['status'] = UPDATE_NOT_CHECKED;
      $projects[$project]['reason'] = t('Ignored from settings');
      if (!empty($settings[$project]['notes'])) {
        $projects[$project]['extra'][] = array(
          'class' => array('admin-note'),
          'label' => t('Administrator note'),
          'data' => $settings[$project]['notes'],
        );
      }
    }
  }
";}s:26:"hook_verify_update_archive";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_verify_update_archive";s:10:"definition";s:72:"function hook_verify_update_archive($project, $archive_file, $directory)";s:11:"description";s:61:"Verify an archive after it has been downloaded and extracted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:6:"update";s:9:"file_path";s:29:"public://hooks/update.api.php";s:4:"body";s:219:"
  $errors = array();
  if (!file_exists($directory)) {
    $errors[] = t('The %directory does not exist.', array('%directory' => $directory));
  }
  // Add other checks on the archive integrity here.
  return $errors;
";}}s:4:"user";a:17:{s:14:"hook_user_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_user_load";s:10:"definition";s:31:"function hook_user_load($users)";s:11:"description";s:50:"Act on user objects when loaded from the database.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:200:"
  $result = db_query('SELECT uid, foo FROM {my_table} WHERE uid IN (:uids)', array(':uids' => array_keys($users)));
  foreach ($result as $record) {
    $users[$record->uid]->foo = $record->foo;
  }
";}s:16:"hook_user_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_user_delete";s:10:"definition";s:35:"function hook_user_delete($account)";s:11:"description";s:25:"Respond to user deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:79:"
  db_delete('mytable')
    ->condition('uid', $account->uid)
    ->execute();
";}s:16:"hook_user_cancel";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_user_cancel";s:10:"definition";s:51:"function hook_user_cancel($edit, $account, $method)";s:11:"description";s:34:"Act on user account cancellations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:1031:"
  switch ($method) {
    case 'user_cancel_block_unpublish':
      // Unpublish nodes (current revisions).
      module_load_include('inc', 'node', 'node.admin');
      $nodes = db_select('node', 'n')
        ->fields('n', array('nid'))
        ->condition('uid', $account->uid)
        ->execute()
        ->fetchCol();
      node_mass_update($nodes, array('status' => 0));
      break;

    case 'user_cancel_reassign':
      // Anonymize nodes (current revisions).
      module_load_include('inc', 'node', 'node.admin');
      $nodes = db_select('node', 'n')
        ->fields('n', array('nid'))
        ->condition('uid', $account->uid)
        ->execute()
        ->fetchCol();
      node_mass_update($nodes, array('uid' => 0));
      // Anonymize old revisions.
      db_update('node_revision')
        ->fields(array('uid' => 0))
        ->condition('uid', $account->uid)
        ->execute();
      // Clean history.
      db_delete('history')
        ->condition('uid', $account->uid)
        ->execute();
      break;
  }
";}s:30:"hook_user_cancel_methods_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_user_cancel_methods_alter";s:10:"definition";s:50:"function hook_user_cancel_methods_alter(&$methods)";s:11:"description";s:36:"Modify account cancellation methods.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:620:"
  // Limit access to disable account and unpublish content method.
  $methods['user_cancel_block_unpublish']['access'] = user_access('administer site configuration');

  // Remove the content re-assigning method.
  unset($methods['user_cancel_reassign']);

  // Add a custom zero-out method.
  $methods['mymodule_zero_out'] = array(
    'title' => t('Delete the account and remove all content.'),
    'description' => t('All your content will be replaced by empty strings.'),
    // access should be used for administrative methods only.
    'access' => user_access('access zero-out account cancellation method'),
  );
";}s:20:"hook_user_operations";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_user_operations";s:10:"definition";s:31:"function hook_user_operations()";s:11:"description";s:25:"Add mass user operations.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:398:"
  $operations = array(
    'unblock' => array(
      'label' => t('Unblock the selected users'),
      'callback' => 'user_user_operations_unblock',
    ),
    'block' => array(
      'label' => t('Block the selected users'),
      'callback' => 'user_user_operations_block',
    ),
    'cancel' => array(
      'label' => t('Cancel the selected user accounts'),
    ),
  );
  return $operations;
";}s:20:"hook_user_categories";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_user_categories";s:10:"definition";s:31:"function hook_user_categories()";s:11:"description";s:65:"Define a list of user settings or profile information categories.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:111:"
  return array(array(
    'name' => 'account',
    'title' => t('Account settings'),
    'weight' => 1,
  ));
";}s:17:"hook_user_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:17:"hook_user_presave";s:10:"definition";s:55:"function hook_user_presave(&$edit, $account, $category)";s:11:"description";s:49:"A user account is about to be created or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:220:"
  // Make sure that our form value 'mymodule_foo' is stored as
  // 'mymodule_bar' in the 'data' (serialized) column.
  if (isset($edit['mymodule_foo'])) {
    $edit['data']['mymodule_bar'] = $edit['mymodule_foo'];
  }
";}s:16:"hook_user_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_user_insert";s:10:"definition";s:54:"function hook_user_insert(&$edit, $account, $category)";s:11:"description";s:27:"A user account was created.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:135:"
  db_insert('mytable')
    ->fields(array(
      'myfield' => $edit['myfield'],
      'uid' => $account->uid,
    ))
    ->execute();
";}s:16:"hook_user_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_user_update";s:10:"definition";s:54:"function hook_user_update(&$edit, $account, $category)";s:11:"description";s:27:"A user account was updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:130:"
  db_insert('user_changes')
    ->fields(array(
      'uid' => $account->uid,
      'changed' => time(),
    ))
    ->execute();
";}s:15:"hook_user_login";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_user_login";s:10:"definition";s:42:"function hook_user_login(&$edit, $account)";s:11:"description";s:24:"The user just logged in.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:422:"
  // If the user has a NULL time zone, notify them to set a time zone.
  if (!$account->timezone && variable_get('configurable_timezones', 1) && variable_get('empty_timezone_message', 0)) {
    drupal_set_message(t('Configure your <a href="@user-edit">account time zone setting</a>.', array('@user-edit' => url("user/$account->uid/edit", array('query' => drupal_get_destination(), 'fragment' => 'edit-timezone')))));
  }
";}s:16:"hook_user_logout";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:16:"hook_user_logout";s:10:"definition";s:35:"function hook_user_logout($account)";s:11:"description";s:25:"The user just logged out.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:122:"
  db_insert('logouts')
    ->fields(array(
      'uid' => $account->uid,
      'time' => time(),
    ))
    ->execute();
";}s:14:"hook_user_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_user_view";s:10:"definition";s:56:"function hook_user_view($account, $view_mode, $langcode)";s:11:"description";s:50:"The user's account information is being displayed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:449:"
  if (user_access('create blog content', $account)) {
    $account->content['summary']['blog'] =  array(
      '#type' => 'user_profile_item',
      '#title' => t('Blog'),
      '#markup' => l(t('View recent blog entries'), "blog/$account->uid", array('attributes' => array('title' => t("Read !username's latest blog entries.", array('!username' => format_username($account)))))),
      '#attributes' => array('class' => array('blog')),
    );
  }
";}s:20:"hook_user_view_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_user_view_alter";s:10:"definition";s:38:"function hook_user_view_alter(&$build)";s:11:"description";s:65:"The user was built; the module may modify the structured content.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:328:"
  // Check for the existence of a field added by another module.
  if (isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;
  }

  // Add a #post_render callback to act on the rendered HTML of the user.
  $build['#post_render'][] = 'my_module_user_post_render';
";}s:22:"hook_user_role_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_user_role_presave";s:10:"definition";s:38:"function hook_user_role_presave($role)";s:11:"description";s:45:"Act on a user role being inserted or updated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:126:"
  // Set a UUID for the user role if it doesn't already exist
  if (empty($role->uuid)) {
    $role->uuid = uuid_uuid();
  }
";}s:21:"hook_user_role_insert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_user_role_insert";s:10:"definition";s:37:"function hook_user_role_insert($role)";s:11:"description";s:39:"Respond to creation of a new user role.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:212:"
  // Save extra fields provided by the module to user roles.
  db_insert('my_module_table')
    ->fields(array(
      'rid' => $role->rid,
      'role_description' => $role->description,
    ))
    ->execute();
";}s:21:"hook_user_role_update";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_user_role_update";s:10:"definition";s:37:"function hook_user_role_update($role)";s:11:"description";s:34:"Respond to updates to a user role.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:221:"
  // Save extra fields provided by the module to user roles.
  db_merge('my_module_table')
    ->key(array('rid' => $role->rid))
    ->fields(array(
      'role_description' => $role->description
    ))
    ->execute();
";}s:21:"hook_user_role_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_user_role_delete";s:10:"definition";s:37:"function hook_user_role_delete($role)";s:11:"description";s:30:"Respond to user role deletion.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"user";s:9:"file_path";s:27:"public://hooks/user.api.php";s:4:"body";s:136:"
  // Delete existing instances of the deleted role.
  db_delete('my_module_table')
    ->condition('rid', $role->rid)
    ->execute();
";}}s:4:"uuid";a:18:{s:14:"hook_uuid_sync";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_uuid_sync";s:10:"definition";s:25:"function hook_uuid_sync()";s:11:"description";s:49:"Ensures all records have a UUID assigned to them.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:79:"
  // Do what you need to do to generate missing UUIDs for you implementation.
";}s:21:"hook_entity_uuid_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_entity_uuid_load";s:10:"definition";s:56:"function hook_entity_uuid_load(&$entities, $entity_type)";s:11:"description";s:73:"Transform entity properties from local IDs to UUIDs when they are loaded.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:20:"hook_field_uuid_load";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_field_uuid_load";s:10:"definition";s:91:"function hook_field_uuid_load($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:72:"Transform field values from local IDs to UUIDs when an entity is loaded.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:24:"hook_entity_uuid_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_entity_uuid_presave";s:10:"definition";s:57:"function hook_entity_uuid_presave(&$entity, $entity_type)";s:11:"description";s:75:"Transform entity properties from UUIDs to local IDs before entity is saved.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:23:"hook_field_uuid_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_field_uuid_presave";s:10:"definition";s:94:"function hook_field_uuid_presave($entity_type, $entity, $field, $instance, $langcode, &$items)";s:11:"description";s:73:"Transform field values from UUIDs to local IDs before an entity is saved.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:21:"hook_entity_uuid_save";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_entity_uuid_save";s:10:"definition";s:53:"function hook_entity_uuid_save($entity, $entity_type)";s:11:"description";s:53:"Transform entity properties after an entity is saved.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:23:"hook_entity_uuid_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_entity_uuid_delete";s:10:"definition";s:55:"function hook_entity_uuid_delete($entity, $entity_type)";s:11:"description";s:42:"Let modules act when an entity is deleted.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:32:"hook_uuid_menu_path_to_uri_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_uuid_menu_path_to_uri_alter";s:10:"definition";s:55:"function hook_uuid_menu_path_to_uri_alter($path, &$uri)";s:11:"description";s:58:"Modifies paths when they are being converted to UUID ones.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:26:"hook_uuid_menu_uri_to_path";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_uuid_menu_uri_to_path";s:10:"definition";s:49:"function hook_uuid_menu_uri_to_path(&$path, $uri)";s:11:"description";s:60:"Modifies paths when they are being converted from UUID ones.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:26:"hook_uuid_default_entities";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_uuid_default_entities";s:10:"definition";s:37:"function hook_uuid_default_entities()";s:11:"description";s:74:"Allow modules to provide a list of default entities that will be imported.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:30:"hook_uuid_entities_pre_rebuild";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_uuid_entities_pre_rebuild";s:10:"definition";s:51:"function hook_uuid_entities_pre_rebuild($plan_name)";s:11:"description";s:75:"Let other modules do things before default entities are created on rebuild.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:31:"hook_uuid_entities_post_rebuild";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:31:"hook_uuid_entities_post_rebuild";s:10:"definition";s:52:"function hook_uuid_entities_post_rebuild($plan_name)";s:11:"description";s:74:"Let other modules do things after default entities are created on rebuild.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:29:"hook_uuid_entities_pre_revert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_uuid_entities_pre_revert";s:10:"definition";s:50:"function hook_uuid_entities_pre_revert($plan_name)";s:11:"description";s:74:"Let other modules do things before default entities are created on revert.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:30:"hook_uuid_entities_post_revert";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_uuid_entities_post_revert";s:10:"definition";s:51:"function hook_uuid_entities_post_revert($plan_name)";s:11:"description";s:73:"Let other modules do things after default entities are created on revert.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:47:"hook_uuid_entities_features_export_entity_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:47:"hook_uuid_entities_features_export_entity_alter";s:10:"definition";s:80:"function hook_uuid_entities_features_export_entity_alter(&$entity, $entity_type)";s:11:"description";s:63:"Let other modules alter entities that are about to be exported.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:46:"hook_uuid_entities_features_export_field_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:46:"hook_uuid_entities_features_export_field_alter";s:10:"definition";s:118:"function hook_uuid_entities_features_export_field_alter($entity_type, &$entity, $field, $instance, $langcode, &$items)";s:11:"description";s:73:"Let other modules alter fields on entities that are about to be exported.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:2:"

";}s:18:"hook_uuid_uri_data";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_uuid_uri_data";s:10:"definition";s:34:"function hook_uuid_uri_data($data)";s:11:"description";s:37:"Alter UUID URI data after processing.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:1:"
";}s:21:"hook_uuid_id_uri_data";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_uuid_id_uri_data";s:10:"definition";s:37:"function hook_uuid_id_uri_data($data)";s:11:"description";s:42:"Alter entity URI before creating UUID URI.";s:11:"destination";s:16:"%module.uuid.inc";s:12:"dependencies";a:0:{}s:5:"group";s:4:"uuid";s:9:"file_path";s:27:"public://hooks/uuid.api.php";s:4:"body";s:1:"
";}}s:13:"uuid_features";a:16:{s:38:"hook_uuid_entity_features_export_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_uuid_entity_features_export_alter";s:10:"definition";s:87:"function hook_uuid_entity_features_export_alter($entity_type, &$data, $entity, $module)";s:11:"description";s:49:"Allows to modify features metadata for an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:191:"
  // Access / modify the pipe.
  $pipe = &$data['__drupal_alter_by_ref']['pipe'];
  $data['features']['uuid_panelizer']['xyz'] = 'xyz';
  $pipe['dependencies']['module_xyz'] = 'module_xyz';
";}s:45:"hook_uuid_entity_features_export_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:45:"hook_uuid_entity_features_export_render_alter";s:10:"definition";s:95:"function hook_uuid_entity_features_export_render_alter($entity_type, $export, $entity, $module)";s:11:"description";s:48:"Allows to modify the export object of an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:39:"hook_uuid_entity_features_rebuild_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:39:"hook_uuid_entity_features_rebuild_alter";s:10:"definition";s:87:"function hook_uuid_entity_features_rebuild_alter($entity_type, $entity, $data, $module)";s:11:"description";s:53:"Allows to handle specific import tasks for an entity.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:42:"hook_uuid_entity_features_rebuild_complete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:42:"hook_uuid_entity_features_rebuild_complete";s:10:"definition";s:85:"function hook_uuid_entity_features_rebuild_complete($entity_type, $entities, $module)";s:11:"description";s:67:"Allows to act whenever all entities of a type / module are rebuilt.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:1:"
";}s:36:"hook_uuid_node_features_export_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_uuid_node_features_export_alter";s:10:"definition";s:69:"function hook_uuid_node_features_export_alter(&$data, $node, $module)";s:11:"description";s:46:"Allows to modify features metadata for a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:85:"
  // Access / modify the pipe.
  $pipe = &$export['__drupal_alter_by_ref']['pipe'];
";}s:44:"hook_uuid_node_features_export_options_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:44:"hook_uuid_node_features_export_options_alter";s:10:"definition";s:64:"function hook_uuid_node_features_export_options_alter(&$options)";s:11:"description";s:55:"Allows to adjust the features export options for nodes.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:43:"hook_uuid_node_features_export_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_uuid_node_features_export_render_alter";s:10:"definition";s:78:"function hook_uuid_node_features_export_render_alter(&$export, $node, $module)";s:11:"description";s:45:"Allows to modify the export object of a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:37:"hook_uuid_node_features_rebuild_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_uuid_node_features_rebuild_alter";s:10:"definition";s:63:"function hook_uuid_node_features_rebuild_alter(&$node, $module)";s:11:"description";s:50:"Allows to handle specific import tasks for a node.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:36:"hook_uuid_user_features_export_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_uuid_user_features_export_alter";s:10:"definition";s:60:"function hook_uuid_user_features_export_alter(&$data, $user)";s:11:"description";s:47:"Allows to modify features metadata for an user.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:43:"hook_uuid_user_features_export_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_uuid_user_features_export_render_alter";s:10:"definition";s:78:"function hook_uuid_user_features_export_render_alter(&$export, $user, $module)";s:11:"description";s:46:"Allows to modify the export object of an user.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:37:"hook_uuid_user_features_rebuild_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_uuid_user_features_rebuild_alter";s:10:"definition";s:63:"function hook_uuid_user_features_rebuild_alter(&$user, $module)";s:11:"description";s:51:"Allows to handle specific import tasks for an user.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:44:"hook_uuid_term_features_export_options_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:44:"hook_uuid_term_features_export_options_alter";s:10:"definition";s:64:"function hook_uuid_term_features_export_options_alter(&$options)";s:11:"description";s:55:"Allows to adjust the features export options for terms.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:56:"hook_uuid_field_collection_features_export_options_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:56:"hook_uuid_field_collection_features_export_options_alter";s:10:"definition";s:76:"function hook_uuid_field_collection_features_export_options_alter(&$options)";s:11:"description";s:67:"Allows to adjust the features export options for field collections.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:68:"hook_uuid_current_search_configuration_features_export_options_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:68:"hook_uuid_current_search_configuration_features_export_options_alter";s:10:"definition";s:88:"function hook_uuid_current_search_configuration_features_export_options_alter(&$options)";s:11:"description";s:73:"Allows to adjust the export options for the current search configuration.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:36:"hook_uuid_bean_features_export_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:36:"hook_uuid_bean_features_export_alter";s:10:"definition";s:60:"function hook_uuid_bean_features_export_alter(&$data, $bean)";s:11:"description";s:46:"Allows to modify features metadata for a bean.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}s:43:"hook_uuid_bean_features_export_render_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:43:"hook_uuid_bean_features_export_render_alter";s:10:"definition";s:78:"function hook_uuid_bean_features_export_render_alter(&$export, $bean, $module)";s:11:"description";s:45:"Allows to modify the export object of a bean.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:13:"uuid_features";s:9:"file_path";s:36:"public://hooks/uuid_features.api.php";s:4:"body";s:2:"

";}}s:5:"views";a:27:{s:15:"hook_views_data";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:15:"hook_views_data";s:10:"definition";s:26:"function hook_views_data()";s:11:"description";s:51:"Describes data tables (or the equivalent) to Views.";s:11:"destination";s:17:"%module.views.inc";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:5951:"
  // This example describes how to write hook_views_data() for the following
  // table:
  //
  // CREATE TABLE example_table (
  //   nid INT(11) NOT NULL         COMMENT 'Primary key; refers to {node}.nid.',
  //   plain_text_field VARCHAR(32) COMMENT 'Just a plain text field.',
  //   numeric_field INT(11)        COMMENT 'Just a numeric field.',
  //   boolean_field INT(1)         COMMENT 'Just an on/off field.',
  //   timestamp_field INT(8)       COMMENT 'Just a timestamp field.',
  //   PRIMARY KEY(nid)
  // );

  // First, the entry $data['example_table']['table'] describes properties of
  // the actual table – not its content.

  // The 'group' index will be used as a prefix in the UI for any of this
  // table's fields, sort criteria, etc. so it's easy to tell where they came
  // from.
  $data['example_table']['table']['group'] = t('Example table');

  // Define this as a base table – a table that can be described in itself by
  // views (and not just being brought in as a relationship). In reality this
  // is not very useful for this table, as it isn't really a distinct object of
  // its own, but it makes a good example.
  $data['example_table']['table']['base'] = array(
    'field' => 'nid', // This is the identifier field for the view.
    'title' => t('Example table'),
    'help' => t('Example table contains example content and can be related to nodes.'),
    'weight' => -10,
  );

  // This table references the {node} table. The declaration below creates an
  // 'implicit' relationship to the node table, so that when 'node' is the base
  // table, the fields are automatically available.
  $data['example_table']['table']['join'] = array(
    // Index this array by the table name to which this table refers.
    // 'left_field' is the primary key in the referenced table.
    // 'field' is the foreign key in this table.
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // Next, describe each of the individual fields in this table to Views. This
  // is done by describing $data['example_table']['FIELD_NAME']. This part of
  // the array may then have further entries:
  //   - title: The label for the table field, as presented in Views.
  //   - help: The description text for the table field.
  //   - relationship: A description of any relationship handler for the table
  //     field.
  //   - field: A description of any field handler for the table field.
  //   - sort: A description of any sort handler for the table field.
  //   - filter: A description of any filter handler for the table field.
  //   - argument: A description of any argument handler for the table field.
  //   - area: A description of any handler for adding content to header,
  //     footer or as no result behaviour.
  //
  // The handler descriptions are described with examples below.

  // Node ID table field.
  $data['example_table']['nid'] = array(
    'title' => t('Example content'),
    'help' => t('Some example content that references a node.'),
    // Define a relationship to the {node} table, so example_table views can
    // add a relationship to nodes. If you want to define a relationship the
    // other direction, use hook_views_data_alter(), or use the 'implicit' join
    // method described above.
    'relationship' => array(
      'base' => 'node', // The name of the table to join with.
      'base field' => 'nid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('Default label for the relationship'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
    ),
  );

  // Example plain text field.
  $data['example_table']['plain_text_field'] = array(
    'title' => t('Plain text field'),
    'help' => t('Just a plain text field.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Example numeric text field.
  $data['example_table']['numeric_field'] = array(
    'title' => t('Numeric field'),
    'help' => t('Just a numeric field.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Example boolean field.
  $data['example_table']['boolean_field'] = array(
    'title' => t('Boolean field'),
    'help' => t('Just an on/off field.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      // Note that you can override the field-wide label:
      'label' => t('Published'),
      // This setting is used by the boolean filter handler, as possible option.
      'type' => 'yes-no',
      // use boolean_field = 1 instead of boolean_field <> 0 in WHERE statement.
      'use equal' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Example timestamp field.
  $data['example_table']['timestamp_field'] = array(
    'title' => t('Timestamp field'),
    'help' => t('Just a timestamp field.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  return $data;
";}s:21:"hook_views_data_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_views_data_alter";s:10:"definition";s:38:"function hook_views_data_alter(&$data)";s:11:"description";s:22:"Alter table structure.";s:11:"destination";s:17:"%module.views.inc";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:1574:"
  // This example alters the title of the node:nid field in the Views UI.
  $data['node']['nid']['title'] = t('Node-Nid');

  // This example adds an example field to the users table.
  $data['users']['example_field'] = array(
    'title' => t('Example field'),
    'help' => t('Some example content that references a user'),
    'field' => array(
      'handler' => 'modulename_handler_field_example_field',
    ),
  );

  // This example changes the handler of the node title field.
  // In this handler you could do stuff, like preview of the node when clicking
  // the node title.
  $data['node']['title']['field']['handler'] = 'modulename_handler_field_node_title';

  // This example adds a relationship to table {foo}, so that 'foo' views can
  // add this table using a relationship. Because we don't want to write over
  // the primary key field definition for the {foo}.fid field, we use a dummy
  // field name as the key.
  $data['foo']['dummy_name'] = array(
    'title' => t('Example relationship'),
    'help' => t('Example help'),
    'relationship' => array(
      'base' => 'example_table', // Table we're joining to.
      'base field' => 'eid', // Field on the joined table.
      'field' => 'fid', // Real field name on the 'foo' table.
      'handler' => 'views_handler_relationship',
      'label' => t('Default label for relationship'),
      'title' => t('Title seen when adding relationship'),
      'help' => t('More information about relationship.'),
    ),
  );

  // Note that the $data array is not returned – it is modified by reference.
";}s:21:"hook_field_views_data";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_field_views_data";s:10:"definition";s:38:"function hook_field_views_data($field)";s:11:"description";s:48:"Override the default data for a Field API field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:2:"

";}s:27:"hook_field_views_data_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_field_views_data_alter";s:10:"definition";s:63:"function hook_field_views_data_alter(&$result, $field, $module)";s:11:"description";s:50:"Alter the views data for a single Field API field.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:2:"

";}s:38:"hook_field_views_data_views_data_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_field_views_data_views_data_alter";s:10:"definition";s:63:"function hook_field_views_data_views_data_alter(&$data, $field)";s:11:"description";s:42:"Alter the views data on a per field basis.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:136:"
  $field_name = $field['field_name'];
  $data_key = 'field_data_' . $field_name;
  // Views data for this field is in $data[$data_key]
";}s:18:"hook_views_plugins";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:18:"hook_views_plugins";s:10:"definition";s:29:"function hook_views_plugins()";s:11:"description";s:40:"Describes plugins defined by the module.";s:11:"destination";s:17:"%module.views.inc";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:1048:"
  $plugins = array();
  $plugins['argument validator'] = array(
    'taxonomy_term' => array(
      'title' => t('Taxonomy term'),
      'handler' => 'views_plugin_argument_validate_taxonomy_term',
      // Declaring path explicitly not necessary for most modules.
      'path' => drupal_get_path('module', 'views') . '/modules/taxonomy',
    ),
  );

  return array(
    'module' => 'views', // This just tells our themes are elsewhere.
    'argument validator' => array(
      'taxonomy_term' => array(
        'title' => t('Taxonomy term'),
        'handler' => 'views_plugin_argument_validate_taxonomy_term',
        'path' => drupal_get_path('module', 'views') . '/modules/taxonomy', // not necessary for most modules
      ),
    ),
    'argument default' => array(
      'taxonomy_tid' => array(
        'title' => t('Taxonomy term ID from URL'),
        'handler' => 'views_plugin_argument_default_taxonomy_tid',
        'path' => drupal_get_path('module', 'views') . '/modules/taxonomy',
        'parent' => 'fixed',
      ),
    ),
  );
";}s:24:"hook_views_plugins_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_views_plugins_alter";s:10:"definition";s:44:"function hook_views_plugins_alter(&$plugins)";s:11:"description";s:48:"Alter existing plugins data, defined by modules.";s:11:"destination";s:17:"%module.views.inc";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:109:"
  // Add apachesolr to the base of the node row plugin.
  $plugins['row']['node']['base'][] = 'apachesolr';
";}s:14:"hook_views_api";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:14:"hook_views_api";s:10:"definition";s:25:"function hook_views_api()";s:11:"description";s:30:"Register View API information.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:183:"
  return array(
    'api' => 3,
    'path' => drupal_get_path('module', 'example') . '/includes/views',
    'template path' => drupal_get_path('module', 'example') . '/themes',
  );
";}s:24:"hook_views_default_views";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:24:"hook_views_default_views";s:10:"definition";s:35:"function hook_views_default_views()";s:11:"description";s:76:"This hook allows modules to provide their own views which can either be used";s:11:"destination";s:25:"%module.views_default.inc";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:3888:"
  // Begin copy and paste of output from the Export tab of a view.
  $view = new view;
  $view->name = 'frontpage';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'frontpage';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = '1';

  // (Export ends here.)

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.

  // At the end, return array of default views.
  return $views;
";}s:30:"hook_views_default_views_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_views_default_views_alter";s:10:"definition";s:48:"function hook_views_default_views_alter(&$views)";s:11:"description";s:45:"Alter default views defined by other modules.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:135:"
  if (isset($views['taxonomy_term'])) {
    $views['taxonomy_term']->display['default']->display_options['title'] = 'Categories';
  }
";}s:30:"hook_views_query_substitutions";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_views_query_substitutions";s:10:"definition";s:46:"function hook_views_query_substitutions($view)";s:11:"description";s:58:"Performs replacements in the query before being performed.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:308:"
  // Example from views_views_query_substitutions().
  global $language_content;
  return array(
    '***CURRENT_VERSION***' => VERSION,
    '***CURRENT_TIME***' => REQUEST_TIME,
    '***CURRENT_LANGUAGE***' => $language_content->language,
    '***DEFAULT_LANGUAGE***' => language_default('language'),
  );
";}s:29:"hook_views_form_substitutions";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_views_form_substitutions";s:10:"definition";s:40:"function hook_views_form_substitutions()";s:11:"description";s:74:"This hook is called to get a list of placeholders and their substitutions,";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:95:"
  return array(
    '<!--views-form-example-substitutions-->' => 'Example Substitution',
  );
";}s:19:"hook_views_pre_view";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_views_pre_view";s:10:"definition";s:58:"function hook_views_pre_view(&$view, &$display_id, &$args)";s:11:"description";s:72:"Allows altering a view at the very beginning of views processing, before";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:447:"
  // Change the display if the acting user has 'administer site configuration'
  // permission, to display something radically different.
  // (Note that this is not necessarily the best way to solve that task. Feel
  // free to contribute another example!)
  if (
    $view->name == 'my_special_view' &&
    user_access('administer site configuration') &&
    $display_id == 'public_display'
  ) {
    $view->set_display('private_display');
  }
";}s:20:"hook_views_pre_build";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_views_pre_build";s:10:"definition";s:37:"function hook_views_pre_build(&$view)";s:11:"description";s:70:"This hook is called right before the build process, but after displays";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:293:"
  // Because of some inexplicable business logic, we should remove all
  // attachments from all views on Mondays.
  // (This alter could be done later in the execution process as well.)
  if (date('D') == 'Mon') {
    unset($view->attachment_before);
    unset($view->attachment_after);
  }
";}s:21:"hook_views_post_build";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_views_post_build";s:10:"definition";s:38:"function hook_views_post_build(&$view)";s:11:"description";s:73:"This hook is called right after the build process. The query is now fully";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:610:"
  // If the exposed field 'type' is set, hide the column containing the content
  // type. (Note that this is a solution for a particular view, and makes
  // assumptions about both exposed filter settings and the fields in the view.
  // Also note that this alter could be done at any point before the view being
  // rendered.)
  if ($view->name == 'my_view' && isset($view->exposed_raw_input['type']) && $view->exposed_raw_input['type'] != 'All') {
    // 'Type' should be interpreted as content type.
    if (isset($view->field['type'])) {
      $view->field['type']->options['exclude'] = TRUE;
    }
  }
";}s:22:"hook_views_pre_execute";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_views_pre_execute";s:10:"definition";s:39:"function hook_views_pre_execute(&$view)";s:11:"description";s:76:"This hook is called right before the execute process. The query is now fully";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:421:"
  // Whenever a view queries more than two tables, show a message that notifies
  // view administrators that the query might be heavy.
  // (This action could be performed later in the execution process, but not
  // earlier.)
  if (count($view->query->tables) > 2 && user_access('administer views')) {
    drupal_set_message(t('The view %view may be heavy to execute.', array('%view' => $view->name)), 'warning');
  }
";}s:23:"hook_views_post_execute";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_views_post_execute";s:10:"definition";s:40:"function hook_views_post_execute(&$view)";s:11:"description";s:66:"This hook is called right after the execute process. The query has";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:356:"
  // If there are more than 100 results, show a message that encourages the user
  // to change the filter settings.
  // (This action could be performed later in the execution process, but not
  // earlier.)
  if ($view->total_rows > 100) {
    drupal_set_message(t('You have more than 100 hits. Use the filter settings to narrow down your list.'));
  }
";}s:21:"hook_views_pre_render";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:21:"hook_views_pre_render";s:10:"definition";s:38:"function hook_views_pre_render(&$view)";s:11:"description";s:71:"This hook is called right before the render process. The query has been";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:183:"
  // Scramble the order of the rows shown on this result page.
  // Note that this could be done earlier, but not later in the view execution
  // process.
  shuffle($view->result);
";}s:22:"hook_views_post_render";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_views_post_render";s:10:"definition";s:58:"function hook_views_post_render(&$view, &$output, &$cache)";s:11:"description";s:31:"Post process any rendered data.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:327:"
  // When using full pager, disable any time-based caching if there are less
  // then 10 results.
  if ($view->query->pager instanceof views_plugin_pager_full && $cache->options['type'] == 'time' && count($view->result) < 10) {
    $cache['options']['results_lifespan'] = 0;
    $cache['options']['output_lifespan'] = 0;
  }
";}s:22:"hook_views_query_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_views_query_alter";s:10:"definition";s:48:"function hook_views_query_alter(&$view, &$query)";s:11:"description";s:43:"Alter the query before executing the query.";s:11:"destination";s:17:"%module.views.inc";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:841:"
  // (Example assuming a view with an exposed filter on node title.)
  // If the input for the title filter is a positive integer, filter against
  // node ID instead of node title.
  if ($view->name == 'my_view' && is_numeric($view->exposed_raw_input['title']) && $view->exposed_raw_input['title'] > 0) {
    // Traverse through the 'where' part of the query.
    foreach ($query->where as &$condition_group) {
      foreach ($condition_group['conditions'] as &$condition) {
        // If this is the part of the query filtering on title, change the
        // condition to filter on node ID.
        if ($condition['field'] == 'node.title') {
          $condition = array(
            'field' => 'node.nid',
            'value' => $view->exposed_raw_input['title'],
            'operator' => '=',
          );
        }
      }
    }
  }
";}s:29:"hook_views_preview_info_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:29:"hook_views_preview_info_alter";s:10:"definition";s:53:"function hook_views_preview_info_alter(&$rows, $view)";s:11:"description";s:72:"Alter the information box that (optionally) appears with a view preview,";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:285:"
  // Adds information about the tables being queried by the view to the query
  // part of the info box.
  $rows['query'][] = array(
    t('<strong>Table queue</strong>'),
    count($view->query->table_queue) . ': (' . implode(', ', array_keys($view->query->table_queue)) . ')',
  );
";}s:37:"hook_views_ui_display_top_links_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_views_ui_display_top_links_alter";s:10:"definition";s:75:"function hook_views_ui_display_top_links_alter(&$links, $view, $display_id)";s:11:"description";s:75:"This hooks allows to alter the links at the top of the view edit form. Some";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:141:"
  // Put the export link first in the list.
  if (isset($links['export'])) {
    $links = array('export' => $links['export']) + $links;
  }
";}s:26:"hook_views_ajax_data_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:26:"hook_views_ajax_data_alter";s:10:"definition";s:54:"function hook_views_ajax_data_alter(&$commands, $view)";s:11:"description";s:69:"This hook allows to alter the commands which are used on a views ajax";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:250:"
  // Replace Views' method for scrolling to the top of the element with your
  // custom scrolling method.
  foreach ($commands as &$command) {
    if ($command['command'] == 'viewsScrollTop') {
      $command['command'] .= 'myScrollTop';
    }
  }
";}s:27:"hook_views_invalidate_cache";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:27:"hook_views_invalidate_cache";s:10:"definition";s:38:"function hook_views_invalidate_cache()";s:11:"description";s:62:"Allow modules to respond to the Views cache being invalidated.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:55:"
  cache_clear_all('views:*', 'cache_mymodule', TRUE);
";}s:23:"hook_views_view_presave";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:23:"hook_views_view_presave";s:10:"definition";s:39:"function hook_views_view_presave($view)";s:11:"description";s:51:"Allow modules to alter a view prior to being saved.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:133:"
  // Do some adjustments to the view. Handle with care.
  if (mymodule_check_view($view)) {
    mymodule_do_some_voodoo($view);
  }
";}s:20:"hook_views_view_save";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:20:"hook_views_view_save";s:10:"definition";s:36:"function hook_views_view_save($view)";s:11:"description";s:47:"Allow modules to respond to a view being saved.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:196:"
  // Make a watchdog entry.
  watchdog('views', 'The view @name was deleted by @user at @time', array('@name' => $view->name, '@user' => $GLOBALS['user']->name, '@time' => format_date(time())));
";}s:22:"hook_views_view_delete";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:22:"hook_views_view_delete";s:10:"definition";s:38:"function hook_views_view_delete($view)";s:11:"description";s:61:"Allow modules to respond to a view being deleted or reverted.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:1:{i:0;s:14:"hook_views_api";}s:5:"group";s:5:"views";s:9:"file_path";s:28:"public://hooks/views.api.php";s:4:"body";s:196:"
  // Make a watchdog entry.
  watchdog('views', 'The view @name was deleted by @user at @time', array('@name' => $view->name, '@user' => $GLOBALS['user']->name, '@time' => format_date(time())));
";}}s:21:"views_bulk_operations";a:1:{s:37:"hook_views_bulk_operations_form_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:37:"hook_views_bulk_operations_form_alter";s:10:"definition";s:74:"function hook_views_bulk_operations_form_alter(&$form, &$form_state, $vbo)";s:11:"description";s:58:"Perform alterations on the VBO form before it is rendered.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:21:"views_bulk_operations";s:9:"file_path";s:44:"public://hooks/views_bulk_operations.api.php";s:4:"body";s:439:"
  if ($form_state['step'] == 'views_form_views_form') {
    // Alter the first step of the VBO form (the selection page).
    $form['select']['#title'] = t('Bulk operations');
  }
  elseif ($form_state['step'] == 'views_bulk_operations_config_form') {
    // Alter the configuration step of the VBO form.
  }
  elseif ($form_state['step'] == 'views_bulk_operations_confirm_form') {
    // Alter the confirmation step of the VBO form.
  }
";}}s:15:"views_slideshow";a:9:{s:35:"hook_views_slideshow_slideshow_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:35:"hook_views_slideshow_slideshow_info";s:10:"definition";s:46:"function hook_views_slideshow_slideshow_info()";s:11:"description";s:66:"Define the type of the slideshow (eg.: cycle, imageflow, ddblock).";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:438:"
  $options = array(
    'views_slideshow_cycle' => array(
      'name' => t('Cycle'),
      'accepts' => array(
        'goToSlide',
        'nextSlide',
        'pause',
        'play',
        'previousSlide',
      ),
      'calls' => array(
        'transitionBegin',
        'transitionEnd',
        'goToSlide',
        'pause',
        'play',
        'nextSlide',
        'previousSlide',
      ),
    ),
  );
  return $options;
";}s:40:"hook_views_slideshow_slideshow_type_form";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_views_slideshow_slideshow_type_form";s:10:"definition";s:79:"function hook_views_slideshow_slideshow_type_form(&$form, &$form_state, &$view)";s:11:"description";s:62:"Define form fields to be displayed in the views settings form.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:528:"
  $form['views_slideshow_cycle']['effect'] = array(
    '#type' => 'select',
    '#title' => t('Effect'),
    '#options' => $effects,
    '#default_value' => $view->options['views_slideshow_cycle']['effect'],
    '#description' => t('The transition effect that will be used to change between images. Not all options below may be relevant depending on the effect. ' . l('Follow this link to see examples of each effect.', 'http://jquery.malsup.com/cycle/browser.html', array('attributes' => array('target' => '_blank')))),
  );
";}s:38:"hook_views_slideshow_option_definition";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_views_slideshow_option_definition";s:10:"definition";s:49:"function hook_views_slideshow_option_definition()";s:11:"description";s:83:"Set default values for your form fields specified in hook_views_slideshow_type_form";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:437:"
  $options['views_slideshow_cycle'] = array(
    'contains' => array(
      // Transition
      'effect' => array('default' => 'fade'),
      'transition_advanced' => array('default' => 0),
      'timeout' => array('default' => 5000),
      'speed' => array('default' => 700), //normal
      'delay' => array('default' => 0),
      'sync' => array('default' => 1),
      'random' => array('default' => 0),
    )
  );
  return $options;
";}s:42:"hook_views_slideshow_options_form_validate";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:42:"hook_views_slideshow_options_form_validate";s:10:"definition";s:81:"function hook_views_slideshow_options_form_validate(&$form, &$form_state, &$view)";s:11:"description";s:52:"Form validation callback for the slideshow settings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:650:"
  if (!is_numeric($form_state['values']['style_options']['views_slideshow_cycle']['speed'])) {
    form_error($form['views_slideshow_cycle']['speed'], t('!setting must be numeric!', array('Speed')));
  }
  if (!is_numeric($form_state['values']['style_options']['views_slideshow_cycle']['timeout'])) {
    form_error($form['views_slideshow_cycle']['speed'], t('!setting must be numeric!', array('timeout')));
  }
  if (!is_numeric($form_state['values']['style_options']['views_slideshow_cycle']['remember_slide_days'])) {
    form_error($form['views_slideshow_cycle']['remember_slide_days'], t('!setting must be numeric!', array('Slide days')));
  }
";}s:40:"hook_views_slideshow_options_form_submit";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:40:"hook_views_slideshow_options_form_submit";s:10:"definition";s:70:"function hook_views_slideshow_options_form_submit($form, &$form_state)";s:11:"description";s:52:"Form submission callback for the slideshow settings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:32:"
  // Act on option submission.
";}s:30:"hook_views_slideshow_skin_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_views_slideshow_skin_info";s:10:"definition";s:41:"function hook_views_slideshow_skin_info()";s:11:"description";s:55:"Define slideshow skins to be available to the end user.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:83:"
  return array(
    'default' => array(
      'name' => t('Default'),
    ),
  );
";}s:32:"hook_views_slideshow_widget_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:32:"hook_views_slideshow_widget_info";s:10:"definition";s:43:"function hook_views_slideshow_widget_info()";s:11:"description";s:48:"Define new widgets (pagers, controls, counters).";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:930:"
  return array(
    'views_slideshow_pager' => array(
      'name' => t('Pager'),
      'accepts' => array(
        'transitionBegin' => array('required' => TRUE),
        'goToSlide',
        'previousSlide',
        'nextSlide',
      ),
      'calls' => array(
        'goToSlide',
        'pause',
        'play',
      ),
    ),
    'views_slideshow_controls' => array(
      'name' => t('Controls'),
      'accepts' => array(
        'pause' => array('required' => TRUE),
        'play' => array('required' => TRUE),
      ),
      'calls' => array(
        'nextSlide',
        'pause',
        'play',
        'previousSlide',
      ),
    ),
    'views_slideshow_slide_counter' => array(
      'name' => t('Slide Counter'),
      'accepts' => array(
        'transitionBegin' => array('required' => TRUE),
        'goToSlide',
        'previousSlide',
        'nextSlide',
      ),
      'calls' => array(),
    ),
  );
";}s:38:"hook_views_slideshow_widget_pager_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:38:"hook_views_slideshow_widget_pager_info";s:10:"definition";s:54:"function hook_views_slideshow_widget_pager_info($view)";s:11:"description";s:81:"Hook called by the pager widget to configure it, the fields that should be shown.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:1:"
";}s:41:"hook_views_slideshow_widget_controls_info";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:41:"hook_views_slideshow_widget_controls_info";s:10:"definition";s:57:"function hook_views_slideshow_widget_controls_info($view)";s:11:"description";s:84:"Hook called by the controls widget to configure it, the fields that should be shown.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:15:"views_slideshow";s:9:"file_path";s:38:"public://hooks/views_slideshow.api.php";s:4:"body";s:1:"
";}}s:7:"wysiwyg";a:5:{s:19:"hook_wysiwyg_plugin";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_wysiwyg_plugin";s:10:"definition";s:47:"function hook_wysiwyg_plugin($editor, $version)";s:11:"description";s:41:"Return an array of native editor plugins.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"wysiwyg";s:9:"file_path";s:30:"public://hooks/wysiwyg.api.php";s:4:"body";s:2626:"
  switch ($editor) {
    case 'tinymce':
      if ($version > 3) {
        return array(
          'myplugin' => array(
            // A URL to the plugin's homepage.
            'url' => 'http://drupal.org/project/img_assist',
            // The full path to the native editor plugin, no trailing slash.
            // Ignored when 'internal' is set to TRUE below.
            'path' => drupal_get_path('module', 'img_assist') . '/drupalimage',
            // The name of the plugin's main JavaScript file.
            // Ignored when 'internal' is set to TRUE below.
            // Default value depends on which editor the plugin is for.
            'filename' => 'editor_plugin.js',
            // A list of buttons provided by this native plugin. The key has to
            // match the corresponding JavaScript implementation. The value is
            // is displayed on the editor configuration form only.
            'buttons' => array(
              'img_assist' => t('Image Assist'),
            ),
            // A list of editor extensions provided by this native plugin.
            // Extensions are not displayed as buttons and touch the editor's
            // internals, so you should know what you are doing.
            'extensions' => array(
              'imce' => t('IMCE'),
            ),
            // A list of global, native editor configuration settings to
            // override. To be used rarely and only when required.
            'options' => array(
              'file_browser_callback' => 'imceImageBrowser',
              'inline_styles' => TRUE,
            ),
            // Boolean whether the editor needs to load this plugin. When TRUE,
            // the editor will automatically load the plugin based on the 'path'
            // variable provided. If FALSE, the plugin either does not need to
            // be loaded or is already loaded by something else on the page.
            // Most plugins should define TRUE here.
            'load' => TRUE,
            // Boolean whether this plugin is a native plugin, i.e. shipped with
            // the editor. Definition must be omitted for plugins provided by
            // other modules. TRUE means 'path' and 'filename' above are ignored
            // and the plugin is instead loaded from the editor's plugin folder.
            'internal' => TRUE,
            // TinyMCE-specific: Additional HTML elements to allow in the markup.
            'extended_valid_elements' => array(
              'img[class|src|border=0|alt|title|width|height|align|name|style]',
            ),
          ),
        );
      }
      break;
  }
";}s:30:"hook_wysiwyg_include_directory";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:30:"hook_wysiwyg_include_directory";s:10:"definition";s:46:"function hook_wysiwyg_include_directory($type)";s:11:"description";s:48:"Register a directory containing Wysiwyg plugins.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"wysiwyg";s:9:"file_path";s:30:"public://hooks/wysiwyg.api.php";s:4:"body";s:181:"
  switch ($type) {
    case 'plugins':
      // You can just return $type, if you place your Wysiwyg plugins into a
      // sub-directory named 'plugins'.
      return $type;
  }
";}s:19:"hook_INCLUDE_plugin";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_INCLUDE_plugin";s:10:"definition";s:30:"function hook_INCLUDE_plugin()";s:11:"description";s:24:"Define a Wysiwyg plugin.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"wysiwyg";s:9:"file_path";s:30:"public://hooks/wysiwyg.api.php";s:4:"body";s:1630:"
  $plugins['awesome'] = array(
    // The plugin's title; defaulting to its internal name ('awesome').
    'title' => t('Awesome plugin'),
    // The (vendor) homepage of this plugin; defaults to ''.
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    // The path to the button's icon; defaults to
    // '/[path-to-module]/[plugins-directory]/[plugin-name]/images'.
    'icon path' => 'path to icon',
    // The button image filename; defaults to '[plugin-name].png'.
    'icon file' => 'name of the icon file with extension',
    // The button title to display on hover.
    'icon title' => t('Do something'),
    // An alternative path to the integration JavaScript; defaults to
    // '[path-to-module]/[plugins-directory]/[plugin-name]'.
    'js path' => drupal_get_path('module', 'mymodule') . '/awesomeness',
    // An alternative filename of the integration JavaScript; defaults to
    // '[plugin-name].js'.
    'js file' => 'awesome.js',
    // An alternative path to the integration stylesheet; defaults to
    // '[path-to-module]/[plugins-directory]/[plugin-name]'.
    'css path' => drupal_get_path('module', 'mymodule') . '/awesomeness',
    // An alternative filename of the integration stylesheet; defaults to
    // '[plugin-name].css'.
    'css file' => 'awesome.css',
    // An array of settings for this button. Required, but API is still in flux.
    'settings' => array(
    ),
    // TinyMCE-specific: Additional HTML elements to allow in the markup.
    'extended_valid_elements' => array(
      'tag1[attribute1|attribute2]',
      'tag2[attribute3|attribute4]',
    ),
  );
  return $plugins;
";}s:19:"hook_INCLUDE_editor";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:19:"hook_INCLUDE_editor";s:10:"definition";s:30:"function hook_INCLUDE_editor()";s:11:"description";s:32:"Define a Wysiwyg editor library.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"wysiwyg";s:9:"file_path";s:30:"public://hooks/wysiwyg.api.php";s:4:"body";s:3312:"
  $editor['ckeditor'] = array(
    // The official, human-readable label of the editor library.
    'title' => 'CKEditor',
    // The URL to the library's homepage.
    'vendor url' => 'http://ckeditor.com',
    // The URL to the library's download page.
    'download url' => 'http://ckeditor.com/download',
    // A definition of available variants for the editor library.
    // The first defined is used by default.
    'libraries' => array(
      '' => array(
        'title' => 'Default',
        'files' => array(
          'ckeditor.js' => array('preprocess' => FALSE),
        ),
      ),
      'src' => array(
        'title' => 'Source',
        'files' => array(
          'ckeditor_source.js' => array('preprocess' => FALSE),
        ),
      ),
    ),
    // (optional) A callback to invoke to return additional notes for installing
    // the editor library in the administrative list/overview.
    'install note callback' => 'wysiwyg_ckeditor_install_note',
    // A callback to determine the library's version.
    'version callback' => 'wysiwyg_ckeditor_version',
    // A callback to return available themes/skins for the editor library.
    'themes callback' => 'wysiwyg_ckeditor_themes',
    // (optional) A callback to perform editor-specific adjustments or
    // enhancements for the administrative editor profile settings form.
    'settings form callback' => 'wysiwyg_ckeditor_settings_form',
    // (optional) A callback to return an initialization JavaScript snippet for
    // this editor library, loaded before the actual library files. The returned
    // JavaScript is executed as inline script in a primitive environment,
    // before the DOM is loaded; typically used to prime a base path and other
    // global window variables for the editor library before it is loaded.
    // All implementations should verbosely document what they are doing and
    // why that is required.
    'init callback' => 'wysiwyg_ckeditor_init',
    // A callback to convert administrative profile/editor settings into
    // JavaScript settings.
    'settings callback' => 'wysiwyg_ckeditor_settings',
    // A callback to supply definitions of available editor plugins.
    'plugin callback' => 'wysiwyg_ckeditor_plugins',
    // A callback to supply global metadata for a single native external plugin.
    'plugin meta callback' => 'wysiwyg_ckeditor_plugin_meta',
    // A callback to convert administrative plugin settings for an editor
    // profile into JavaScript settings per profile.
    'plugin settings callback' => 'wysiwyg_ckeditor_plugin_settings',
    // (optional) Defines the proxy plugin that handles plugins provided by
    // Drupal modules, which work in all editors that support proxy plugins.
    'proxy plugin' => array(
      'drupal' => array(
        'load' => TRUE,
        'proxy' => TRUE,
      ),
    ),
    // (optional) A callback to convert proxy plugin settings into JavaScript
    // settings.
    'proxy plugin settings callback' => 'wysiwyg_ckeditor_proxy_plugin_settings',
    // Defines the list of supported (minimum) versions of the editor library,
    // and the respective Drupal integration files to load.
    'versions' => array(
      '3.0.0.3665' => array(
        'js files' => array('ckeditor-3.0.js'),
      ),
    ),
  );
  return $editor;
";}s:34:"hook_wysiwyg_editor_settings_alter";a:9:{s:4:"type";s:4:"hook";s:4:"name";s:34:"hook_wysiwyg_editor_settings_alter";s:10:"definition";s:65:"function hook_wysiwyg_editor_settings_alter(&$settings, $context)";s:11:"description";s:31:"Act on editor profile settings.";s:11:"destination";s:14:"%module.module";s:12:"dependencies";a:0:{}s:5:"group";s:7:"wysiwyg";s:9:"file_path";s:30:"public://hooks/wysiwyg.api.php";s:4:"body";s:707:"
  // Each editor has its own collection of native settings that may be extended
  // or overridden. Please consult the respective official vendor documentation
  // for details.
  if ($context['profile']->editor == 'tinymce') {
    // Supported values to JSON data types.
    $settings['cleanup_on_startup'] = TRUE;
    // Function references (callbacks) need special care.
    // @see wysiwyg_wrap_js_callback()
    $settings['file_browser_callback'] = wysiwyg_wrap_js_callback('myFileBrowserCallback');
    // Regular Expressions need special care.
    // @see wysiwyg_wrap_js_regexp()
    $settings['stylesheetParser_skipSelectors'] = wysiwyg_wrap_js_regexp('(^body\.|^caption\.|\.high|^\.)', 'i');
  }
";}}}