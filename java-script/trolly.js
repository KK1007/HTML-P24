let c= document.getElementById('count');
let d= document.getElementById('count1');
let p= document.getElementById('price');

let v=0;
function inc(){
   v++;
   c.innerHTML=v;
   d.innerHTML=v;
   p.innerHTML=287*v;
}

function dec(){
      if(v==0){
          return false;
              }
      v--;
      c.innerHTML=v;
      d.innerHTML=v;
      p.innerHTML=287*v;
}






