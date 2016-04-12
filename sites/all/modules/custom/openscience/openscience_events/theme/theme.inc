<?php
/**
 * @file
 * Theme functions for OG Extras.
 */
/**
 * Create variables for the group statistics block.
 */
function openscience_events_preprocess_openscience_events_date_widget(&$variables) {

  $variables['periods'] = array();

  $query = "SELECT DISTINCT DATE_FORMAT(field_date_value, '%Y')
              FROM `field_data_field_date`
              WHERE field_data_field_date.bundle = 'event'
              ORDER BY field_date_value";
  $result = db_query($query)->fetchCol();
  $variables['periods'][] =  l("In the future", arg(0) . "/P50Y");
  foreach ($result as $period) {
    if ($period) {
      $variables['periods'][] =  l($period, arg(0) . "/" . $period);
    }
  }
}