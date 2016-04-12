<?php
/**
 * @file
 * clarin_eric_config.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function clarin_eric_config_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'CLARIN-ERIC tweets',
    'description' => NULL,
    'title' => '@Twitter',
    'type' => 'twitter_pull',
    'data' => array(
      'settings' => array(
        'twitkey' => '#clarineric OR from:CLARINERIC -filter:retweets',
        'num_items' => 4,
      ),
    ),
    'delta' => 'clarin-tweets',
    'view_mode' => 'default',
    'created' => 1358178825,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '1608a88e-b079-41e8-86e4-031edbd6e000',
    'uuid' => 'a13892d9-cb84-4d33-ae5f-ead25450ee4a',
    'settings' => array(
      'twitkey' => '#clarineric OR from:CLARINERIC -filter:retweets',
      'num_items' => 4,
    ),
    'user_uuid' => '9007f4df-8c6a-4f41-8cdf-2cbee3427248',
  );
  return $beans;
}
