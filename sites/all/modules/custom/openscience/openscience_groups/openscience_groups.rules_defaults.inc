<?php
/**
 * @file
 * openscience_groups.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openscience_groups_default_rules_configuration() {
  $items = array();
  $items['rules_openscience_group_updates_cache'] = entity_import('rules_config', '{ "rules_openscience_group_updates_cache" : {
      "LABEL" : "OpenScience Group Updates: Clear Caches",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience groups" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_delete", "node_update", "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "group" : "group",
                "discussion" : "discussion",
                "group_files" : "group_files",
                "group_page" : "group_page"
              }
            }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "openscience_group_updates" : "openscience_group_updates" } } } }
      ]
    }
  }');
  $items['rules_openscience_group_visibility'] = entity_import('rules_config', '{ "rules_openscience_group_visibility" : {
      "LABEL" : "OpenScience Group Visibility: make public",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_openscience_group_visibility" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "group_access" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:group-access" ], "value" : 0 } }
      ]
    }
  }');
  $items['rules_openscience_group_visibility_neg'] = entity_import('rules_config', '{ "rules_openscience_group_visibility_neg" : {
      "LABEL" : "OpenScience Group Visibility: make private",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "openscience groups" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_openscience_group_visibility" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "group_access" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:group-access" ], "value" : 1 } }
      ]
    }
  }');
  return $items;
}
