$(function(){
    $('ul.parent > li').hover(function(){
        $(this).find('ul.child').slideDown(350);
    }, function(){
        $(this).find('ul.child').slideUp(350);
    });


    $('.item').hover(function(){
        $(this).addClass("zoomed");
        $('#main').slideUp(300).slideDown(300);
        $('#main').html(this.innerHTML);
        
        
    }, function(){
        $(this).removeClass("zoomed");
    });

});


