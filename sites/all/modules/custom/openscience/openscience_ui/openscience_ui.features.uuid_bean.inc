<?php
/**
 * @file
 * openscience_ui.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function openscience_ui_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Deposit your resources',
    'description' => NULL,
    'title' => 'Deposit your resources',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'deposit-your-resources',
    'view_mode' => 'default',
    'vid' => 43,
    'created' => 1397048822,
    'changed' => 1397661464,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '5a043faf-393e-4c17-9162-4d1c7d16913e',
    'uuid' => '03520ad7-3014-46c1-a177-a01c580001fc',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '[[{"fid":"62911148-cd93-400a-ab55-2ecb53bd4afe","view_mode":"openscience_2_col","fields":{"format":"openscience_2_col","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","attributes":{"height":195,"width":350,"class":"media-element file-openscience-2-col"}}]]<p></p>
<br /><br />

<p>Get in touch with CLARIN about archiving and repository services. <a href="http://www.clarin.eu/content/depositing-services">Read more</a></p>
',
          'format' => 'safe_html',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Search for Language Resources',
    'description' => NULL,
    'title' => 'Search for Language Resources',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'search-for-language-resources',
    'view_mode' => 'default',
    'vid' => 40,
    'created' => 1397047612,
    'changed' => 1397661354,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '82a3c199-4c1c-4bfe-85ab-24a16a85cfec',
    'uuid' => '1b82d011-948f-42de-815f-7677fd7054b5',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '  <form action="http://catalog.clarin.eu/vlo/?2&q="
    onsubmit="location.href=this.action+encodeURIComponent(this.word.value); return false;">
    <label for ="word">Search in the Virtual Language Observatory</label>
    <input type="text" name="word" />
    <input type="submit" value="Search" />
  </form>',
          'format' => 'unfiltered',
          'safe_value' => '  <form action="http://catalog.clarin.eu/vlo/?2&q="
    onsubmit="location.href=this.action+encodeURIComponent(this.word.value); return false;">
    <label for ="word">Search in the Virtual Language Observatory</label>
    <input type="text" name="word" />
    <input type="submit" value="Search" />
  </form>',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Searching multiple corpora',
    'description' => NULL,
    'title' => 'Searching multiple corpora',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'searching-across-multiple-corpor',
    'view_mode' => 'default',
    'vid' => 45,
    'created' => 1397134832,
    'changed' => 1397819225,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'c81c4b1a-47ad-4c2c-8818-c7bb2e596091',
    'uuid' => '1e1fdf61-52c2-447e-82da-0ad9bb654c09',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<form method="post" name="fcsForm" target="_blank" action="http://weblicht.sfs.uni-tuebingen.de/Aggregator-testing/?mode=search">
<fieldset style="border:0px;">
          <label for="query">Search</label>
          <input type="text" name="query" id="query" value="Freiheit" />
          <!--<input type="text" name="x-aggregation-context" value=\'{"http://fedora.clarin-d.uni-saarland.de/sru/":["hdl:11858/00-246C-0000-0008-5F2A-0"]}\' />-->
          <input type="hidden" name="x-aggregation-context" value="" />
          <input type="hidden" name="operation" value="searchRetrieve" />
          <input type="hidden" name="version" value="1.2" />
          <input type="submit" value="Submit">
</fieldset>
</form>',
          'format' => 'unfiltered',
          'safe_value' => '<form method="post" name="fcsForm" target="_blank" action="http://weblicht.sfs.uni-tuebingen.de/Aggregator-testing/?mode=search">
<fieldset style="border:0px;">
          <label for="query">Search</label>
          <input type="text" name="query" id="query" value="Freiheit" />
          <!--<input type="text" name="x-aggregation-context" value=\'{"http://fedora.clarin-d.uni-saarland.de/sru/":["hdl:11858/00-246C-0000-0008-5F2A-0"]}\' />-->
          <input type="hidden" name="x-aggregation-context" value="" />
          <input type="hidden" name="operation" value="searchRetrieve" />
          <input type="hidden" name="version" value="1.2" />
          <input type="submit" value="Submit">
</fieldset>
</form>',
        ),
      ),
    ),
  );
  return $beans;
}
