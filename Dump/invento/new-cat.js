$('document').ready(function() {
	$('form[name=new-cat]').submit(function(evt) {
		evt.preventDefault();
		
		var name = $('input[name=ncat-name]').val();
		var place = $('input[name=ncat-place]').val();
		var desc = $('textarea[name=ncat-descrp]').val();
		
		if(name == '') {
			alert('Please insert a category name');
			return false;
		}
		
		$.post('new-category.php', {
			'act':'1',
			'name':name,
			'place':place,
			'desc':desc
		}, function(data) {
			if(data == '1') {
				alert('Category successfully created');
				location.href = 'new-category.php';
			}else{
				alert('Something went wrong, please try again');
				return false;
			}
		});
	});
	
	$('textarea[name=item-descrp]').keyup(function(evt) {
		var count = $(this).val().length;
		var limit = 400;
		var val = $(this).val();
		var t = $(this);
		
		if(count > limit){
			t.val(val.substr(0,400));
			var dif = 0;
		}else
			var dif = limit-count;
		$('span.item-desc-left').html('Description ('+dif+' characters left)');
	});
});