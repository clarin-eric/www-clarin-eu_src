// Document ready functions
(function ($) {
    jQuery(document).ready(function() {
      jQuery('#block-system-main-menu > .menu, #block-menu-menu-secondary-menu > .menu').sooperfish({
        speedShow: 100,
        speedHide: 100,
        autoArrows: false,
        dualColumn: 12,
        tripleColumn: 24
      });

      if (($('.view-display-id-portal_showcase').length > 0) || ($('.view-display-id-featured_lrt').length > 0)) {
        $.getJSON( "/json/LRTshowcases", function( data ) {
          var rand = Math.floor(Math.random() * (data.nodes.length));
          var resource = data.nodes[rand].node;
          var $block = $('.view-display-id-featured_lrt');
          $block.find('img').attr('src', resource.field_image);
          $block.find('h3.field-content').html(resource.title);
          $block.find('.field-search-snippet').replaceWith(resource.field_search_snippet);
        });

        $.getJSON( "/json/showcases", function( data ) {
          var rand = Math.floor(Math.random() * (data.nodes.length));
          var resource = data.nodes[rand].node;
          var $block = $('.view-display-id-portal_showcase');
          $block.find('img').attr('src', resource.field_image);
          $block.find('h3.field-content').html(resource.title);
          $block.find('.field-body').replaceWith(resource.body);
        });
      }
    });

  // // insert soft-hyphens
  // Hyphenator.config({
  //   selectorfunction: function () {
  //     return $('h1,h2,h3,.featured p').get();
  //   },
  //   minwordlength : 2,
  //   // This means lang packages don't have to be downloaded #winning:
  //   useCSS3hyphenation: true
  // });
  // Hyphenator.run();

  // Page load functions
  jQuery(window).load(function() {
    // Try to catch the moment when the tweets are lazyloaded
    lazyload_flex();
    setTimeout(lazyload_flex, 500);
    setTimeout(lazyload_flex, 1500);
    setTimeout(lazyload_flex, 2500);
    setTimeout(lazyload_flex, 4000);

    $('#block-views-openscience-events-block .view').flexslider({
      animation: "slide",
      animationLoop: false,
      itemWidth: 230,
      selector: "ol li",
      itemMargin: 0,
      controlNav: false,
    });

    $('#block-views-openscience-ui-block .view').flexslider({
      animation: "slide",
      selector: "ul li",
      itemMargin: 0,
      controlNav: false,
      directionNav: true,
    });

    // equal height columns
    $('.group-updates .wrapper, #block-views-openscience-events-block .view ol').equalHeights(0, 1);
    $('#block-views-openscience-ui-block .view ul').equalHeights(0, 1);
  });

})(jQuery);

function lazyload_flex() {
  jQuery('div.tweets-pulled-listing').delay(4000).flexslider({
    animation: "slide",
    animationLoop: true,
    selector: "ul.tweets-pulled-listing li",
    itemMargin: 0,
    itemWidth: 1,
    minItems: 1,
    maxItems: 1,
    directionNav: false,
  });
}