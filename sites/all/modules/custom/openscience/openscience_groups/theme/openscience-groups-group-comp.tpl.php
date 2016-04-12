<?php
/**
 * @file openscience-groups-group-comp.tpl.php
 * OpenScience group composition template
 *
 * Variables available:
 * - $gid: group id.
 * - $group_node: group node.
 * - $owner_uid: uid of group owner.
 * - $owner_link: formatted link to group owner.
 * - $member_uids: array of uids of group members.
 * - $members: array of formatted links to the group members.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($gid)): ?>
  <div class="group-owner">
    <?php print $owner_link; ?>
    <h4><?php print t('Group owner'); ?></h4>
  </div>
  <h3><?php print t('Group members'); ?></h3>
  <ul>
  <?php foreach ($members as $member_link): ?>
    <li><?php print $member_link; ?></li>
  <?php endforeach; ?>
</ul>
</ul>
<?php endif; ?>