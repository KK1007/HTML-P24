let c= document.getElementById('count');
let d= document.getElementById('count1');
let v=0;

function inc(){
   v++;
   c.innerHTML=v;
   d.innerHTML=v;
}


function dec(){
      if(v==0){
          return false;
              }
      v--;
      c.innerHTML=v;
      d.innerHTML=v;
}