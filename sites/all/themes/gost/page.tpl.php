<?php
?>
<?php print render($page['header']); ?>

  <div class="header">
      <div class = "row topMenu">

            <div class="col-xs-2 someMargin1" style="margin: 15px 0px 0px;">
                <!-- Logo (Image) -->
                <div id="u28" class="ax_image" data-label="Logo">
                  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                    <img id="u28_img" class="img " src="/<?=$directory;?>/images/main_page/logo_u34.png"/>
                  </a>
                </div>

                <!-- Logo title (Shape) -->
                <div id="u30" class="ax_paragraph" data-label="Logo title">
                    <div id="u31" class="text">
                      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                        <span>РЕДАКТОР ДОКУМЕНТОВ</span>
                      </a>
                    </div>
                </div>
            </div>

            <!-- Unnamed (Menu) -->
            <div id="u8" class="ax_menu col-xs-8">

                <!-- Unnamed (Table) 
                <div id="u9" class="ax_table">
                    <a href="/" id="u11" class="text">
                      <div id="u10" class="ax_table_cell">
                          <p>
                            <span></span>
                          </p>
                      </div>
                    </a>
                </div>
                -->
                
            </div>



            <!-- Unnamed (Menu) -->
            <div id="u16" class="ax_menu col-xs-2">
                <!-- Unnamed (Table) -->
                <div id="u17" class="ax_table">
                    <!-- Unnamed (Menu Item) -->
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
                <?php if ($secondary_menu): ?>
                  <?php print theme('links__system_secondary_menu', array(
                      'links' => $secondary_menu,
                      'attributes' => array(
                        'id' => 'secondary-menu-links',
                        'class' => array('nav', 'bs-docs-sidenav', 'listMenuOne'),
                      )
                  )); ?>
                <?php endif; ?>
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

                    <!-- Unnamed (Menu Item) -->
                    <div id="u38" class="ax_table_cell">
                        <div id="u39" class="text">
                            <p>
                                <span style="text-decoration:underline;">FAQ</span>
                            </p>
                        </div>
                    </div>

                    <!-- Unnamed (Menu Item) -->
                    <div id="u40" class="ax_table_cell">
                        <div id="u41" class="text">
                            <p>
                                <span style="text-decoration:underline;">ПОДДЕРЖКА</span>
                            </p>
                        </div>
                    </div>

                    <!-- Unnamed (Menu Item) -->
                    <div id="u42" class="ax_table_cell">
                        <div id="u43" class="text">
                            <p>
                                <span style="text-decoration:underline;">О НАС</span>
                            </p>
                        </div>
                    </div>
                </div>
            </div>
    </div>
</body>
</html>