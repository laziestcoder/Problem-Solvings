jQuery(document).ready(function () {
  jQuery(".facebook_left").hover(function () {
	jQuery(this).stop(true, false).animate({
	  "margin-left": "0"
	}, 500);
  }, function () {
	jQuery(".facebook_left").stop(true, false).animate({
	  "margin-left": "-244px"
	}, 500);
  });		  
  jQuery(".twitter_left").hover(function () {
	jQuery(this).stop(true, false).animate({
	  "margin-left": "0"
	}, 500);
  }, function () {
	jQuery(".twitter_left").stop(true, false).animate({
	  "margin-left": "-254px"
	}, 500);
  });
	jQuery(".google_left").hover(function () {
	jQuery(this).stop(true, false).animate({
	  "margin-left": "0px"
	}, 500);
  }, function () {
	jQuery(".google_left").stop(true, false).animate({
	  "margin-left": "-294px"
	}, 500);
  });
  jQuery(".youtube_left").hover(function (){
	jQuery(this).stop(true,false).animate({
		"margin-left": "0"
		}, 500);
	}, function (){
	  jQuery(".youtube_left").stop(true,false).animate({
		"margin-left": "-220px"
	  }, 500);
  });

}); 