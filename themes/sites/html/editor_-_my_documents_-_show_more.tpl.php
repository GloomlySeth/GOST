<?php ?>
<div id="base" class="">
    <div class = "row topMenu">

        <div class="col-xs-2 someMargin1" style="margin: 15px 0px 0px;">
            <!-- Logo (Image) -->
            <div id="u28" class="ax_image" data-label="Logo">
                <img id="u28_img" class="img " src="images/main_page/logo_u34.png"/>
            </div>

            <!-- Logo title (Shape) -->
            <div id="u30" class="ax_paragraph" data-label="Logo title">
                <div id="u31" class="text">
                    <p>
                        <span>РЕДАКТОР ДОКУМЕНТОВ</span>
                    </p>
                </div>
            </div>
        </div>

        <!-- Unnamed (Menu) -->
        <div id="u8" class="ax_menu col-xs-8">

            <!-- Unnamed (Table) -->
            <div id="u9" class="ax_table">

                <!-- Unnamed (Menu Item) -->
                <div id="u10" class="ax_table_cell">
                    <div id="u11" class="text">
                        <p>
                            <span>МОИ ДОКУМЕНТЫ</span>
                        </p>
                    </div>
                </div>

                <!-- Unnamed (Menu Item) -->
                <div id="u12" class="ax_table_cell">
                    <div id="u13" class="text">
                        <p>
                            <span>ТРЕБОВАНИЯ</span>
                        </p>
                    </div>
                </div>

                <!-- Unnamed (Menu Item) -->
                <div id="u14" class="ax_table_cell">
                    <div id="u15" class="text">
                        <p>
                            <span>СПОСОБЫ ОПЛАТЫ</span>
                        </p>
                    </div>
                </div>
            </div>
        </div>

        <!-- Unnamed (Menu) -->
        <div id="u16" class="ax_menu col-xs-2">

            <!-- Unnamed (Table) -->
            <div id="u17" class="ax_table">

                <!-- Unnamed (Menu Item) -->
                <div id="u18" class="ax_table_cell">
                    <img id="u18_img" class="img " src="#"/>
                    <!-- Unnamed () -->
                    <div id="u19" class="text">
                        <p>
                            <span style="text-decoration:underline;">ПРОФИЛЬ</span>
                        </p>
                    </div>
                </div>
                <!-- Unnamed (Menu) -->
                <div id="u20" class="ax_menu sub_menu">
                    <!-- Unnamed (Table) -->
                    <div id="u21" class="ax_table">

                        <!-- Unnamed (Menu Item) -->
                        <div id="u22" class="ax_table_cell">
                            <div id="u23" class="text">
                                <p>
                                    <span>Мои документы</span>
                                </p>
                            </div>
                        </div>

                        <!-- Unnamed (Menu Item) -->
                        <div id="u24" class="ax_table_cell">
                            <div id="u25" class="text">
                                <p>
                                    <span>Настройки учётной записи</span>
                                </p>
                            </div>
                        </div>

                        <!-- Unnamed (Menu Item) -->
                        <div id="u26" class="ax_table_cell">
                            <div id="u27" class="text">
                                <p>
                                    <span>Выход</span>
                                </p>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- top menu-->

    <div class="centerContent">
        <h3>ПОДРОБНАЯ ИНФОРМАЦИЯ О ДОКУМЕНТЕ</h3>
        <div class="inCenter">
            <table>
                <tr>
                    <td><b>Название</b></td>
                    <td>Документ 1</td>
                </tr>
                <tr>
                    <td><b>Тип</b></td>
                    <td>.docx</td>
                </tr>
                <tr>
                    <td><b>Размер</b></td>
                    <td>12 мб.</td>
                </tr>
                <tr>
                    <td><b>Приемное требование</b></td>
                    <td>Требование 1</td>
                </tr>
                <tr>
                    <td><b>Состояние</b></td>
                    <td>Ждет оплаты</td>
                </tr>
                <tr>
                    <td><b>Дата загрузки</b></td>
                    <td>26.03.2015 09:00</td>
                </tr>
                <tr>
                    <td><b>Дата изменения</b></td>
                    <td>26.03.2015 13:25</td>
                </tr>
            </table>
        </div>
        <div class="buttons">
            <button class="button btnDownload">Скачать</button>
            <button class="button btnChange">Изменить</button>
            <button class="button btnDelete">Удалить</button>
            <button class="button btnSeeDemo">Посмотреть результат - demo</button>
        </div>

    </div>
    <!-- row 2 -->

    <div class="row">
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

            <!-- Unnamed (Shape) -->
            <div id="u34" class="ax_paragraph col-xs-2">
                <div id="u35" class="text">
                    <p>
                        <span>© 2015</span>
                    </p>
                </div>
            </div>

        </div>
    </div>


    <script type="text/javascript">
        $(document).ready(function(){
            $("#u17").hover(function(){
                        $("#u20").slideToggle();
                    },
                    function(){
                        $("#u20").hide();
                    });
        })
    </script>

</div>
