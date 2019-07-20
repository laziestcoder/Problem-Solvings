if(typeof(tw_width) != "undefined"){if(tw_width < 80){tw_width=80;}}else{ tw_width=182;}
if(typeof(tw_height) != "undefined"){if(tw_height < 180){tw_height=180;}}else{ tw_height=325;}
if(typeof(no_face) == "undefined"){no_face=20;}
if(typeof(tw_user) == "undefined"){ tw_user='matias30302000';}
if(typeof(tw_color) == "undefined"){ tw_color='light';}
function dominio_base(){url_site = document.location.href;url_pos = url_site.indexOf('//');url_limpia = url_site.substr(url_pos+2);url_prot = url_site.substr(0,url_pos+2);url_split = url_limpia.split('/');url_base = url_prot + url_split[0];return url_base;} 
document.getElementById('twitter-box').innerHTML='\<iframe src=\"http://www.twitter-fanbox.com/twitter.html?user='+tw_user+'&no='+no_face+'&h='+tw_height+'&t='+tw_color+'&url='+dominio_base()+'\" scrolling=\"no\" frameborder=\"0\" style=\"border:none; overflow:hidden; width:'+tw_width+'px; height:'+tw_height+'px;\" allowTransparency=\"true\">\</iframe>';