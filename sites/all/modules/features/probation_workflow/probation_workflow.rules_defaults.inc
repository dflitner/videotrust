<?php
/**
 * @file
 * probation_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function probation_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_assign_probation'] = entity_import('rules_config', '{ "rules_assign_probation" : {
      "LABEL" : "Assign probation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "section 108" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "5" : "5", "4" : "4" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_publish_authorized_records'] = entity_import('rules_config', '{ "rules_publish_authorized_records" : {
      "LABEL" : "Publish authorized records",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "section 108" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "3" : "3", "5" : "5", "4" : "4" } },
            "operation" : "OR"
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "additional_search" : "additional_search",
                "amazon_search" : "amazon_search",
                "distributor_search" : "distributor_search",
                "record" : "record",
                "web_search" : "web_search",
                "worldcat_search" : "worldcat_search"
              }
            }
          }
        }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
