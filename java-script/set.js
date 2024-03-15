// let y = setInterval(() => document.write("hello"),1000)

// setTimeout(()=> clearInterval(y),1000)




let u = new Date();
document.write(u)
document.write("<br><br>")

document.write(u.toLocaleTimeString())
document.write("<br><br>")

document.write(u.toLocaleDateString())
document.write("<br><br>")




let s = setInterval(() => {
                    let a = new Date();
                    let b = a.toLocaleTimeString();
                    document.write(b+"<br>")
},1000);
setTimeout(()=> clearInterval(s),1000)





