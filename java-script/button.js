let c= document.getElementById('count');
let v=0;

function inc(){
   v++;
   c.innerHTML=v;
}


function dec(){
      if(v==0){
          return false;
              }
      v--;
      c.innerHTML=v;
}