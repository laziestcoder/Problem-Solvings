$('document').ready(function() {
	$('form[name=new-item]').submit(function(evt) {
		evt.preventDefault();
		
		var name = $('input[name=item-name]').val();
		var desc = $('textarea[name=item-descrp]').val();
		var cat = $('select[name=item-category]').val();
		var qty = $('input[name=item-qty]').val();
		var price = $('input[name=item-price]').val();
		
		if(name == '') {
			alert('Please insert an item name');
			return false;
		}
		if(cat == 'no') {
			alert('You need to create a category');
			location.href='new-category.php';
			return false;
		}
		if(price == '') {
			alert('Please insert a price');
			return false;
		}

		
		$.post('new-item.php', {
			'act':'1',
			'name':name,
			'descrp':desc,
			'cat':cat,
			'qty':qty,
			'price':price
		}, function(data) {
			if(data == '1') {
				alert('Item successfully created');
				location.href = 'new-item.php';
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
		$('span.item-desc-left').html('Description ('+dif+' characters left):');
	});
	
	$('input[name=item-qty]').keyup(function(evt) {
		var val = $(this).val();
		var re = /^\d+$/;
		var t = $(this);
		
		if((re.test(val)) == false)
			t.val(val.substr(0, val.length - 1));
		return;
	});
	
	$('input[name=item-price]').keyup(function(evt) {
		var val = $(this).val();
		var re = /^\d*\.{0,1}\d{0,2}$/;
		var t = $(this);
		
		if((re.test(val)) == false)
			t.val(val.substr(0, val.length - 1));
		return;
	});
});