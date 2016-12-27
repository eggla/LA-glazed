<?php
/**
 * @file
 * glazed_content_page_examples.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function glazed_content_page_examples_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-me:uuid/node/09c313be-63ee-4325-a474-12ea5c8792db.
  $menu_links['main-menu_about-me:uuid/node/09c313be-63ee-4325-a474-12ea5c8792db'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/09c313be-63ee-4325-a474-12ea5c8792db',
    'router_path' => 'uuid',
    'link_title' => 'About Me',
    'options' => array(
      'identifier' => 'main-menu_about-me:uuid/node/09c313be-63ee-4325-a474-12ea5c8792db',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '09c313be-63ee-4325-a474-12ea5c8792db',
    'vuuid' => '93ac3a26-b626-4fa9-b5db-7af6116dd121',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_about-us-timeline:uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495.
  $menu_links['main-menu_about-us-timeline:uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495',
    'router_path' => 'uuid',
    'link_title' => 'About Us Timeline',
    'options' => array(
      'identifier' => 'main-menu_about-us-timeline:uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'fefb9dcc-281b-4544-b7e0-4dfaa4ebf495',
    'vuuid' => 'd32e5c96-c23d-488d-88f4-9f2ee6f79cfd',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_about-us:uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776.
  $menu_links['main-menu_about-us:uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776',
    'router_path' => 'uuid',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '984cfc78-e4cc-4262-9452-20b267bd3776',
    'vuuid' => 'c3820685-7abe-46c3-8683-abc7583cfd2d',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_faq:uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f.
  $menu_links['main-menu_faq:uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f',
    'router_path' => 'uuid',
    'link_title' => 'FAQ',
    'options' => array(
      'identifier' => 'main-menu_faq:uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '973e2a11-c838-4666-a29c-49487ee8c79f',
    'vuuid' => '40cae49a-1ede-454e-982a-1614ef4c4c66',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e.
  $menu_links['main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
    'router_path' => 'uuid',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 0,
    'uuid' => '5810252c-ebbb-42e3-9523-fbedc419dc4e',
    'vuuid' => '41cfd93c-30a6-4646-866b-f9a43354dc94',
  );
  // Exported menu link: main-menu_pricing-page:uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2.
  $menu_links['main-menu_pricing-page:uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2',
    'router_path' => 'uuid',
    'link_title' => 'Pricing Page',
    'options' => array(
      'identifier' => 'main-menu_pricing-page:uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'e9a73a03-7034-42a9-8a77-5ff90c98a0d2',
    'vuuid' => '2a332b39-2fc5-411f-9a16-02322607855d',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_registration-landing-1:uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0.
  $menu_links['main-menu_registration-landing-1:uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0',
    'router_path' => 'uuid',
    'link_title' => 'Registration Landing 1',
    'options' => array(
      'identifier' => 'main-menu_registration-landing-1:uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '73824210-432e-4f4d-b0e8-4cc1866bb6b0',
    'vuuid' => '5db35186-e5cd-4382-89c1-4832d8ac6251',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_registration-landing-2:uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33.
  $menu_links['main-menu_registration-landing-2:uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33',
    'router_path' => 'uuid',
    'link_title' => 'Registration Landing 2',
    'options' => array(
      'identifier' => 'main-menu_registration-landing-2:uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'f33609ac-acba-4168-ba00-0f56d82e8b33',
    'vuuid' => '323485aa-0f15-4357-8b06-b16b343e3d78',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_restaurant-menu-page:uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba.
  $menu_links['main-menu_restaurant-menu-page:uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba',
    'router_path' => 'uuid',
    'link_title' => 'Restaurant Menu Page',
    'options' => array(
      'identifier' => 'main-menu_restaurant-menu-page:uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '9ddaf86c-5040-4a76-986a-cd6621deacba',
    'vuuid' => '734cdd78-d023-4e6a-9d52-b64413d2d9e7',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_services-page:uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814.
  $menu_links['main-menu_services-page:uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814',
    'router_path' => 'uuid',
    'link_title' => 'Services Page',
    'options' => array(
      'identifier' => 'main-menu_services-page:uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'e31a7eb7-7117-45c3-ad3f-91f8c6589814',
    'vuuid' => '9400a725-de59-41f1-9a19-e3466ec062e6',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );
  // Exported menu link: main-menu_team-page:uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308.
  $menu_links['main-menu_team-page:uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308',
    'router_path' => 'uuid',
    'link_title' => 'Team Page',
    'options' => array(
      'identifier' => 'main-menu_team-page:uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'ef10c794-ab7b-4983-9c72-c59899b4a308',
    'vuuid' => '0bad7240-30cb-48f5-a4c7-64da7ee30dde',
    'parent_identifier' => 'main-menu_pages:uuid/node/5810252c-ebbb-42e3-9523-fbedc419dc4e',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('About Us');
  t('About Us Timeline');
  t('FAQ');
  t('Pages');
  t('Pricing Page');
  t('Registration Landing 1');
  t('Registration Landing 2');
  t('Restaurant Menu Page');
  t('Services Page');
  t('Team Page');

  return $menu_links;
}
