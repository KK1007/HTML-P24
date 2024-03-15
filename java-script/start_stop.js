let a= document.getElementById('h');
let c= document.getElementById('stp');
v=0

function strt(){ 
                  setInterval(()=>{document.write("1")},1000)
                  a.innerHTML=v;   
}

function stp(){
                    setTimeout(()=> clearInterval(),4000)
}
