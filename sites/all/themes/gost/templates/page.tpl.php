<link rel="stylesheet" href="/sites/all/themes/gost/css/main.css">

<div class="header">
  <div class="grid__center">
    <div class="header__logo">    
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" >
        <img src="/<?=$directory;?>/images/logo.png" alt="<?php print t('Home'); ?>" />
        <span class="header__site-name"><?=$site_name;?></span>
      </a>
    </div>

    <div class="header__menu">
      <? print render($page['header']); ?>
    </div>

    <div class="header__user-link">
      <a href="#">Войти</a>
    </div>
    
  </div>
</div>

<div class="grid__center">
  <div class="sidebar grid__sidebar">
    <div class="sidebar__menu">
      <? print render($page['sidebar_first']); ?>
    </div>
  </div>

  <div class="data-content grid__content">
    <h1 class="text-center">Содержание</h1>
    <?php print render($page['content']); ?>
  </div>
</div>


<div class="footer">
  <div class="footer__menu">
    <? print render($page['footer']); ?>
  </div>
</div>

