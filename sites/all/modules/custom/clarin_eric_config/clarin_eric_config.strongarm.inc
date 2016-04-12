<?php
/**
 * @file
 * clarin_eric_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function clarin_eric_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_account';
  $strongarm->value = 'UA-29093428-2';
  $export['googleanalytics_account'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_privacy_donottrack';
  $strongarm->value = 0;
  $export['googleanalytics_privacy_donottrack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    4 => 0,
  );
  $export['googleanalytics_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_conf';
  $strongarm->value = array(
    'sids' => array(
      'ems04' => 'ems04',
    ),
    'authenticationMode' => 2,
    'loginUIUsernameTxt' => 'Enter your email address as registered at http://user.clarin.eu',
    'loginUIPasswordTxt' => 'Enter your password. The password can be changed at http://user.clarin.eu',
    'ldapUserHelpLinkUrl' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'emailOption' => 3,
    'emailUpdate' => 1,
    'passwordOption' => 2,
    'allowOnlyIfTextInDn' => array(),
    'excludeIfTextInDn' => array(),
    'allowTestPhp' => '',
    'excludeIfNoAuthorizations' => NULL,
    'ssoRemoteUserStripDomainName' => NULL,
    'ssoExcludedPaths' => array(),
    'ssoExcludedHosts' => array(),
    'seamlessLogin' => NULL,
    'ssoNotifyAuthentication' => NULL,
    'ldapImplementation' => NULL,
    'cookieExpire' => NULL,
    'emailTemplate' => '@username@fake-domain.com',
    'emailTemplateHandling' => 3,
    'templateUsagePromptUser' => 0,
    'templateUsageNeverUpdate' => 0,
    'templateUsageResolveConflict' => 0,
    'templateUsagePromptRegex' => '.*@fake-domain\\.com',
    'templateUsageRedirectOnLogin' => 0,
  );
  $export['ldap_authentication_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_help_user_data_clear';
  $strongarm->value = 1;
  $export['ldap_help_user_data_clear'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_help_watchdog_detail';
  $strongarm->value = 0;
  $export['ldap_help_watchdog_detail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encryption';
  $strongarm->value = '10';
  $export['ldap_servers_encryption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_require_ssl_for_credentails';
  $strongarm->value = 0;
  $export['ldap_servers_require_ssl_for_credentails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_user_conf';
  $strongarm->value = array(
    'drupalAcctProvisionServer' => 'ems04',
    'ldapEntryProvisionServer' => 0,
    'drupalAcctProvisionTriggers' => array(
      2 => '2',
      1 => '1',
    ),
    'ldapEntryProvisionTriggers' => array(
      6 => 0,
      7 => 0,
      8 => 0,
      3 => 0,
    ),
    'orphanedDrupalAcctBehavior' => 'ldap_user_orphan_email',
    'orphanedCheckQty' => '100',
    'userConflictResolve' => 2,
    'manualAccountConflict' => '3',
    'acctCreation' => 4,
    'ldapUserSynchMappings' => array(
      1 => array(
        '[field.field_display_name]' => array(
          'ldap_attr' => '[cn]',
          'user_attr' => '[field.field_display_name]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
      ),
    ),
    'disableAdminPasswordField' => 0,
  );
  $export['ldap_user_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'document',
  );
  $export['media_wysiwyg_wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_upload_directory';
  $strongarm->value = '';
  $export['media_wysiwyg_wysiwyg_upload_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_private_key';
  $strongarm->value = 'bd1c8bc98d42cfbb9a288faa4c62748a';
  $export['mollom_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_public_key';
  $strongarm->value = '9461fb1db24a1ff50124ccdd42aaae8d';
  $export['mollom_public_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_links';
  $strongarm->value = FALSE;
  $export['nodequeue_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_default_status_code';
  $strongarm->value = '301';
  $export['redirect_default_status_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_admin_paths';
  $strongarm->value = 0;
  $export['redirect_global_admin_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_canonical';
  $strongarm->value = 1;
  $export['redirect_global_canonical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_clean';
  $strongarm->value = 1;
  $export['redirect_global_clean'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_deslash';
  $strongarm->value = 0;
  $export['redirect_global_deslash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_home';
  $strongarm->value = 1;
  $export['redirect_global_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_page_cache';
  $strongarm->value = 0;
  $export['redirect_page_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_passthrough_querystring';
  $strongarm->value = 1;
  $export['redirect_passthrough_querystring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_purge_inactive';
  $strongarm->value = '0';
  $export['redirect_purge_inactive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_warning';
  $strongarm->value = FALSE;
  $export['redirect_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'thorsten.trippel@uni-tuebingen.de';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'CLARIN ERIC';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_clarin_eu_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://clarin-logo.png',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon_0.ico',
    'favicon_upload' => '',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_clarin_eu_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'clarin_eu';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_consumer_key';
  $strongarm->value = '5Y3bbMSYoDx4m0MRuusRQ';
  $export['twitter_pull_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_consumer_secret';
  $strongarm->value = 'PN1qmYhZgxZMqEesPRFyyrqgSfDHxby2u9IsIqBuYA';
  $export['twitter_pull_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_oauth_access_token';
  $strongarm->value = '309596055-cSq1kTt7L0GgZJdScep2WmuqwUumoeiROwU8WH1H';
  $export['twitter_pull_oauth_access_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_oauth_access_token_secret';
  $strongarm->value = 'TOuG86zYqJEuqgDDkBXYuFAy36P9Th1xAkrJm34';
  $export['twitter_pull_oauth_access_token_secret'] = $strongarm;

  return $export;
}
