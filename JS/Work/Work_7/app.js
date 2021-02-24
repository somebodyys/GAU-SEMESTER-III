//Functions For Calendar
function getDate(date) {
    return date.getDate()
}

function getMonth(date) {
    return date.toLocaleString('default', { month: 'long' });
}

function getYear(date) {
    console.log(date)
    return date.getFullYear();
}

function retYear(){
    return document.getElementById("fastYear").innerHTML
}
function getFormatedTime(date) {
    return date.toLocaleTimeString();
}
function getMonthLimit(month) {
    var limits = {
        "January": 31,
        "February": 29,
        "March": 31,
        "April": 30,
        "May": 31,
        "June": 30,
        "July": 31,
        "August": 31,
        "September": 30,
        "October": 31,
        "November": 30,
        "December": 31
    }
    return limits[month]
}

function getCalendarTable(date) {
    document.getElementById("fastDay").innerText = getDate(date);
    document.getElementById("fastMonth").innerText = getMonth(date);
    document.getElementById("year").innerText = getYear(date);
    setInterval(function () {
        document.getElementById("time").innerText = getFormatedTime(new Date());
    }, 1000)
    result = `
        <tr>
            <th>Mo</th>
            <th>Tu</th>
            <th>We</th>
            <th>Th</th>
            <th>Fr</th>
            <th>Sa</th>
            <th>Su</th>
        </tr> 
    
    `
    var startDate = new Date(date.getFullYear(), date.getMonth(), 1)
    var temp = startDate.getDay();
    var counter = 1;
    for (let i = 0; i < 6; i++) {
        result += `<tr>`
        if (i == 0) {
            for (let k = 0; k < startDate.getDay(); k++) {
                result += `<td></td>`
            }

            for (let j = 0; j < 7 - startDate.getDay(); j++) {
                if (counter == getDate(date)) {
                    result += `<td style="box-shadow: rgba(51, 128, 51, .5) 0px 0px 15px; border-radius:10px;">${counter}</td>`
                    counter += 1
                } else {
                    result += `<td>${counter}</td>`
                    counter += 1
                }

            }
        } else {
            for (let j = 0; j < 7; j++) {
                if (counter <= getMonthLimit(getMonth(date))) {

                    if (counter == getDate(date)) {
                        result += `<td style="box-shadow: rgba(51, 128, 51, .5) 0px 0px 15px; border-radius:10px;">${counter}</td>`
                        counter += 1
                    } else {
                        result += `<td>${counter}</td>`
                        counter += 1
                    }
                }
            }
        }

        result += `</tr>`
    }

    return result
}

function setCalendar(date){
    document.getElementById("innerCalendar").innerHTML = getCalendarTable(date);
}

function previous(){
    console.log(1)
    date = new Date(date.getFullYear(), date.getMonth() - 1)
    setCalendar(date)
}

function next(){
    console.log(2)
    date = new Date(date.getFullYear(), date.getMonth() + 1)
    setCalendar(date)
} 


//Here starts second task
function parentN(outerWrapper){
    outerWrapper.firstElementChild.style.background = "red"
}


function fchild(outerWrapper){
    outerWrapper.firstElementChild.firstElementChild.style.background = "red"
}

function nxtSibl(outerWrapper){
    outerWrapper.firstElementChild.firstElementChild.nextElementSibling.style.background = "red"
}