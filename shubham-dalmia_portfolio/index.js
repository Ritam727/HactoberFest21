var menu = document.getElementById("navbar");

window.addEventListener('scroll', function() {
  var scroll = window.pageYOffset || document.documentElement.scrollTop || document.body.scrollTop || 0;

    if (scroll > 500) {
      
     document.getElementById("navbar").style.color="#ff0000";
    } else {
      menu.css('background-color','blue');
    }
});


/* 
var scroll = window.scrollTop();
var scrollTop =  window.pageYOffset || document.documentElement.scrollTop || document.body.scrollTop || 0;

*/


/* 
window.scroll(function() { 
    var scroll = $(window).scrollTop();

    if (scroll > 500) {
        $('.menu').css('background-color','yellow');
    } else {
        $('.menu').css('background-color','blue');
    }
});
*/
