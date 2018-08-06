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

            if (settings.extraData._triggering_element_name && settings.extraData._triggering_element_name == 'field_title_number_r_add_more') {
                var prev = $('.field-name-field-title-number-r .field-multiple-table tr:last').prev();
                var last = $('.field-name-field-title-number-r .field-multiple-table tr:last');
                last.find('select').val(prev.find('select').val());
                last.find('.form-type-checkbox input[value="' + prev.find('.form-type-checkbox input:checked').val() + '"]').attr('checked', true);
                last.find('.form-type-radios input[value="' + prev.find('.form-type-radios input:checked').val() + '"]').attr('checked', true);
                last.find('.form-type-textfield input').val(prev.find('.form-type-textfield input').val());

                $('.field-name-field-title-number-r .field-multiple-table input[type="submit"]').val(Drupal.t('Delete title'));
                $('.field-name-field-title-number-r .field-add-more-submit').val(Drupal.t('Added title'));
            }
        });

    });


})(jQuery);

