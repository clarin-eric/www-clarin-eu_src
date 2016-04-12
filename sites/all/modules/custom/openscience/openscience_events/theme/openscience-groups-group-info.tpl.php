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
<?php print $image . $body; ?>