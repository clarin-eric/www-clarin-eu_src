<?php
/**
 * @file
 * openscience.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openscience_default_rules_configuration() {
  $items = array();
  $items['rules_openscience_featured_flag'] = entity_import('rules_config', '{ "rules_openscience_featured_flag" : {
      "LABEL" : "OpenScience Featured Flag",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience" ],
      "REQUIRES" : [ "rules", "cache_actions", "flag" ],
      "ON" : [ "flag_flagged_openscience_featured" ],
      "DO" : [
        { "node_promote" : { "node" : [ "flagged-node" ] } },
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache_page", "cid" : "http:\\/\\/clarin.eu\\/", "wildcard" : 0 } },
        { "cache_actions_action_clear_cache_cid" : {
            "bin" : "cache_page",
            "cid" : "http:\\/\\/www.clarin.eu\\/",
            "wildcard" : 0
          }
        },
        { "cache_actions_action_clear_cache_cid" : {
            "bin" : "cache_page",
            "cid" : "https:\\/\\/www.clarin.eu\\/",
            "wildcard" : 0
          }
        },
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache_page", "cid" : "https:\\/\\/clarin.eu\\/", "wildcard" : 0 } }
      ]
    }
  }');
  return $items;
}
