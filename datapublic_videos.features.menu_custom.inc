<?php
/**
 * @file
 * datapublic_videos.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function datapublic_videos_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-main-menu-mobile-
  $menus['menu-main-menu-mobile-'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'title' => 'Main Menu (mobile)',
    'description' => 'Main Menu for mobile devices',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main Menu (mobile)');
  t('Main Menu for mobile devices');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
