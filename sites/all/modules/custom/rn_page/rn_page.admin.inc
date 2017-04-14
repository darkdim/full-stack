<?php
/**
 * @file
 * Admin page callback file for the rn_page module.
 */

/**
 * Page callback: Generates user list table.
 *
 * @return string
 *   Display results in a table.
 */
function rn_page_user_list() {

  $header = array(
    'id' => array('data' => t('Id'), 'field' => 'u.uid'),
    'username' => array('data' => t('Username'), 'field' => 'u.name'),
    'operations' => array('data' => t('Operations')),
  );

  $query = db_select('users', 'u');
  $query->condition('u.uid', 0, '<>');
  user_build_filter_query($query);

  $count_query = clone $query;
  $count_query->addExpression('COUNT(u.uid)');

  $query = $query->extend('PagerDefault')->extend('TableSort');
  $query
    ->fields('u', array('uid', 'name'))
    ->limit(50)
    ->orderByHeader($header)
    ->setCountQuery($count_query);
  $result = $query->execute();

  $options = array();
  $destination = drupal_get_destination();
  foreach ($result as $account) {
    $options[$account->uid] = array(
      'uid' => $account->uid,
      'username' => theme('username', array('account' => $account)),
      'operations' => array('data' => array('#type' => 'link', '#title' => t('edit'), '#href' => "user/$account->uid/edit", '#options' => array('query' => $destination))),
    );
  }

  $output = '';
  $output .= theme('table', array('header' => $header, 'rows' => $options, 'empty' => t('No people available.')));
  $output .= theme('pager');

  return $output;
}
