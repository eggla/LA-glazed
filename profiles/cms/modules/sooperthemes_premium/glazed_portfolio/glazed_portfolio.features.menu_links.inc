<?php
/**
 * @file
 * glazed_portfolio.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function glazed_portfolio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_glazed-filter-no-spacing:portfolio/filter1
  $menu_links['main-menu_glazed-filter-no-spacing:portfolio/filter1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio/filter1',
    'router_path' => 'portfolio/filter1',
    'link_title' => 'Glazed Filter No Spacing',
    'options' => array(
      'identifier' => 'main-menu_glazed-filter-no-spacing:portfolio/filter1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_glazed-filter-with-spacing:portfolio/filter2
  $menu_links['main-menu_glazed-filter-with-spacing:portfolio/filter2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio/filter2',
    'router_path' => 'portfolio/filter2',
    'link_title' => 'Glazed Filter With Spacing',
    'options' => array(
      'identifier' => 'main-menu_glazed-filter-with-spacing:portfolio/filter2',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_glazed-full-screen-modal-portfolio:portfolio/modal2
  $menu_links['main-menu_glazed-full-screen-modal-portfolio:portfolio/modal2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio/modal2',
    'router_path' => 'portfolio/modal2',
    'link_title' => 'Glazed Full Screen Modal Portfolio',
    'options' => array(
      'identifier' => 'main-menu_glazed-full-screen-modal-portfolio:portfolio/modal2',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_glazed-inline-modal-portfolio:portfolio/modal1
  $menu_links['main-menu_glazed-inline-modal-portfolio:portfolio/modal1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio/modal1',
    'router_path' => 'portfolio/modal1',
    'link_title' => 'Glazed Inline Modal Portfolio',
    'options' => array(
      'identifier' => 'main-menu_glazed-inline-modal-portfolio:portfolio/modal1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_glazed-lightbox-portfolio:portfolio/lightbox
  $menu_links['main-menu_glazed-lightbox-portfolio:portfolio/lightbox'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio/lightbox',
    'router_path' => 'portfolio/lightbox',
    'link_title' => 'Glazed Lightbox Portfolio',
    'options' => array(
      'identifier' => 'main-menu_glazed-lightbox-portfolio:portfolio/lightbox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Glazed Filter No Spacing');
  t('Glazed Filter With Spacing');
  t('Glazed Full Screen Modal Portfolio');
  t('Glazed Inline Modal Portfolio');
  t('Glazed Lightbox Portfolio');

  return $menu_links;
}
