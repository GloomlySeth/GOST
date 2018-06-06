(function($) {
	jQuery(document).ready(function(){
		jQuery('a.expanded').hover(function(e){
			e.preventDefault();
		});
		jQuery('.header__menu .content > ul.menu li').hover(function () {
			clearTimeout(jQuery.data(this,'timer'));
			jQuery('ul',this).show();
		}, function () {
			jQuery.data(this,'timer', setTimeout(jQuery.proxy(function() {
				jQuery('ul',this).hide();
			}, this), 100));
		});
		$("#edit-upload-upload-button").click(function () {
			var result = $('input[type="file"]').prop('files');
			var arr;

			$('.form-item-list-docx label.option') .each(function(){
				arr = $(this).text().trim();
				if(result[0].name == arr) {
					if(!confirm("Файл с таким именем существует и будет удален. Загрузить?")) {
						event.preventDefault();
						event.stopImmediatePropagation();
						event.returnValue = false;
					};
				}
			})
		});
	});
})(jQuery);

