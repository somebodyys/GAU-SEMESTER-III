function generateRandom(){
    let result = ""
    let times = Math.floor(Math.random() * 50 + 50);
    for(let i = 0; i < times; i++){
        let randChar = Math.floor(Math.random() * (122 - 97) + 97);
        let randSpace = Math.floor(Math.random() * 2 + 1)
        if(randSpace > 1.9){
            result += " ";
        }
        result += String.fromCharCode(randChar);
    }
    document.getElementById("out").value = result
}


function change(){
    var input = document.getElementById("in").value
    var choice = document.getElementById("choice").value
    var result = ""

    for(let i = 0; i < input.length; i++){
        if(input[i] != choice){
            result += input[i]
        }
    }

    document.getElementById("in").value = result
}