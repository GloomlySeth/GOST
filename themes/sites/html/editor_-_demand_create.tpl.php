<?php ?>
<div id="base">
    <!-- top menu -->
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

    <div class="row">
        <!-- center content -->
        <div class="col-md-3 menuClassOne sidebar" >
            <div>
                <ul class="nav bs-docs-sidenav listMenuOne">
                    <li><a href="#">Загрузка документа</a></li>
                    <li><a href="#">Формирование требований</a></li>
                    <li><a href="#">Список требований</a></li>
                    <li><a href="#">Список документов</a></li>
                    <li><a href="#">Личная информация</a></li>
                    <li><a href="#">Информация о компании</a></li>
                    <li><a href="#">Состояние счета</a></li>
                </ul>
            </div>
        </div>

        <div class="col-md-9">
            <div class="col-md-9">
                <form action="arrayform.php" method="POST">
                    <h1 class="optCenter">ФОРМИРОВАНИЕ ТРЕБОВАНИЙ</h1>

                    <div class="col-md-12">
                        <form class="form-horizontal">
                            <div class="form-group">
                                <label for="na" class="col-sm-2 labelw">Название:</label>
                                <div class="col-sm-10" style="">
                                    <input type="text" class="form-control formOtstupe" name="Name">
                                </div>


                            </div>
                            <div class="form-group">
                                <label for="pr" class="col-sm-2 labelw">Примечание:</label>
                                <div class="col-sm-10" style="">
                                    <input type="text" class="form-control" name="Note">
                                </div>


                            </div>

                            <div class="text-center saveBtnPad">
                                <input type="submit" name="send" value="СОХРАНИТЬ ШАБЛОН">
                            </div>



                        </form>
                        <!--INSERT HERE-->
                        <section class="padT">
                            <h4>Поля</h4>
                            <div class="section-content">
                                <div class="fields row">
                                    <div class="col-xs-6">
                                        <label>Верхнее</label><br>
                                        <input name="FieldsTop" type="number" value="0"><br>
                                        <label>Нижнее</label><br>
                                        <input name="FieldsBottom" type="number" value="0"><br>
                                    </div>
                                    <div class="col-xs-6">
                                        <label>Левое</label><br>
                                        <input name="FieldsLeft" type="number" value="0"><br>
                                        <label>Правое</label><br>
                                        <input name="FieldsRight" type="number" value="0"><br>
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Размер бумаги</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <select name="PageSize">
                                        <option>Размер бумаги</option>
                                        <option>A1</option>
                                        <option>A2</option>
                                        <option>A3</option>
                                        <option>A4</option>
                                        <option>A5</option>
                                    </select>
                                    <!-- <br> -->
                                    <select name="orientation">
                                        <option>Ориентация</option>
                                        <option>Книжная</option>
                                        <option>Альбомная</option>
                                    </select>
                                </div>
                            </div>
                        </section>

                        <section>
                            <h4>Готовые настройки</h4>
                            <div class="section-content">
                                <div class="name">Выбрать шаблон настроек</div>
                                <div class="fields">
                                    <select class="widthSelect" name="PaternSectings">
                                        <option></option>
                                        <option value="№1">№1</option>
                                        <option value="№2">№2</option>
                                    </select>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Колонтитулы
                        </h3>
                        <section>
                            <h4>Расположение номера страницы</h4>
                            <div class="section-content">
                                <div class="name">Выбрать шаблон настроек</div>
                                <div class="subelement">
                                    <select name="SpotOfPageNumber">
                                        <option>Расположение номера страницы</option>
                                        <option>Вверху</option>
                                        <option>Внузу</option>
                                        <option>Левая граница</option>
                                        <option>Правая граница</option>
                                    </select>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Фильтрация нумерации страниц</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="fields">
                                        <label>Начать с:</label>
                                        <input name="StartFromPage" type="text">
                                        <label>Пропустить:</label>
                                        <input name="SkipPages" type="text">
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Настройка текста</h4>
                            <div class="section-content">
                                <div class="name">Выбрать шаблон настроек</div>
                                <div class="subelement">
                                    <div class="fields">
                                        <select name="font">
                                            <option>algerian</option>
                                            <option>amaze</option>
                                        </select>
                                        <select name="fontSize">
                                            <option>12</option>
                                            <option>14</option>
                                        </select>
                                        <br>
                                        <input type="radio" id="colLeftAlignRadio" class="imgControl leftAlign" name="ColAlignLeft" value="left">
                                        <label for="colLeftAlignRadio"><span></span></label>
                                        <input type="radio" id="colCenterAlignRadio" class="imgControl centerAlign" name="ColAlignCenter" value="center">
                                        <label for="colCenterAlignRadio"><span></span></label>
                                        <input type="radio" id="colRightAlignRadio" class="imgControl rightAlign" name="ColAlignRight" value="right">
                                        <label for="colRightAlignRadio"><span></span></label>
                                        <span>&nbsp;</span>
                                        <input type="checkbox" id="colBoldFont" class="imgControl boldFont" name="ColBold">
                                        <label for="colBoldFont"><span></span></label>
                                        <input type="checkbox" id="colItalicFont" class="imgControl italicFont" name="ColItalic">
                                        <label for="colItalicFont"><span></span></label>
                                        <input type="checkbox" id="colUnderlinedFont" class="imgControl underlinedFont" name="ColUnderlined">
                                        <label for="colUnderlinedFont"><span></span></label>
                                        <span>&nbsp;</span>
                                        <img src="images/editor_-_demand_create/btn_2_1_u1562.png" class="colorPickerButton" data-for="colTextColor">
                                        <input type="hidden" id="colTextColor" name="ColTextColor">
                                        <img src="images/editor_-_demand_create/btn_4_3_u193.png" class="colorPickerButton" data-for="colTextHightlight">
                                        <input type="hidden" id="colTextHighlight" name="ColTexHighlight">
                                        <br>
                                        <input type="checkbox" name="ColUseMainMarkup">Применить настройки основного текста
                                    </div>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Основной текст
                        </h3>
                        <section>
                            <h4>Шрифт</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="fields">
                                        <select name="fontS">
                                            <option>algerian</option>
                                            <option>amaze</option>
                                        </select>
                                        <select name="fontSizeS">
                                            <option>12</option>
                                            <option>14</option>
                                        </select>
                                        <br>
                                        <input type="radio" id="mainLeftAlign" class="imgControl leftAlign" name="MainAlignLeft" value="left">
                                        <label for="mainLeftAlign"><span></span></label>
                                        <input type="radio" id="mainCenterAlign" class="imgControl centerAlign" name="MainAlignCenter" value="center">
                                        <label for="mainCenterAlign"><span></span></label>
                                        <input type="radio" id="mainRightAlign" class="imgControl rightAlign" name="MainAlignRight" value="right">
                                        <label for="mainRightAlign"><span></span></label>
                                        <input type="radio" id="mainJustifiedAlign" class="imgControl justifiedAlign" name="MainAlign" value="justified">
                                        <label for="mainJustifiedAlign"><span></span></label>
                                        <span>&nbsp;</span>
                                        <input type="checkbox" id="mainBoldFont" class="imgControl boldFont" name="MainBold">
                                        <label for="mainBoldFont"><span></span></label>
                                        <input type="checkbox" id="mainItalicFont" class="imgControl italicFont" name="MainItalic">
                                        <label for="mainItalicFont"><span></span></label>
                                        <input type="checkbox" id="mainUnderlinedFont" class="imgControl underlinedFont" name="MainUnderlined">
                                        <label for="mainUnderlinedFont"><span></span></label>
                                        <span>&nbsp;</span>
                                        <img src="images/editor_-_demand_create/btn_2_1_u1562.png" class="colorPickerButton" data-for="mainTextColor">
                                        <input type="hidden" id="mainTextColor" name="MainTextColor">
                                        <img src="images/editor_-_demand_create/btn_4_3_u193.png" class="colorPickerButton" data-for="mainTextHightlight">
                                        <input type="hidden" id="mainTextHighlight" name="MainTexHighlight">
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Отступы</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="row">
                                        <div class="col-xs-6">
                                            <label>Слева</label><br>
                                            <input name="MarginsLeft" type="number" value="0"><br>
                                            <label>Справа</label><br>
                                            <input name="MarginsRight" type="number" value="0">
                                            <br>
                                            <input type="checkbox" style="width: auto" id="mirrorMargins" name="MirrorMargins">
                                            <label for="mirrorMargins" class="smallText">Зеркальные отступы</label>
                                        </div>
                                        <div class="col-xs-6">
                                            <label>Правая строка</label><br>
                                            <select name="MarginsFirstLine" style="width: 100%; height: 26px;">
                                                <option>(Нет)</option>
                                                <option>Отступ</option>
                                                <option>Выступ</option>
                                            </select><br>
                                            <label>На</label><br>
                                            <input name="MarginsFirstLineValue" type="number" value="-5"><br>
                                            <input type="checkbox" style="width: auto" id="addNewline" name="MarginsAddNewline">
                                            <label for="addNewline" class="smallText">Добавить переносы</label>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Интервал</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="row">
                                        <div class="col-xs-6">
                                            <label>Слева</label><br>
                                            <input name="SpacingLeft" type="number" value="0"><br>
                                            <label>Справа</label><br>
                                            <input name="SpacingRight" type="number" value="0">
                                            <br>
                                            <input type="checkbox" style="width: auto" name="MirrorSpacing">
                                            <span class="smallText">Зеркальные отступы</span>
                                        </div>
                                        <div class="col-xs-6">
                                            <label>Междустрочный</label><br>
                                            <select name="SpacingBetweenLines" style="width: 100%; height: 26px;">
                                                <option>Одинарный</option>
                                                <option>1.5 строки</option>
                                                <option>Двойной</option>
                                                <option>Минимум</option>
                                                <option>Точно</option>
                                                <option>Множитель</option>
                                            </select><br>
                                            <label>Значение</label><br>
                                            <input name="SpacingBetweenLinesValue" type="number" value="-5"><br>
                                            <input type="checkbox" style="width: auto" name="SpacingAddNewline">
                                            <span class="smallText">Добавить переносы</span>
                                        </div>
                                    </div>
                                    <div class="fields">
                                        <input type="checkbox" style="width: auto" name="LinesPerPageLimit">
                                        <span class="smallText">Количество строк на страницу</span>
                                        <input name="" type="number" value="" name="LinesPerPageValue"><br>
                                        <input type="checkbox" style="width: auto" name="SpacingSameParagraphs">
                                        <span class="smallText">Не добавлять интервал между абзацами одного стиля</span>
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Колонки</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="subelement">
                                        <div class="fields withBorder">
                                            <input type="radio" id="columnsOne" class="imgControl oneColumn" name="MainColumnTypeone" value="one">
                                            <label for="columnsOne"><span></span></label>
                                            <input type="radio" id="columnsTwo" class="imgControl twoColumns" name="MainColumnTypetwo" value="two">
                                            <label for="columnsTwo"><span></span></label>
                                            <input type="radio" id="columnsThree" class="imgControl threeColumns" name="MainColumnTypethree" value="three">
                                            <label for="columnsThree"><span></span></label>
                                            <input type="radio" id="columnsLeft" class="imgControl leftColumn" name="MainColumnTypeleft" value="left">
                                            <label for="columnsLeft"><span></span></label>
                                            <input type="radio" id="columnsRight" class="imgControl rightColumn" name="MainColumnTyperight" value="right">
                                            <label for="columnsRight"><span></span></label>
                                            <br>
                                            <span>Одна</span>
                                            <span>Две</span>
                                            <span>Три</span>
                                            <span>Слева</span>
                                            <span>Справа</span>
                                        </div>
                                    </div>

                                    <label>Число столбцов:</label><br>
                                    <input name="MainColumns" type="number" value="">
                                    &nbsp;&nbsp;
                                    <input type="checkbox" style="width: auto" name="MainColumnsAddDivider">
                                    <span class="smallText">Разделитель</span>
                                    <br style="margin-bottom: 10px;">

                                    <div class="subelement">
                                        <div class="name">Ширина и промежуток</div>
                                        <div class="fields withBorder">
                                            <span>Номер:</span>&nbsp;&nbsp;
                                            <span>Ширина:</span>&nbsp;&nbsp;
                                            <span>Промежуток:</span>&nbsp;&nbsp;
                                            <br>

                                            <input name="MainColumnsParamOne" type="number" value="" style="width: 50px;">
                                            &nbsp;&nbsp;
                                            <input name="MainColumnsWidthOne" type="number" value="" style="width: 50px;">
                                            &nbsp;&nbsp;&nbsp;&nbsp;
                                            <input name="MainColumnsSpacingOne" type="number" value="" style="width: 50px;">
                                            <br>
                                            <input name="MainColumnsParamTwo" type="number" value="" style="width: 50px;">
                                            &nbsp;&nbsp;
                                            <input name="MainColumnsWidthTwo" type="number" value="" style="width: 50px;">
                                            &nbsp;&nbsp;&nbsp;&nbsp;
                                            <input name="MainColumnsSpacingTwo" type="number" value="" style="width: 50px;">
                                            <br>
                                            <input type="checkbox" style="width: auto" name="MainColumnsSameWidth">
                                            <span class="smallText">Столбцы одинаковой ширины</span>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Нумерация
                        </h3>
                        <section>
                            <h4>Основные</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="fields">
                                        <label>Тип нумерации</label>
                                        <select name="rew">
                                            <option>(Нет)</option>
                                            <option>Сквозная</option>
                                            <option>Привязка к разделам/подразделам</option>
                                        </select>
                                        <br>

                                        <label>Вид нумерации:</label><br>
                                        <input type="radio" id="numTypeOne" class="imgControl big numerationOne" name="NumerationType1" value="1">
                                        <label for="numTypeOne"><span></span></label>
                                        <input type="radio" id="numTypeTwo" class="imgControl big numerationTwo" name="NumerationType2" value="2">
                                        <label for="numTypeTwo"><span></span></label>
                                        <input type="radio" id="numTypeThree" class="imgControl big numerationThree" name="NumerationType3" value="3">
                                        <label for="numTypeThree"><span></span></label>
                                        <input type="radio" id="numTypeFour" class="imgControl big numerationFour" name="NumerationType4" value="4">
                                        <label for="numTypeFour"><span></span></label>
                                        <input type="radio" id="numTypeFive" class="imgControl big numerationFive" name="NumerationType5" value="5">
                                        <label for="numTypeFive"><span></span></label>
                                        <input type="radio" id="numTypeSix" class="imgControl big numerationSix" name="NumerationType6" value="6">
                                        <label for="numTypeSix"><span></span></label>
                                        <input type="radio" id="numTypeSeven" class="imgControl big numerationSeven" name="NumerationType7" value="7">
                                        <label for="numTypeSeven"><span></span></label>
                                        <input type="radio" id="numTypeEight" class="imgControl big numerationEight" name="NumerationType8" value="8">
                                        <label for="numTypeEight"><span></span></label>
                                        <br>

                                        <label>Вид разделителя между подписью и текстом:</label>
                                        <select name="NumerationDivider">
                                            <option>(Нет)</option>
                                            <option>.</option>
                                            <option>,</option>
                                            <option>)</option>
                                            <option>\</option>
                                            <option>-</option>
                                            <option>*</option>
                                            <option>+</option>
                                            <option>Пробел</option>
                                        </select>
                                        <br>

                                        <input type="checkbox" style="width: auto" name="NumerationUseMainMarkup">
                                        <span class="smallText">Применить настройки основного текста</span>
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Шаблоны</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="fields">
                                        <label>Шаблон нумерации рисунка:</label><br>
                                        <select name="ImgNumLabel">
                                            <option>(Нет)</option>
                                            <option>Рисунок</option>
                                            <option>Рис.</option>
                                            <option>Иллюстрация</option>
                                            <option>Pict.</option>
                                            <option>Fig.</option>
                                            <option>Добавить свой</option>
                                        </select><br>

                                        <label>Свой вариант:</label><br>
                                        <input name="ImgNumLabelCustom" type="number" value="0"><br>

                                        <label>Шаблон нумерации таблицы:</label><br>
                                        <select name="TableNumLabel">
                                            <option>(Нет)</option>
                                            <option>Таблица</option>
                                            <option>Табл.</option>
                                            <option>Table</option>
                                        </select><br>
                                        <label>Свой вариант:</label><br>
                                        <input name="TableNumLabelCustom" type="number" value="0">
                                    </div>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Заголовки
                        </h3>
                        <section>
                            <h4>Основные</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="fields">
                                        <label>Уровень заголовка:</label><br>
                                        <select name="HeadingLevel">
                                            <option>(Нет)</option>
                                            <option>H1</option>
                                            <option>H2</option>
                                            <option>H3</option>
                                            <option>H4</option>
                                            <option>H5</option>
                                            <option>H6</option>
                                        </select><br>

                                        <label>Шаблон нумерации заголовка:</label><br>
                                        <select name="HeadingNumLabel">
                                            <option>(Нет)</option>
                                            <option>Глава</option>
                                            <option>Гл.</option>
                                            <option>Параграф</option>
                                        </select><br>

                                        <label>Свой вариант:</label><br>
                                        <input name="HeadingNumLabelCustom" type="number" value="0"><br>

                                        <input type="checkbox" style="width: auto" name="HeadingUseMainMarkup">
                                        <span class="smallText">Применить настройки основного текста</span>
                                    </div>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Нумерация</h4>
                            <div class="section-content">
                                <div class="subelement">
                                    <div class="fields">
                                        <label>Тип нумерации</label>
                                        <select name="HeaderNumeration">
                                            <option>(Нет)</option>
                                            <option>Сквозная</option>
                                            <option>Привязка к разделам/подразделам</option>
                                        </select>
                                        <br>

                                        <label>Вид нумерации:</label><br>
                                        <input type="radio" id="headerNumTypeOne" class="imgControl big numerationOne" name="HeaderNumerationType1" value="1">
                                        <label for="headerNumTypeOne"><span></span></label>
                                        <input type="radio" id="headerNumTypeTwo" class="imgControl big numerationTwo" name="HeaderNumerationType2" value="2">
                                        <label for="headerNumTypeTwo"><span></span></label>
                                        <input type="radio" id="headerNumTypeThree" class="imgControl big numerationThree" name="HeaderNumerationType3" value="3">
                                        <label for="headerNumTypeThree"><span></span></label>
                                        <input type="radio" id="headerNumTypeFour" class="imgControl big numerationFour" name="HeaderNumerationType4" value="4">
                                        <label for="headerNumTypeFour"><span></span></label>
                                        <input type="radio" id="headerNumTypeFive" class="imgControl big numerationFive" name="HeaderNumerationType5" value="5">
                                        <label for="headerNumTypeFive"><span></span></label>
                                        <input type="radio" id="headerNumTypeSix" class="imgControl big numerationSix" name="HeaderNumerationType6" value="6">
                                        <label for="headerNumTypeSix"><span></span></label>
                                        <input type="radio" id="headerNumTypeSeven" class="imgControl big numerationSeven" name="HeaderNumerationType7" value="7">
                                        <label for="headerNumTypeSeven"><span></span></label>
                                        <input type="radio" id="headerNumTypeEight" class="imgControl big numerationEight" name="HeaderNumerationType8" value="8">
                                        <label for="headerNumTypeEight"><span></span></label>
                                        <br>

                                        <label>Вид разделителя между подписью и текстом:</label>
                                        <select name="HeaderNumerationDivider">
                                            <option>(Нет)</option>
                                            <option>.</option>
                                            <option>,</option>
                                            <option>)</option>
                                            <option>\</option>
                                            <option>-</option>
                                            <option>*</option>
                                            <option>+</option>
                                            <option>Пробел</option>
                                        </select>
                                        <br>

                                        <input type="checkbox" style="width: auto" name="HeaderUseMainNumMarkup">
                                        <span class="smallText">Применить настройки основной нумерации</span>
                                    </div>
                                </div>
                                <button style="margin-bottom: 25px;">Добавить заголовок</button>
                            </div>
                        </section>

                        <h3>
                            Содержание
                        </h3>
                        <section>
                            <h4>Основные</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Расположение содержания</label><br>
                                    <select class="widthSelect" name="ContentsPosition">
                                        <option>В начале документа</option>
                                        <option>В конце документа</option>
                                    </select><br>

                                    <label>Вид разделителя между подписью и текстом:</label>
                                    <select name="ContentsDivider">
                                        <option>(Нет)</option>
                                        <option>.</option>
                                        <option>,</option>
                                        <option>)</option>
                                        <option>\</option>
                                        <option>-</option>
                                        <option>*</option>
                                        <option>+</option>
                                        <option>Пробел</option>
                                    </select>
                                    <br>

                                    <input type="checkbox" style="width: auto" name="ContentsUseMainTextMarkup">
                                    <span class="smallText">Применить настройки основного текста</span><br>
                                    <input type="checkbox" style="width: auto" name="ContentsUseListsMarkup">
                                    <span class="smallText">Применить настройки списков</span>

                                </div>
                            </div>
                        </section>

                        <h3>
                            Картинки
                        </h3>
                        <section>
                            <h4>Размеры</h4>
                            <div class="section-content">
                                <select name="ImgRuleType">
                                    <option>Допустимые размеры</option>
                                    <option>Допустимое соотношение</option>
                                </select>
                                <span>&nbsp;&nbsp;</span>

                                <input name="ImgRuleX" type="number" value="100" style="width: 70px;">
                                <span>X</span>
                                <input name="ImgRuleY" type="number" value="100" style="width: 70px;">
                            </div>
                        </section>
                        <section>
                            <h4>Границы рисунка</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Толщина:</label>
                                    <input name="PictureBorderThickness" type="number" value="" style="width: 70px;"><br>

                                    <label>Цвет:</label>
                                    <input type="color" name="PictureBorderColor" class="picker-wide">

                                    <br>
                                    <input type="radio" id="picBorderTypeOne" class="imgControl wide borderOne" name="PictureBorderType1" value="1">
                                    <label for="picBorderTypeOne"><span></span></label><br>
                                    <input type="radio" id="picBorderTypeTwo" class="imgControl wide borderTwo" name="PictureBorderType2" value="2">
                                    <label for="picBorderTypeTwo"><span></span></label><br>
                                    <input type="radio" id="picBorderTypeThree" class="imgControl wide borderThree" name="PictureBorderType3" value="3">
                                    <label for="picBorderTypeThree"><span></span></label><br>
                                    <input type="radio" id="picBorderTypeFour" class="imgControl wide borderFour" name="PictureBorderType4" value="4">
                                    <label for="picBorderTypeFour"><span></span></label><br>
                                    <input type="radio" id="picBorderTypeFive" class="imgControl wide borderFive" name="PictureBorderType5" value="5">
                                    <label for="picBorderTypeFive"><span></span></label><br>
                                    <input type="radio" id="picBorderTypeSix" class="imgControl wide borderSix" name="PictureBorderType6" value="6">
                                    <label for="picBorderTypeSix"><span></span></label><br>
                                    <input type="radio" id="picBorderTypeSeven" class="imgControl wide borderSeven" name="PictureBorderType7" value="7">
                                    <label for="picBorderTypeSeven"><span></span></label>

                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Размещение рисунка</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <input type="radio" id="picLeftAlign" class="imgControl leftAlign" name="PictureAlignleft" value="left">
                                    <label for="picLeftAlign"><span></span></label>
                                    <input type="radio" id="picCenterAlign" class="imgControl centerAlign" name="PictureAligncenter" value="center">
                                    <label for="picCenterAlign"><span></span></label>
                                    <input type="radio" id="picRightAlign" class="imgControl rightAlign" name="PictureAlignright" value="right">
                                    <label for="picRightAlign"><span></span></label>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Настройки подписи</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <input type="radio" id="picLabelLeftAlign" class="imgControl leftAlign" name="PictureLabelAlignleft" value="left">
                                    <label for="picLabelLeftAlign"><span></span></label>
                                    <input type="radio" id="picLabelCenterAlign" class="imgControl centerAlign" name="PictureLabelAligncenter" value="center">
                                    <label for="picLabelCenterAlign"><span></span></label>
                                    <input type="radio" id="picLabelRightAlign" class="imgControl rightAlign" name="PictureLabelAligntight" value="right">
                                    <label for="picLabelRightAlign"><span></span></label>
                                    <br>
                                    <input type="checkbox" style="width: auto" name="PictureUseMainTextMarkup">
                                    <span class="smallText">Применить настройки основного текста</span>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Отступы и интервалы</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>От верхнего края рисунка до текста:&nbsp;</label>
                                    <input name="PictureSpacingTop" type="number" value="0">
                                    <select class="widthSelect" name="PictureSpacingTopType" style="width: 70px">
                                        <option>мм</option>
                                        <option>Пробел. строки</option>
                                    </select><br>

                                    <label>От подписи рисунка до текста:&nbsp;</label>
                                    <input name="PictureSpacingLabelText" type="number" value="0">
                                    <select class="widthSelect" name="PictureSpacingLabelTextType" style="width: 70px">
                                        <option>мм</option>
                                        <option>Пробел. строки</option>
                                    </select><br>
                                    <label>Между подписью и рисунком:&nbsp;</label>
                                    <input name="PictureSpacingLabel" type="number" value="0">
                                    <select class="widthSelect" name="PictureSpacingLabelType" style="width: 70px">
                                        <option>мм</option>
                                        <option>Пробел. строки</option>
                                    </select><br>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Нумерация</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Тип нумерации::&nbsp;</label>
                                    <select class="widthSelect" name="PictureNumeration">
                                        <option>(Нет)</option>
                                        <option>Сквозная</option>
                                        <option>Привязка к разделам/подразделам</option>
                                    </select><br>

                                    <label>Вид нумерации:</label><br>
                                    <input type="radio" id="picNumTypeOne" class="imgControl big numerationOne" name="PictureNumerationType1" value="1">
                                    <label for="picNumTypeOne"><span></span></label>
                                    <input type="radio" id="picNumTypeTwo" class="imgControl big numerationTwo" name="PictureNumerationType2" value="2">
                                    <label for="picNumTypeTwo"><span></span></label>
                                    <input type="radio" id="picNumTypeThree" class="imgControl big numerationThree" name="PictureNumerationType3" value="3">
                                    <label for="picNumTypeThree"><span></span></label>
                                    <input type="radio" id="picNumTypeFour" class="imgControl big numerationFour" name="PictureNumerationType4" value="4">
                                    <label for="picNumTypeFour"><span></span></label>
                                    <input type="radio" id="picNumTypeFive" class="imgControl big numerationFive" name="PictureNumerationType5" value="5">
                                    <label for="picNumTypeFive"><span></span></label>
                                    <input type="radio" id="picNumTypeSix" class="imgControl big numerationSix" name="PictureNumerationType6" value="6">
                                    <label for="picNumTypeSix"><span></span></label>
                                    <input type="radio" id="picNumTypeSeven" class="imgControl big numerationSeven" name="PictureNumerationType7" value="7">
                                    <label for="picNumTypeSeven"><span></span></label>
                                    <input type="radio" id="picNumTypeEight" class="imgControl big numerationEight" name="PictureNumerationType8" value="8">
                                    <label for="picNumTypeEight"><span></span></label>
                                    <br>

                                    <label>Вид разделителя между подписью и текстом:</label>
                                    <select name="PictureNumerationDivider">
                                        <option>(Нет)</option>
                                        <option>.</option>
                                        <option>,</option>
                                        <option>)</option>
                                        <option>\</option>
                                        <option>-</option>
                                        <option>*</option>
                                        <option>+</option>
                                        <option>Пробел</option>
                                    </select>
                                    <br>
                                    <input type="checkbox" style="width: auto" name="PictureUseMainTextMarkup">
                                    <span class="smallText">Применить настройки основного текста</span><br>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Таблицы
                        </h3>
                        <section>
                            <h4>Настройки подписи</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Расположение подписи:&nbsp;</label>
                                    <select class="widthSelect" name="TableLabelPosition">
                                        <option>До таблицы</option>
                                        <option>После разрыва таблицы</option>
                                    </select><br>

                                    <select name="TableLabelFont">
                                        <option>algerian</option>
                                        <option>amaze</option>
                                    </select>
                                    <select name="TableLabelFontSize">
                                        <option>12</option>
                                        <option>14</option>
                                    </select>
                                    <br>
                                    <input type="radio" id="tableLeftAlign" class="imgControl leftAlign" name="TableAlignleft" value="left">
                                    <label for="tableLeftAlign"><span></span></label>
                                    <input type="radio" id="tableCenterAlign" class="imgControl centerAlign" name="TableAligncenter" value="center">
                                    <label for="tableCenterAlign"><span></span></label>
                                    <input type="radio" id="tableRightAlign" class="imgControl rightAlign" name="TableAlignright" value="right">
                                    <label for="tableRightAlign"><span></span></label>
                                    <input type="radio" id="tableJustifiedAlign" class="imgControl justifiedAlign" name="TableAlign" value="justified">
                                    <label for="tableJustifiedAlign"><span></span></label>
                                    <span>&nbsp;</span>
                                    <input type="checkbox" id="tableBoldFont" class="imgControl boldFont" name="TableBold">
                                    <label for="tableBoldFont"><span></span></label>
                                    <input type="checkbox" id="tableItalicFont" class="imgControl italicFont" name="TableItalic">
                                    <label for="tableItalicFont"><span></span></label>
                                    <input type="checkbox" id="tableUnderlinedFont" class="imgControl underlinedFont" name="TableUnderlined">
                                    <label for="tableUnderlinedFont"><span></span></label>
                                    <span>&nbsp;</span>
                                    <img src="images/editor_-_demand_create/btn_2_1_u1562.png" class="colorPickerButton" data-for="tableTextColor">
                                    <input type="hidden" id="tableTextColor" name="TableTextColor">
                                    <img src="images/editor_-_demand_create/btn_4_3_u193.png" class="colorPickerButton" data-for="tableTextHighlight">
                                    <input type="hidden" id="tableTextHighlight" name="TableTexHighlight">
                                    <br>
                                    <input type="checkbox" style="width: auto" name="TableMoveHeading">
                                    <span class="smallText">Перенос шапки таблицы</span><br>
                                    <input type="checkbox" style="width: auto" name="TableMoveColNumber">
                                    <span class="smallText">Перенос нумерации колонок</span><br>
                                    <input type="checkbox" style="width: auto" name="TableMoveKeepBottomBorder">
                                    <span class="smallText">Нижняя граница при переносе</span><br>
                                    <input type="checkbox" style="width: auto" name="TableMoveAddLabel">
                                    <span class="smallText">Надпись: "Продолжение таблицы ХХХ"</span><br>
                                    <input type="radio" id="tableLabelLeftAlign" class="imgControl leftAlign" name="TableLabelAlignleft" value="left">
                                    <label for="tableLabelLeftAlign"><span></span></label>
                                    <input type="radio" id="tableLabelCenterAlign" class="imgControl centerAlign" name="TableLabelAligncenter" value="center">
                                    <label for="tableLabelCenterAlign"><span></span></label>
                                    <input type="radio" id="tableLabelRightAlign" class="imgControl rightAlign" name="TableLabelAlignright" value="right">
                                    <label for="tableLabelRightAlign"><span></span></label>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Настройки нумерации</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Тип нумерации::&nbsp;</label>
                                    <select class="widthSelect" name="TableNumeration">
                                        <option>(Нет)</option>
                                        <option>Сквозная</option>
                                        <option>Привязка к разделам/подразделам</option>
                                    </select><br>

                                    <label>Вид нумерации:</label><br>
                                    <input type="radio" id="tableNumTypeOne" class="imgControl big numerationOne" name="TableNumerationType1" value="1">
                                    <label for="tableNumTypeOne"><span></span></label>
                                    <input type="radio" id="tableNumTypeTwo" class="imgControl big numerationTwo" name="TableNumerationType2" value="2">
                                    <label for="tableNumTypeTwo"><span></span></label>
                                    <input type="radio" id="tableNumTypeThree" class="imgControl big numerationThree" name="TableNumerationType3" value="3">
                                    <label for="tableNumTypeThree"><span></span></label>
                                    <input type="radio" id="tableNumTypeFour" class="imgControl big numerationFour" name="TableNumerationType4" value="4">
                                    <label for="tableNumTypeFour"><span></span></label>
                                    <input type="radio" id="tableNumTypeFive" class="imgControl big numerationFive" name="TableNumerationType5" value="5">
                                    <label for="tableNumTypeFive"><span></span></label>
                                    <input type="radio" id="tableNumTypeSix" class="imgControl big numerationSix" name="TableNumerationType6" value="6">
                                    <label for="tableNumTypeSix"><span></span></label>
                                    <input type="radio" id="tableNumTypeSeven" class="imgControl big numerationSeven" name="TableNumerationType7" value="7">
                                    <label for="tableNumTypeSeven"><span></span></label>
                                    <input type="radio" id="tableNumTypeEight" class="imgControl big numerationEight" name="TableNumerationType8" value="8">
                                    <label for="tableNumTypeEight"><span></span></label>
                                    <br>

                                    <label>Вид разделителя между подписью и текстом:</label>
                                    <select name="TableNumerationDivider">
                                        <option>(Нет)</option>
                                        <option>.</option>
                                        <option>,</option>
                                        <option>)</option>
                                        <option>\</option>
                                        <option>-</option>
                                        <option>*</option>
                                        <option>+</option>
                                        <option>Пробел</option>
                                    </select>
                                    <br>
                                    <input type="checkbox" style="width: auto" name="TableUseMainTextMarkup">
                                    <span class="smallText">Применить настройки основного текста</span><br>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Формулы
                        </h3>
                        <section>
                            <h4>Интервал</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>От текста до формулы:&nbsp;</label>
                                    <input name="FormulasSpacingText" type="number" value="0">
                                    <select class="widthSelect" name="FormulasSpacingTextType">
                                        <option>мм</option>
                                        <option>Пробел. строки</option>
                                    </select><br>

                                    <label>От формулы до текста:&nbsp;</label>
                                    <input name="FormulasSpacingToText" type="number" value="0">
                                    <select class="widthSelect" name="FormulasSpacingToTextType">
                                        <option>мм</option>
                                        <option>Пробел. строки</option>
                                    </select><br>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Настройки нумерации</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Тип нумерации:&nbsp;</label>
                                    <select class="widthSelect" name="FormulasNumeration">
                                        <option>(Нет)</option>
                                        <option>Сквозная</option>
                                        <option>Привязка к разделам/подразделам</option>
                                    </select><br>

                                    <label>Вид нумерации:</label><br>
                                    <input type="radio" id="formulaNumTypeOne" class="imgControl big numerationOne" name="FormulasNumerationType1" value="1">
                                    <label for="formulaNumTypeOne"><span></span></label>
                                    <input type="radio" id="formulaNumTypeTwo" class="imgControl big numerationTwo" name="FormulasNumerationType2" value="2">
                                    <label for="formulaNumTypeTwo"><span></span></label>
                                    <input type="radio" id="formulaNumTypeThree" class="imgControl big numerationThree" name="FormulasNumerationType3" value="3">
                                    <label for="formulaNumTypeThree"><span></span></label>
                                    <input type="radio" id="formulaNumTypeFour" class="imgControl big numerationFour" name="FormulasNumerationType4" value="4">
                                    <label for="formulaNumTypeFour"><span></span></label>
                                    <input type="radio" id="formulaNumTypeFive" class="imgControl big numerationFive" name="FormulasNumerationType5" value="5">
                                    <label for="formulaNumTypeFive"><span></span></label>
                                    <input type="radio" id="formulaNumTypeSix" class="imgControl big numerationSix" name="FormulasNumerationType6" value="6">
                                    <label for="formulaNumTypeSix"><span></span></label>
                                    <input type="radio" id="formulaNumTypeSeven" class="imgControl big numerationSeven" name="FormulasNumerationType7" value="7">
                                    <label for="formulaNumTypeSeven"><span></span></label>
                                    <input type="radio" id="formulaNumTypeEight" class="imgControl big numerationEight" name="FormulasNumerationType8" value="8">
                                    <label for="formulaNumTypeEight"><span></span></label>
                                    <br>

                                    <label>Вид разделителя между подписью и текстом:</label>
                                    <select name="FormulasNumerationDivider">
                                        <option>(Нет)</option>
                                        <option>.</option>
                                        <option>,</option>
                                        <option>)</option>
                                        <option>\</option>
                                        <option>-</option>
                                        <option>*</option>
                                        <option>+</option>
                                        <option>Пробел</option>
                                    </select>
                                    <br>
                                    <input type="checkbox" style="width: auto" name="FormulasUseMainTextMarkup">
                                    <span class="smallText">Применить настройки основного текста</span><br>
                                </div>
                            </div>
                        </section>

                        <h3>
                            Списки
                        </h3>
                        <section>
                            <h4>Форматирование</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Уровень списка:</label><br>
                                    <select name="ListLevel">
                                        <option>S1</option>
                                        <option>S2</option>
                                        <option>S3</option>
                                        <option>S4</option>
                                        <option>S5</option>
                                        <option>S6</option>
                                    </select><br>

                                    <label style="width: 180px;">Отступы от полей:</label>
                                    <input name="ListMarginBorder" type="number" value="0"><br>
                                    <label style="width: 180px;">Отступы от нумерации:</label>
                                    <input name="ListMarginNum" type="number" value="0"><br>

                                    <input type="checkbox" style="width: auto" name="ListUseMainTextMarkup">
                                    <span class="smallText">Применить настройки основного текста</span>
                                    <br>

                                    <label>Допустимые символы и знаки</label><br>
                                    <input type="checkbox" style="width: auto" name="ListPermitNone">
                                    <span class="smallText">1</span><br>
                                    <input type="checkbox" style="width: auto" name="ListPermitParenthesis">
                                    <span class="smallText">1)</span><br>
                                    <input type="checkbox" style="width: auto" name="ListPermitDot">
                                    <span class="smallText">1.</span><br>
                                    <input type="checkbox" style="width: auto" name="ListPermitStar">
                                    <span class="smallText">*</span><br>
                                    <input type="checkbox" style="width: auto" name="ListPermitDash">
                                    <span class="smallText">-</span><br>
                                </div>
                            </div>
                        </section>
                        <section>
                            <h4>Нумерация</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Тип нумерации</label>
                                    <select name="ListNumeration">
                                        <option>(Нет)</option>
                                        <option>Сквозная</option>
                                        <option>Привязка к разделам/подразделам</option>
                                    </select>
                                    <br>

                                    <label>Вид нумерации:</label><br>
                                    <input type="radio" id="listNumTypeOne" class="imgControl big numerationOne" name="ListNumerationType1" value="1">
                                    <label for="listNumTypeOne"><span></span></label>
                                    <input type="radio" id="listNumTypeTwo" class="imgControl big numerationTwo" name="ListNumerationType2" value="2">
                                    <label for="listNumTypeTwo"><span></span></label>
                                    <input type="radio" id="listNumTypeThree" class="imgControl big numerationThree" name="ListNumerationType3" value="3">
                                    <label for="listNumTypeThree"><span></span></label>
                                    <input type="radio" id="listNumTypeFour" class="imgControl big numerationFour" name="ListNumerationType4" value="4">
                                    <label for="listNumTypeFour"><span></span></label>
                                    <input type="radio" id="listNumTypeFive" class="imgControl big numerationFive" name="ListNumerationType5" value="5">
                                    <label for="listNumTypeFive"><span></span></label>
                                    <input type="radio" id="listNumTypeSix" class="imgControl big numerationSix" name="ListNumerationType6" value="6">
                                    <label for="listNumTypeSix"><span></span></label>
                                    <input type="radio" id="listNumTypeSeven" class="imgControl big numerationSeven" name="ListNumerationType7" value="7">
                                    <label for="listNumTypeSeven"><span></span></label>
                                    <input type="radio" id="listNumTypeEight" class="imgControl big numerationEight" name="ListNumerationType8" value="8">
                                    <label for="listNumTypeEight"><span></span></label>
                                    <br>

                                    <label>Вид разделителя между подписью и текстом:</label>
                                    <select name="ListNumerationDivider">
                                        <option>(Нет)</option>
                                        <option>.</option>
                                        <option>,</option>
                                        <option>)</option>
                                        <option>\</option>
                                        <option>-</option>
                                        <option>*</option>
                                        <option>+</option>
                                        <option>Пробел</option>
                                    </select>
                                    <br>

                                    <input type="checkbox" style="width: auto" name="ListUseMainNumeration">
                                    <span class="smallText">Применить настройки основной нумерации</span>
                                </div>
                                <button style="margin-bottom: 25px;">Добавить список</button>
                            </div>
                        </section>

                        <h3>
                            Кавычки
                        </h3>
                        <section>
                            <h4>Основные</h4>
                            <div class="section-content">
                                <div class="fields">
                                    <label>Символы кавычек:</label>
                                    <select class="widthSelect" name="Quotes">
                                        <option>" "</option>
                                        <option>' '</option>
                                        <option>@ @</option>
                                        <option>$ $</option>
                                        <option>/ /</option>
                                        <option>* *</option>
                                    </select>
                                </div>
                            </div>
                    </div>
                    </section>
                </form>
                <!--END-->

            </div>
            <div class="col-md-2">
                <section>
                    <div>
                        <div class="padTop">
                            <h4>Содержимое</h4>
                        </div>

                        <nav class="section-content">


                            <ul>
                                <li>Страница</li>
                                <li>Колонтитулы</li>
                                <li>Основной текст</li>
                                <li>Нумерация</li>
                                <li>Заголовки</li>
                                <li>Содержание (Оглавление)</li>
                                <li>Картинки</li>
                                <li>Таблицы</li>
                                <li>Формулы</li>
                                <li>Списки</li>
                                <li>Кавычки</li>
                                <li>Сноски</li>
                                <li>Примечания</li>
                            </ul>

                        </nav>
                    </div>

                </section>
            </div>





        </div>
    </div>
    <!-- bottom menu -->
    <div class="row">
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
</div>



<script type="text/javascript">
    $(document).ready(function(){
        $("#u16").hover(function(){
                    $("#u20").slideToggle();
                },
                function(){
                    $("#u20").hide();
                });

        $(".colorPicker").spectrum();
        $(".colorPickerButton").spectrum({
            change: function(color) {
                $("#" + $(this).data("for")).val(color.toHexString());
            }
        })


        // var clickImg = true;
        // var blueBorder = "solid 1px blue";
        // var whiteBorder = "solid 1px white";
        // var colorImg;

        // $("img").click(function(){
        //   // console.log($("img:hover").css("border-top-color"));
        //   if(clickImg == true){
        //       colorImg = blueBorder;
        //   }else{
        //       colorImg = whiteBorder;
        //   }

        //   $("img:hover").css("border", colorImg);

        //   if(clickImg == true){
        //       clickImg = false;
        //   }else{
        //       clickImg = true;
        //   }
        // })
    })
</script>
