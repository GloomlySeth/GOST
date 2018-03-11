(function ($) {
  $(function () {
    $('select.demandSelect').css("background-color", "black");
	$(document).ready(function(){
		$('select.demandSelect').change(function (){
		var idSelect = '#' + $(this).attr("id") + ' option:selected';//alert(idSelect);
		$(this).css("background-color", $(idSelect).css("background-color"));
		});
	});
  });
}) (jQuery);
