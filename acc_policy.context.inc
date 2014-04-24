<?php
/**
 * @file
 * acc_policy.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_policy_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_policies';
  $context->description = '';
  $context->tag = 'Access Policies';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_policies:list' => 'acc_policies:list',
        'acc_policies:master' => 'acc_policies:master',
        'acc_policies:table' => 'acc_policies:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-INaJU6uAncUh8yWv6oYWEmoiPOmpt0fZ' => array(
          'module' => 'facetapi',
          'delta' => 'INaJU6uAncUh8yWv6oYWEmoiPOmpt0fZ',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-9VmM0bcMLZTVUkP3bNyZV7UcUGaHx7dy' => array(
          'module' => 'facetapi',
          'delta' => '9VmM0bcMLZTVUkP3bNyZV7UcUGaHx7dy',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-ljdWdDK0IexlCjtbQv7v80ID171ZyvtP' => array(
          'module' => 'facetapi',
          'delta' => 'ljdWdDK0IexlCjtbQv7v80ID171ZyvtP',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'facetapi-SPTN7AGe5Y3Aq8I6kGYP42OtkynIgJVZ' => array(
          'module' => 'facetapi',
          'delta' => 'SPTN7AGe5Y3Aq8I6kGYP42OtkynIgJVZ',
          'region' => 'sidebar_first',
          'weight' => '4',
        ),
        'facetapi-8zaTB1mcVgqvaHRK0HyO1BcIqT0lgkve' => array(
          'module' => 'facetapi',
          'delta' => '8zaTB1mcVgqvaHRK0HyO1BcIqT0lgkve',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'facetapi-eSrGaer4qs0VIC0GpXanipJPCvg18lhK' => array(
          'module' => 'facetapi',
          'delta' => 'eSrGaer4qs0VIC0GpXanipJPCvg18lhK',
          'region' => 'sidebar_first',
          'weight' => '6',
        ),
        'facetapi-jh5k4na5vwQpnJPDnwrrDwhl62nZGasK' => array(
          'module' => 'facetapi',
          'delta' => 'jh5k4na5vwQpnJPDnwrrDwhl62nZGasK',
          'region' => 'sidebar_first',
          'weight' => '7',
        ),
        'facetapi-puxqAstz92kfhvpdFN8N4IUr4m2AdRIG' => array(
          'module' => 'facetapi',
          'delta' => 'puxqAstz92kfhvpdFN8N4IUr4m2AdRIG',
          'region' => 'sidebar_first',
          'weight' => '8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Policies');
  $export['acc_policies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_policies_list';
  $context->description = '';
  $context->tag = 'Access Policies';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_policies:list' => 'acc_policies:list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-acc_policies-list' => array(
          'module' => 'views',
          'delta' => '-exp-acc_policies-list',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Policies');
  $export['acc_policies_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_policies_table';
  $context->description = '';
  $context->tag = 'Access Policies';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'acc_policies:master' => 'acc_policies:master',
        'acc_policies:table' => 'acc_policies:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-acc_policies-table' => array(
          'module' => 'views',
          'delta' => '-exp-acc_policies-table',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Policies');
  $export['acc_policies_table'] = $context;

  return $export;
}
