$('document').ready(function() {
	$('form[name=edit-user]').submit(function(evt) {
		evt.preventDefault();
		
		var userid = $(this).data('id');
		var name = $('input[name=euser-name]').val();
		var email = $('input[name=euser-email]').val();
		var role = $('select[name=euser-role]').val();
		
		// Validate email
		var rgpx = /^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
		
		// Empty Inputs
		if(name == '') {
			alert('Please insert a name');
			return false;
		}else if(email == '') {
			alert('Please insert an email');
			return false;
		}else if(rgpx.test(email) == false) {
			alert('Please insert a valid email');
			return false;
		}
		
		alert('Sorry, in the demo version you cannot edit users');
	});
});