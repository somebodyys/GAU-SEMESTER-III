
var items = document.getElementsByClassName("item")

var images = ["1.jpg", "2.jpg", "3.jpg", "4.jpg"]

function start(){
    myInterval = setInterval(function(){
        for(let i = 0; i < items.length; i++){
            let index = Math.floor(Math.random() * 4)
            let inner = `<img src="./Images/${images[index]}" alt="">`
            items[i].innerHTML = inner
        }
    }, 1000)
}

function stop(){
    clearInterval(myInterval);
}

start();