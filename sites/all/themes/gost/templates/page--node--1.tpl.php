
<div class="header">
  <div class="grid__center">
    <div class="header__logo">    
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" >
        <img src="/<?php print $directory; ?>/images/logo.png" alt="<?php print t('Home'); ?>" />
        <span class="header__site-name"><?php print $site_name; ?></span>
      </a>
    </div>

    <div class="header__menu">
      <?php print render($page['header']); ?>
    </div>

  </div>
</div>
<div class="wrap-image">
  <div class="content-block">
    <div class="data-content">
      <?php print render($page['content']); ?>
    </div>
  </div>
  <div class="footer">
    <div class="footer__menu">
      <?php print render($page['footer']); ?>
    </div>
  </div>
</div>