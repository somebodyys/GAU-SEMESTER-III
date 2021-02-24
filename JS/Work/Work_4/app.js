function currentTime(){
    result = ``
    dateTime = new Date();
    hour = dateTime.getHours()
    minute = dateTime.getMinutes()
    second = dateTime.getSeconds()

    if(hour < 10) hour = `0${hour}`;
    if(minute < 10) minute = `0${minute}`
    if(second < 10) second = `0${second}`

    result += `${hour}:${minute}:${second}`

    return result
}

function weekDiff(yearStart, newDate){
    return `There is ${Math.floor((newDate - yearStart)/604800000)} Full Weeks`
}   

function dayDiff(yearStart, newDate){

    return `There is ${Math.floor((newDate - yearStart) / 86400000)} days Difference from ${yearStart.getFullYear()} Begining to ${newDate}`
}

function timeDiff(oldD, newD){
    diff_ms = newD - oldD;
    days = Math.floor(diff_ms / 86400000);
    hours = Math.floor((diff_ms - (days * 86400000)) / 3600000)
    minutes = Math.floor((diff_ms - (days * 86400000 + hours * 3600000)) / 60000)
    seconds = Math.floor((diff_ms - (days * 86400000 + hours * 3600000 + minutes * 60000)) / 1000)
    return `Days : ${days} Hours : ${hours} Minutes : ${minutes} Seconds : ${seconds}`
}

function updateClock(){
    document.getElementById("clock1").innerHTML = currentTime();
}