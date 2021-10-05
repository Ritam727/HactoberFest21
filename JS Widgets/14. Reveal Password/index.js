var btn  = document.getElementById('showOrHidePassword');
btn.onmousedown = showPassword;
btn.onmouseup = hidePassword;

var password = document.getElementById('password');

function showPassword(){
    password.setAttribute("type","text");
    btn.style.opacity =1;
}

function hidePassword(){
    password.setAttribute("type","password");
    btn.style.opacity = 0.5;
}
