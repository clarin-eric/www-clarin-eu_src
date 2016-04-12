<?php

// put theme functions here

function clarin_eu_preprocess_node(&$vars) {
  if ($vars['page']) {
    $vars['submitted_full'] = '<h4>' . $vars['name'] . '</h4><span class="date">' . $vars['date'] . '</span>';
    $vars['classes_array'][] = 'node-full';
  }
  if ($vars['display_submitted']) {
    $vars['classes_array'][] = 'display-submitted';
  }
}