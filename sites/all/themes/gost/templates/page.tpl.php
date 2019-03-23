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
<!--      <a href="--><?php //print $front_page; ?><!--" title="--><?php //print t('Home'); ?><!--" rel="home" >-->
<!--        <img src="/--><?php //print $directory; ?><!--/images/logo.png" alt="--><?php //print t('Home'); ?><!--" />-->
<!--        <span class="header__site-name">--><?php //print $site_name; ?><!--</span>-->
<!--      </a>-->
    </div>

    <div class="header__menu">
      <?php print render($page['header']); ?>
    </div>

  </div>
</div>

<div class="grid__center">
  <div class="sidebar grid__sidebar">
    <div class="sidebar__menu">
      <?php print render($page['sidebar_first']); ?>
    </div>
  </div>

  <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
  
  <div class="data-content grid__content">
    <?php if ($tabs): ?>
      <div class="tabs">
        <?php print render($tabs); ?>
      </div>
    <?php endif; ?>
	
	<?php if ($messages): ?>
    <div id="messages"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>
	
    <?php print render($page['content']); ?>
  </div>
</div>


<div class="footer">
  <div class="footer__menu">
    <?php print render($page['footer']); ?>
  </div>
</div>
