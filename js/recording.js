(function ($) {
  Drupal.behaviors.recording = {
    attach: function(context, settings) {
			var read_more_id = '.recording .title-section .read-more-section';
			var body_id = '.recording .field-name-body';
			$(body_id).hide();		
			$(read_more_id).on('click', function() {
				$(body_id).toggle();	
			});
		}
	}
})(jQuery);
