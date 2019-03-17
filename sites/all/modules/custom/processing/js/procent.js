(function ($) {
    Drupal.behaviors.processing = {
        attach: function (context, settings) {
            var user_id = settings.processing.user_id;

            if (user_id) {
                var id = setInterval(frame, 15 * 1000);

                function frame() {
                    $.ajax({
                        type: 'POST',
                        url: '/processing_get_ajax',
                        dataType: 'json',
                        data: user_id,
                        success: function (data) {
                            var status = data.query;
                            var html = '';
                            var fileName = '';
                            var dt = new Date();
                            status.forEach(function (index) {
                                if (index.processing_status != null) {
                                    $("#status-" + index.fid).text(index.processing_status);
                                }
                                if (index.processing_demand != null) {
                                    $("#demand-" + index.fid).text(index.processing_demand);
                                }
                                if (index.processing_percent != null) {
                                    $("#percent-" + index.fid).text(index.processing_percent);
                                    if (index.processing_percent == 100 && !$("#file-done-" + index.fid).hasClass('done')) {
                                        fileName = $("#file-done-" + index.fid).parent().parent().find('.views-field-filename-1 a').text();
                                        html = '<a href="/system/files/' + user_id + '/raw/' + addZero(dt.getMonth() + 1) +
                                            '/' + dt.getFullYear() + '/Done/' + fileName + '" download>' +
                                            '<img src="/sites/all/themes/gost/images/Filetype-Word-doc.ico" width="25" height="25"/>' +
                                            '</a>';
                                        $("#file-done-" + index.fid).html(html);
                                        $("#file-done-" + index.fid).addClass('done');
                                    }
                                }
                            });

                            if (data.finish == 'true' || data == undefined) {
                                clearInterval(id);
                            }
                        }
                    })
                }
            }
        }
    }

    function addZero(i) {
        return (i < 10) ? "0" + i : i;
    }
}(jQuery));
