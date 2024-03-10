let namee= document.getElementById('name').value;
let contact= document.getElementById('contact').value;
let password= document.getElementById('password').value;
let confirm_password= document.getElementById('confirm_password').value;

function validate(){
  if(namee==""){
      alert("please fill your name")
      return false;
  }
}