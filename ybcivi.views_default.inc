<?php 
/**
 * Implementation of hook_views_default_views().
 */
function ybcivi_views_default_views() {
  /*
   * View 'site_staff'
   */
  $view = new view;
  $view->name = 'site_staff';
  $view->description = 'YouthBuidl USA Site Staff';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'civicrm_relationship';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'contact_id_a' => array(
      'label' => 'Contact',
      'required' => 0,
      'id' => 'contact_id_a',
      'table' => 'civicrm_relationship',
      'field' => 'contact_id_a',
      'relationship' => 'none',
    ),
    'contact_id_b' => array(
      'label' => 'Site',
      'required' => 0,
      'id' => 'contact_id_b',
      'table' => 'civicrm_relationship',
      'field' => 'contact_id_b',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'display_name_1' => array(
      'label' => 'Contact Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_civicrm_contact' => 1,
      'exclude' => 0,
      'id' => 'display_name_1',
      'table' => 'civicrm_contact',
      'field' => 'display_name',
      'relationship' => 'contact_id_a',
    ),
    'phone' => array(
      'label' => 'Phone Number',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'phone',
      'table' => 'civicrm_phone',
      'field' => 'phone',
      'relationship' => 'contact_id_a',
    ),
    'email' => array(
      'label' => 'Email Address',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 'mailto',
      'exclude' => 0,
      'id' => 'email',
      'table' => 'civicrm_email',
      'field' => 'email',
      'relationship' => 'contact_id_a',
    ),
    'start_date' => array(
      'label' => 'Start Date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'start_date',
      'table' => 'civicrm_relationship',
      'field' => 'start_date',
      'relationship' => 'none',
    ),
    'relationship_roles_47' => array(
      'id' => 'relationship_roles_47',
      'table' => 'civicrm_value_relationship_details_11',
      'field' => 'relationship_roles_47',
      'exclude' => 0,
      'relationship' => 'none',
      'label' => 'Roles',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'empty_zero' => 0,
      'hide_empty' => 1,
    ),
  ));
  $handler->override_option('arguments', array(
    'contact_id_b' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'id' => 'contact_id_b',
      'table' => 'civicrm_relationship',
      'field' => 'contact_id_b',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '4' => 0,
        '6' => 0,
        '3' => 0,
        '9' => 0,
        '7' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'product' => 0,
        'image_content' => 0,
        'basic_page' => 0,
        'extranet_content' => 0,
        'graduate_page' => 0,
        'graduate_stories' => 0,
        'job' => 0,
        'kb_item' => 0,
        'news' => 0,
        'page' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '5' => 0,
        '3' => 0,
        '1' => 0,
        '2' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'relationship_type' => array(
      'operator' => 'in',
      'value' => array(
        '17' => '17',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'relationship_type',
      'table' => 'civicrm_relationship',
      'field' => 'relationship_type',
      'relationship' => 'none',
    ),
    'is_active' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_active',
      'table' => 'civicrm_relationship',
      'field' => 'is_active',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '7' => 7,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'display_name_1' => 'display_name_1',
      'start_date' => 'start_date',
      'relationship_roles_47' => 'relationship_roles_47',
      'display_name' => 'display_name',
    ),
    'info' => array(
      'display_name_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'start_date' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'relationship_roles_47' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'display_name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'site-staff');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $views[$view->name] = $view;

  return $views;
}



