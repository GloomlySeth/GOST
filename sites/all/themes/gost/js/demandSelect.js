(function ($) {
    $(function () {
        $('select.demandSelect').css("background-color", "black");
        $(document).ready(function () {
            $('select.demandSelect').change(function () {
                var idSelect = '#' + $(this).attr("id") + ' option:selected';
                $(this).css("background-color", $(idSelect).css("background-color"));
            });

            $('.field-name-field-title-number-r .field-multiple-table input[type="submit"]').val(Drupal.t('Delete title'));
            $('.field-name-field-title-number-r .field-add-more-submit').val(Drupal.t('Added title'));
        });

        $(document).ajaxComplete(function (event, xhr, settings) {
            var demandSelect = '.field-name-field-title-number-r .demandSelect';

            $(demandSelect).each(function( index ) {
                var idSelect2 = '#' + $(this).attr("id") + ' option:selected';
                var optColor = $(idSelect2).css("background-color");
                if (optColor == 'rgba(0, 0, 0, 0)') {
                    optColor = 'black';
                }
                $(this).css("background-color", optColor);
            });

            $(demandSelect).change(function () {
                var idSelect = '#' + $(this).attr("id") + ' option:selected';
                $(this).css("background-color", $(idSelect).css("background-color"));
            });

            if (settings.extraData._triggering_element_name && settings.extraData._triggering_element_name == 'field_title_number_r_add_more') {
                $('.field-name-field-title-number-r .field-multiple-table input[type="submit"]').val(Drupal.t('Delete title'));
                $('.field-name-field-title-number-r .field-add-more-submit').val(Drupal.t('Added title'));
            }
        });

    });


})(jQuery);

