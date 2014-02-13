<?php
/**
 * @file
 * acc_policy.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function acc_policy_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'acc_type_of_policy';
  $feeds_importer->config = array(
    'name' => 'Access Type of policy',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name:en',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Parent',
            'target' => 'parent',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'UUID',
            'target' => 'uuid:uuid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'acc_type_of_policy',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['acc_type_of_policy'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_access_policy';
  $feeds_importer->config = array(
    'name' => 'CSV Access Policy',
    'description' => 'Import content for Access Policy content type',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'body:et:en',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Date of issuance',
            'target' => 'field_acc_date_policy:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Issuing actor / agency',
            'target' => 'field_responsible_actors:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Effective dates Start Date',
            'target' => 'field_acc_date_policy:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Effective dates End Date',
            'target' => 'field_incident_date:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Type of policy',
            'target' => 'field_type_of_policy',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Access Constraints',
            'target' => 'field_access_constraints:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Type of affected organization',
            'target' => 'field_organization_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Sectors / Clusters',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Effects on previous policy',
            'target' => 'field_eff_prev_policy:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Best Practice',
            'target' => 'field_best_practice',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Source of information',
            'target' => 'field_source_of_info',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Impacts Type',
            'target' => 'field_acc_impacts:field_acc_impact_type:label',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Impact Value',
            'target' => 'field_acc_impacts:field_acc_impact_value',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Attach a file',
            'target' => 'field_attachments',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'acc_policy',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_access_policy'] = $feeds_importer;

  return $export;
}
