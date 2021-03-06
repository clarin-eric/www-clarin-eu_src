<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu_links (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu_links (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['peripheral_first']: Items for the first peripheral.
 * - $page['peripheral_second']: Items for the second peripheral.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
  <?php print render($page['up_top']); ?>

  <div id="page" class="mast container">

    <header role="banner" class="masthead clearfix">
      <?php print render($page['header']); ?>
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo block">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>
      <?php if ($site_name): ?>
        <h1 class="block site-name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
        </h1>
      <?php endif; ?>
      <?php if ($site_slogan): ?>
        <h2 class="block site-slogan"><?php print $site_slogan; ?></h2>
      <?php endif; ?>
    </header>

    <?php print render($page['featured']); ?>

    <?php print render($page['preblocks']); ?>

    <?php if ($breadcrumb): ?>
      <nav class="block breadcrumb"><?php print $breadcrumb; ?></nav>
    <?php endif; ?>

    <?php print $messages; ?>

    <div class="wrap-columns clearfix">

      <?php print render($page['peripheral_first']); ?>

      <div class="content-column">
        <div role="main" class="main">
          <?php print render($page['highlighted']); ?>
          <a class="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?><h1 class="title block-title"><?php print $title; ?></h1><?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if ($tabs = render($tabs)): ?><div class="tabs block clearfix"><?php print $tabs; ?></div><?php endif; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links = render($action_links)): ?><ul class="action-links block"><?php print $action_links; ?></ul><?php endif; ?>
          <?php print render($page['content_top']); ?>
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
          <?php print render($page['content_bottom']); ?>
        </div> <!-- end .main -->
      </div> <!-- end .content-column -->
      <?php print render($page['peripheral_second']); ?>

    </div> <!-- end .wrap-columns -->

    <?php print render($page['postblocks']); ?>

    <?php print render($page['footer']); ?>
    <footer class="footer">
    <p>
    CLARIN members:
    <a href="http://at.clarin.eu/">Austria</a>
    &#8226; Bulgaria
    &#8226; <a href="http://www.lindat.cz/">Czech Republic</a>
    &#8226; <a href="http://info.clarin.dk/">Denmark</a>
    &#8226; <a href="http://taalunie.org/wat-doet-taalunie/activiteiten/clarin">Dutch Language Union</a>
    &#8226; <a href="http://keeleressursid.ee/">Estonia</a>
    &#8226; <a href="http://fi.clarin.eu/">Finland</a> 
    &#8226; <a href="http://www.clarin-d.de/">Germany</a>
    &#8226; <a href="http://www.clarin.gr/">Greece</a>
    &#8226; <a href="http://www.clarin-it.it/">Italy</a>
    &#8226; Latvia
    &#8226; <a href="http://www.clarin-lt.lt/">Lithuania</a>
    &#8226; <a href="http://www.clarin.nl/">Netherlands</a>
    &#8226; <a href="http://clarin.b.uib.no/">Norway</a>
    &#8226; <a href="http://www.clarin-pl.eu/">Poland</a>
    &#8226; Portugal
    &#8226; <a href="http://www.clarin.si/">Slovenia</a>
    &#8226; <a href="http://sweclarin.se/">Sweden</a>
    &#8226; <a href="http://www.clarin.ac.uk/">United Kingdom</a>
    <br /><br />
    </p>
    <p>
      <img class="thumbnail" style="margin-right: 10px; float: left;" src="/sites/default/files/flag-eu.png"> CLARIN-PLUS receives funding from the European Union's Horizon 2020 research and innovation programme under grant agreement no. 676529.<br />
      Your use of the CLARIN ERIC site is subject to the <a href="http://creativecommons.org/licenses/by/2.0/">CC-BY</a> and our <a href="http://www.clarin.eu/node/3760">terms of use</a>.</p>
      <p class="footer-menu"><a href="/contact">contact</a></p>
    </footer>

  </div> <!-- end #PAGE -->
