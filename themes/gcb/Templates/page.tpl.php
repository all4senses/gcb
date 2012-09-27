<div id="bshadow">
    
    
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php if ($main_menu): ?>
      <a href="#navigation" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a>
    <?php endif; ?>
  </div>

  
  <header id="header" role="banner" class="clearfix">

    <nav id="navigation" role="navigation" class="clearfix">
      <div id="header-menu-back"></div>
      
      <div id="logo-block">
        <a href="<?php print $front_page; ?>" title="<?php print t('GoCloudBackup Home'); ?>" id="logo">
          <img src="<?php print 'http://gocloudbackup.com/sites/all/themes/gcb/css/images/gocloudbackup-logo.png'; ?>" alt="<?php print t('GoCloudBackup logo'); ?>" title="<?php print t('GoCloudBackup Home'); ?>" />
        </a>
        <div class="descr">
          <div class="title">2012 GoCloudBAckup GUIDE</div>
          <div class="subtitle">SERVICE PROVIDER REVIEWS</div><div class="stars"><img src="http://gocloudbackup.com/sites/all/themes/gcb/css/images/sprite-0.png" alt="GoCloudBAckup Reviews" title="GoCloudBAckup Reviews"/></div>
        </div>
      </div>
      
      <?php echo '<div id="block-gv-blocks-header-links"><div class="follow-us">Follow Us</div>', gcb_blocks_get_headerLinks(), '</div>', render($page['header']); ?>
    </nav> <!-- /#navigation -->

    <?php ////if ($breadcrumb): print $breadcrumb; endif;?>
  </header> <!-- /#header -->

  
  <?php if ($page['highlighted']): ?>
    <section id="highlighted" class="clearfix">
      <?php print render($page['highlighted']); ?>
    </section>
  <?php endif; ?>
  
  
  <div id="all-content" class="clearfix">
      
      
    
      <section id="main" role="main" class="clearfix">

          <?php print $messages; ?>
          <a id="main-content"></a>
          
          <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          
          <?php print render($page['above_content']); ?>
          <?php print render($page['content']); ?>
          
          <?php 
          $pages_with_timestamp = array(
            '/blog', 
            '/news', 
            '/about-us',
            '/contact-us',
            '/advertise',
            '/press',
            '/privacy-policy',
            '/terms-of-use',
            '/our-team',
          );
          //global $user;          
          //if ($user->uid == 1) {
          if($is_front || in_array($_SERVER['REDIRECT_URL'], $pages_with_timestamp))
            echo gcb_misc_lastUpdatedStamp();
          //}
          ?>
          
      </section> <!-- /#main -->


      <?php if ($page['sidebar_first']): ?>
        <aside id="sidebar-first" role="complementary" class="sidebar clearfix">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

      <?php if ($page['sidebar_second']): ?>
        <aside id="sidebar-second" role="complementary" class="sidebar clearfix">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>

  </div> <!-- /#all-content -->

  </div> <!-- <div id="bshadow"> -->


  
  <footer id="footer" role="contentinfo" class="clearfix">
    <?php echo render($page['footer']); ?>
    <div class="c">© 2012 GoCloudBackup.com | All Rights Reserved</div>
    <div id="sitelock"><a id="sitelock" href="#" onclick="window.open('https://www.sitelock.com/verify.php?site=getvoip.com','SiteLock','width=600,height=600,left=160,top=170');" ><img alt="website security" title="SiteLock"  src="//shield.sitelock.com/shield/getvoip.com"/></a></div>
    <a id="valid-rss" href="http://appc.w3.org/check.cgi?url=http%3A//gocloudbackup.com/rss.xml"><img src="http://gocloudbackup.com/sites/all/themes/gcb/css/images/valid-rss-rogers.png" alt="[Valid RSS]" title="Validate my RSS feed" /></a>
  </footer> <!-- /#footer -->

