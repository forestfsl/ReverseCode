$(document).ready(function () {
	$('.quote').quovolver();

	// Terminal Slideshow
	$('.terminal-slides').responsiveSlides({
		auto: true,
		speed: 800,
		timeout: 6000
	});

	// Tabbing between wget and curl installs
	$('.install li').on('click', function() {
		$('.install li').removeClass('active-tab');
		$(this).addClass('active-tab');

		if ($('#wget-tab').hasClass('active-tab')) {
			$('.curl').hide();
			$('.wget').show();
		}
		else {
			$('.wget').hide();
			$('.curl').show();
		}
		return false;
	});

	// Responsive Nav Slidedown
	var nav = $('.nav');

	$('.nav-trigger').on('click', function() {
		nav.slideToggle();
	});

	$('.code').focus(function () {
		var $this = $(this);
		$this.select();

		// To Fix Chrome's bug
		$this.mouseup(function() {
			$this.unbind("mouseup");
			return false;
		});
	});



	$(window).resize(function() {
		var d = $(window).width();
		if(d > 740 && nav.is(':hidden')) {
			nav.removeAttr('style');
		}
	});

	// Analytics Event Tracking for copying install text
	$('.code').bind('copy', function() {
		_gaq.push(['_trackEvent', 'Copy to Clipboard', 'Copied Install Code']);
	});

  if(window.location.hash) {
    var hash = window.location.hash.substring(1);
    if (hash === 'mailing-list') {
      $('#modal').modal();
    }
  }

});
