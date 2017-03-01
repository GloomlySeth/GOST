(function() {
	jQuery(document).ready(function(){
		jQuery('a.expanded').hover(function(e){
			console.log('hover')
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
	});
})();