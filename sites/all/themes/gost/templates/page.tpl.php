<div class="header">
  <div class = "row topMenu">
    <div class="col-xs-2 someMargin1" style="margin: 15px 0px 0px;">
      <!-- Logo (Image) -->
      <div id="u28" class="ax_image" data-label="Logo">
        <a href="/" title="<?php print t('Home'); ?>" rel="home">
          <img id="u28_img" class="img " src="/<?=$directory;?>/images/main_page/logo_u34.png"/>
        </a>
      </div>

      <!-- Logo title (Shape) -->
      <div id="u30" class="ax_paragraph" data-label="Logo title">
        <div id="u31" class="text">
          <a href="/" title="<?php print t('Home'); ?>" rel="home">
            <span><?=$site_name;?></span>
          </a>
        </div>
      </div>
    </div>

    <!-- (Menu) -->
    <div id="u8" class="ax_menu col-xs-8">
      <? print render($page['header']); ?>
    </div>

    <!-- (Menu) -->
    <div id="u16" class="ax_menu col-xs-2">
      <!-- (Table) -->
      <div id="u17" class="ax_table">
        <div id="u18" class="ax_table_cell">
            <img id="u18_img" class="img " src="#"/>
            <div id="u19" class="text">
              <a href="#"><p><span style="text-decoration:underline; color: white">ВОЙТИ</span></p></a>
            </div>
        </div>
      </div>
    </div>
  </div>
</div>


<div class="midCont">
  <div class="container-fluid">
    <div class="row">
      <div class="menuClassParent">
        <div class="col-md-3 menuClassOne sidebarUsr" >
          <div>
                <? print render($page['sidebar_first']); 
                  /*<?php 
                    print theme('links', array(
                        'links' => menu_navigation_links('secondary_menu'),
                        'attributes' => array(
                          'class'=> array('links', 'main-menu')
                        )
                  ));?>*/
                ?>
          </div>
        </div>

        <div class="col-md-9">
          <h1 class="text-center">Содержание</h1>
          <?php print render($page['content']); ?>
        </div>
      </div>
    </div>
  </div>
</div>


<div class="footer">
  <div class="row rowEdit" >
    <!-- Unnamed (Shape) -->
    <div id="u32" class="ax_shape">
      <div class="col-xs-2"></div>
      <!-- Unnamed (Menu) -->
      <div id="u36" class="ax_menu col-xs-8">
      <!-- Unnamed (Table) -->
        <div id="u37" class="ax_table">
          <? print render($page['footer']); ?>
        </div>
      </div>
    </div>
  </div>
</div>
