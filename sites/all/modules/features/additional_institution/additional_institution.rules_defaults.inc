<?php
/**
 * @file
 * additional_institution.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function additional_institution_default_rules_configuration() {
  $items = array();
  $items['rules_add_institution'] = entity_import('rules_config', '{ "rules_add_institution" : {
      "LABEL" : "add institution",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "section 108" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_additional_institution" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-node" ],
            "type" : "node",
            "bundle" : { "value" : { "record" : "record" } }
          }
        }
      ],
      "DO" : [
        { "list_add" : {
            "list" : [ "flagged-node:field-institution" ],
            "item" : [ "flagging-user:field-institution:0" ],
            "unique" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_remove_institution'] = entity_import('rules_config', '{ "rules_remove_institution" : {
      "LABEL" : "remove institution",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "section 108" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_unflagged_additional_institution" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-node" ],
            "type" : "node",
            "bundle" : { "value" : { "record" : "record" } }
          }
        }
      ],
      "DO" : [
        { "list_remove" : {
            "list" : [ "flagged-node:field-institution" ],
            "item" : [ "flagging-user:field-institution:0" ]
          }
        }
      ]
    }
  }');
  $items['rules_set_institution'] = entity_import('rules_config', '{ "rules_set_institution" : {
      "LABEL" : "set institution",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "section 108" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--record" : { "bundle" : "record" } },
      "DO" : [
        { "list_add" : {
            "list" : [ "node:field-institution" ],
            "item" : [ "node:author:field-institution:0" ],
            "unique" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
