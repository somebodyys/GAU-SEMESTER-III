

function start(){
    var hours = document.getElementById("h").value
    var minutes = document.getElementById("m").value
    var seconds = document.getElementById("s").value

    var result = ``

    if(hours < 24){
        
        document.getElementById('hourRes').innerHTML = "საათები სწორია"
        document.getElementById('hourRes').style.color = "green"
        if(hours < 10){
            result += "0"
        }
        result += hours
    } else {
        result += "00"
        document.getElementById('hourRes').innerHTML = "საათები არასწორია"
        document.getElementById('hourRes').style.color = "red"
    }


    if(minutes < 60){
        result += ":"
        document.getElementById('minResult').innerHTML = "წუთები სწორია"
        document.getElementById('minResult').style.color = "green"
        if(minutes < 10){
            result += "0"
        }

        result += minutes;
    } else {
        result += ":00"
        document.getElementById('minResult').style.color = "red"
        document.getElementById('minResult').innerHTML = "წუთები არასწორია"
    }

    if(seconds < 60){
        result += ":"
        document.getElementById('secondResult').innerHTML = "წამები სწორია"
        document.getElementById('secondResult').style.color = "green"
        if(seconds < 10){
            result += "0"
        }

        result += seconds
    }else{
        result += ":00"
        document.getElementById('secondResult').style.color = "red"
        document.getElementById('secondResult').innerHTML = "წამები არასწორია"
    }

    document.getElementById('result').innerHTML = result
}