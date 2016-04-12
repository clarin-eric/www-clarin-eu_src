<?php
/**
 * @file
 * openscience_governance.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openscience_governance_taxonomy_default_vocabularies() {
  return array(
    'governance' => array(
      'name' => 'Governance',
      'machine_name' => 'governance',
      'description' => 'Examples: Board, Executive Board, Advisory Panel etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
