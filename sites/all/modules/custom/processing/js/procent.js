(function($) {
    Drupal.behaviors.processing = {
        attach: function (context, settings) {
            var user_id = settings.processing.user_id;

            if(user_id) {
                var id = setInterval(frame, 15 * 1000);
                function frame() {
                    $.ajax({
                        type: 'POST',
                        url: '/processing_get_ajax',
                        dataType: 'json',
                        data: user_id,
                        success: function(data){
                            var status = data.query;
                            status.forEach(function( index ) {
                                if(index.processing_status != null) {
                                    $("#status-" + index.fid).text(index.processing_status);
                                }
                                if(index.processing_demand != null) {
                                    $("#demand-" + index.fid).text(index.processing_demand);
                                }
                                if(index.processing_percent != null) {
                                    $("#percent-" + index.fid).text(index.processing_percent);
                                }
                            });

                            if(data.finish == 'true' || data == undefined) {
                                clearInterval(id);
                            }
                        }
                    })
                }
            }
        }
    }
}(jQuery));
