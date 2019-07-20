$('document').ready(function() {
	$('.wrapper-pad #selectors li').click(function(evt) {
		evt.preventDefault();		
		
		if($(this).hasClass('selected'))
			return false;
		
		var val = $(this).attr('value');
		
		$('.wrapper-pad #selectors li.selected').removeClass('selected');
		$(this).addClass('selected');
		
		$.post('home.php', {
			'act': 'reqinfo',
			'int': val
		}, function(data) {
			if(data.indexOf('|') == -1) {
				alert(data);
				return false;
			}
			
			data = data.split('|');
			$('#fdetails .element:nth-child(1) span').fadeOut(200, function() { $(this).html(data[0]).fadeIn(200); });
			$('#fdetails .element:nth-child(2) span').fadeOut(200, function() { $(this).html(data[1]).fadeIn(200); });
			$('#fdetails .element:nth-child(3) span').fadeOut(200, function() { $(this).html(data[2]).fadeIn(200); });
			$('#fdetails .element:nth-child(4) span').fadeOut(200, function() { $(this).html(data[3]).fadeIn(200); });
			$('#fdetails .element:nth-child(5) span').fadeOut(200, function() { $(this).html(data[4]).fadeIn(200); });
		});
	});
});