/* 
*     Tabs popular posts and latest posts
*     Copyright (C) 2011 - 2014 www.gopiplus.com
*     http://www.gopiplus.com/work/2012/11/24/wordpress-plugin-tabs-widget-popular-posts-and-latest-posts/
*     License: GPLv2 or later
*/

$j = jQuery.noConflict();

$j(document).ready(function(){

        // UL = .TabsPostsTabs
        // Tab contents = .TabsPostsInside
        
       var tag_cloud_class = '#tag-cloud'; 
       
       var tag_cloud_height = jQuery('#tag-cloud').height();

       jQuery('.TabsPostsInside ul li:last-child').css('border-bottom','0px') // remove last border-bottom from list in tab conten
       jQuery('.TabsPostsTabs').each(function(){
       	jQuery(this).children('li').children('a:first').addClass('selected'); // Add .selected class to first tab on load
       });
       jQuery('.TabsPostsInside > *').hide();
       jQuery('.TabsPostsInside > *:first-child').show();
       

       jQuery('.TabsPostsTabs li a').click(function(evt){ // Init Click funtion on TabsPostsTabs
        
            var clicked_tab_ref = jQuery(this).attr('href'); // Strore Href value
            
            jQuery(this).parent().parent().children('li').children('a').removeClass('selected'); //Remove selected from all TabsPostsTabs
            jQuery(this).addClass('selected');
            jQuery(this).parent().parent().parent().children('.TabsPostsInside').children('*').hide();
            
            jQuery('.TabsPostsInside ' + clicked_tab_ref).fadeIn(500);
             
             evt.preventDefault();

        })
    
})