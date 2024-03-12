function validate(){
  let namee= document.getElementById('name').value;
let contact= document.getElementById('contact').value;
let password= document.getElementById('password').value;
let confirm_password= document.getElementById('confirm_password').value;

  if(namee==""){
      alert("please fill your name")
      return false;
  }
  else if(contact.length<10 || contact.length>10){
    alert("add valid number")
    document.getElementById('contact').focus();
     return false;
  }

  else if(isNaN(contact)){
    alert("enter only number")
    return false;
  }

  else if (!(password.match(/[~ ! @ # $ % & *]/))){
    alert("please enter special character")
    document.getElementById('password').focus();
    return false;
  }

  else if(password!=confirm_password){
    alert("password does not match")
    document.getElementById('confirm_password').focus();
    return false;
  }
}