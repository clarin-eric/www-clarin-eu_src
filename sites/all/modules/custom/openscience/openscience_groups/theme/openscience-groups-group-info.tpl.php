<?php
/**
 * @file openscience-groups-group-info.tpl.php
 * OpenScience group info template
 *
 * Variables available:
 * - $gid: group id.
 * - $group_node: group node.
 * - $body: formatted body field of the group node.
 * - $image: formatted image field of the group node.
 *
 * @ingroup views_templates
 */
?>
<script>jQuery(document).ready(function(){jQuery(".colorbox-inline").colorbox({inline:true, width:"50%"});});</script>
<?php print $image . $teaser; ?>

<div class="more-link"><a href="#group-desc-full-hidden" class="colorbox-inline">Read more</a></div>

<div class="element-hidden wrap-full-description">
  <div class="full-description" id="group-desc-full-hidden">
    <?php print $full_description; ?>
  </div>
</div>