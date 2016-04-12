<?php
/**
 * @file openscience-groups-group-comp.tpl.php
 * OpenScience group composition template
 *
 * Variables available:
 * - $periods: An array of ISO date formatted period links
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($periods)): ?>
  <nav class="foldout">
    <h3>Select Period</h3>
    <ul>
    <?php foreach($periods as $period): ?>
      <li><?php print $period; ?></li>
    <?php endforeach; ?>
    </ul>
  </nav>
<?php endif; ?>