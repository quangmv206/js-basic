const usernameElement=document.getElementById("username");
const passwordElement=document.getElementById("password");
const btnLogin=document.getElementById("btnLogin");

btnLogin.addEventListener('click',()=>{
    const username=usernameElement.value;
    const password=passwordElement.value;
    if(username==="quangdz@gmail.com"&& password==="123"){
        alert("Đăng nhập thành công");
        window.location.href="success.html";
    }else{
        alert("Đăng nhập thất bại");
        usernameElement.style.borderColor="red";
        passwordElement.style.borderColor="red";
    }
});
