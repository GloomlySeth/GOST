<div class="logo__header">
    <div class="icon__logo">
        <img src="/<?php print $directory; ?>/images/logo.png" alt="<?php print t('Home'); ?>" />
    </div>
    <div class="title__logo">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" >
            <span class="site-name__logo"><?php print $site_name; ?></span>
        </a>
    </div>
</div>
<div class="header">
  <div class="grid__center">
    <div class="header__logo">    

    </div>
    <div class="header__menu">
      <?php print render($page['header']); ?>
    </div>
  <?php if ($messages): ?>
    <div id="messages"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>
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