function displayDay(day) {
    var days = {
        "1": "ორშაბათი",
        "2": "სამშაბათი",
        "3": "ოთხშაბათი",
        "4": "ხუთშაბათი",
        "5": "პარასკევი",
        "6": "შაბათი",
        "7": "კვირა",
    }

    document.getElementById("day").value = days[`${day}`];
}


function generate() {

    var result = ``
    var min = document.getElementById("MIN").value;
    var max = document.getElementById("MAX").value;
    var count = document.getElementById("count").value;


    for (let i = 0; i < count; i++) {
        result += `${Math.floor(Math.random() * (max - min) + min)}  `;
    }

    document.getElementById("randBox").innerHTML = result;
}

function getFormattedNumber(num) {
    if (num == "-") {
        return "";
    }
    var n = Number(num);
    var value = n.toLocaleString("en");
    return value;
}

function getHistory() {
    return document.getElementById("history").innerHTML;
}

function setHistory(history) {
    document.getElementById("history").innerHTML = history
}

function getInput() {
    return document.getElementById("input").innerHTML;
}

function setInput(input) {
    if (input == "") {
        document.getElementById("input").innerHTML = input;
    } else {
        document.getElementById("input").innerHTML = getFormattedNumber(input)
    }

}

function reverseNumberFormat(num) {
    return Number(num.replace(/,/g, ''));
}

function clearAll() {
    document.getElementById("history").innerHTML = "";
    document.getElementById("input").innerText = "";
}

var numbers = document.getElementsByClassName("number");
for (var i = 0; i < numbers.length; i++) {
    numbers[i].addEventListener('click', function () {
        var input = reverseNumberFormat(getInput())
        if (input != NaN) {
            input += this.id;
            setInput(input)
        }
    })
}

var operator = document.getElementsByClassName("operator");
for (var i = 0; i < operator.length; i++) {
    operator[i].addEventListener('click', function () {
        var input = reverseNumberFormat(getInput());
        var history = getHistory();
        if (this.id == "√") {
            setInput(Math.sqrt(input))
            
        } else if (this.id == "^") {
            if(history == ""){
                setHistory(`${input}^`)
                setInput("")
            }

            if(input != "" && history != ""){
                setHistory("")
                setInput(Math.pow(parseInt(history.substring(0, history.length - 1)), input))                
            }

        } else {
            
            if (history != "" && input == "") {
                setHistory(history.substring(0, history.length - 1) + this.id)
            }

            if (history != "" && input != "") {
                setHistory("")
                setInput(eval(history + input))
            }

            if (history == "" && input != "") {
                setHistory(input + this.id)
                setInput("")
            }
        }


    })

    
}


function calcInterest(){
    var invest = document.getElementById("invest").value
    var rate = document.getElementById("rate").value
    var years = document.getElementById("years").value

    var gain = invest * rate * years / 100;
    document.getElementById("gain").innerHTML = `$${gain}`
    document.getElementById("total").innerHTML = `$${parseInt(gain) + parseInt(invest)}`
}

function compoundInterest(){
    var invest = document.getElementById("invest").value
    var rate = document.getElementById("rate").value / 100
    var years = document.getElementById("years").value
    var perYear = document.getElementById("perYear").value

    var total = invest * Math.pow((1 + rate/perYear), perYear * years)
    document.getElementById("total").innerHTML = `$${total.toFixed(2)}`
    document.getElementById("gain").innerHTML = `$${(total - invest).toFixed(2)}`
}




