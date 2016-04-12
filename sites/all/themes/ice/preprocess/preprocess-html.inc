<?php

$vars['classes_array'] = array_diff($vars['classes_array'], array('no-sidebars'));
if (!empty($vars['page']['sidebar_first']) && !empty($vars['page']['sidebar_second'])) {
  $vars['classes_array'][] = 'two-peripherals';
}
elseif (!empty($vars['page']['peripheral_first'])) {
  $vars['classes_array'][] = 'one-peripheral peripheral-first';
}
elseif (!empty($vars['page']['peripheral_second'])) {
  $vars['classes_array'][] = 'one-peripheral peripheral-second';
}