<?php
/**
 * @file
 * openscience_ui.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openscience_ui_default_rules_configuration() {
  $items = array();
  $items['rules_openscience_featured_unflag'] = entity_import('rules_config', '{ "rules_openscience_featured_unflag" : {
      "LABEL" : "OpenScience Featured unFlag",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience" ],
      "REQUIRES" : [ "rules", "cache_actions", "flag" ],
      "ON" : [ "flag_unflagged_openscience_featured" ],
      "DO" : [
        { "node_unpromote" : { "node" : [ "flagged-node" ] } },
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache_page", "cid" : "http:\\/\\/clarin.eu\\/", "wildcard" : 0 } },
        { "cache_actions_action_clear_cache_cid" : {
            "bin" : "cache_page",
            "cid" : "http:\\/\\/www.clarin.eu\\/",
            "wildcard" : 0
          }
        },
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache_page", "cid" : "https:\\/\\/clarin.eu\\/", "wildcard" : 0 } },
        { "cache_actions_action_clear_cache_cid" : {
            "bin" : "cache_page",
            "cid" : "https:\\/\\/www.clarin.eu\\/",
            "wildcard" : 0
          }
        }
      ]
    }
  }');
  $items['rules_openscience_pinned_flag'] = entity_import('rules_config', '{ "rules_openscience_pinned_flag" : {
      "LABEL" : "OpenScience Pinned Flag",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_openscience_sticky" ],
      "DO" : [ { "node_make_sticky" : { "node" : [ "flagged-node" ] } } ]
    }
  }');
  $items['rules_openscience_unpinned_flag'] = entity_import('rules_config', '{ "rules_openscience_unpinned_flag" : {
      "LABEL" : "OpenScience Unpinned Flag",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_openscience_sticky" ],
      "DO" : [ { "node_make_unsticky" : { "node" : [ "flagged-node" ] } } ]
    }
  }');
  return $items;
}
