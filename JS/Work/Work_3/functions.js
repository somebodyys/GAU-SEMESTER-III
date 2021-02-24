function charCounter(text, symbol){
    var result = 0;

    for (let i = 0; i < text.length; i++){
        if(text[i] == symbol){
            result += 1;
        }
    }

    return result;
}

function stringGenerator(size){

    result = ""
    for (let i = 0; i < size; i++){
        rand = Math.floor(Math.random() * 25 + 97)
        result += String.fromCharCode(rand)
    }
    return result

}


function articleGenerator(k, m, n){
    result = "";

    for (let i = 0; i < k; i++){
        result += stringGenerator(Math.floor(Math.random() * (n - m) + m)) + " "
    }

    return result;
}

function generate(){
    word_min_letters = $("#min_letter").val()
    word_max_letters = $("#max_letter").val()
    min_word_article = $("#min_article").val()
    max_word_article = $("#max_article").val()
    articles = $("#count_article").val()
    laguage = $("#language").val()
    
    result = ``
    for (let i = 0; i < articles; i++){
        result += `Article ${i+1} :\n\n`

        result += articleGenerator(Math.floor(Math.random() * (max_word_article - min_word_article) + min_word_article), word_min_letters, word_max_letters)

        result += "\n\n\n"
    }

    document.getElementById("result_field").innerHTML = result
}

function replaceString(text, wordToHide){
    return (text.replace(new RegExp(wordToHide, 'g'), "*".repeat(wordToHide.length)))
}

function bad_string_filter(text, badWordBase){
    for (let i = 0; i < badWordBase.length; i++){

        if(text.includes(badWordBase[i])){
            text = replaceString(text, badWordBase[i])
        }
    }

    return text
}   


function uniqueChars(text){

    result = `${text} <br><br>`
    allChars = text.split("")
    var counter = {}
    allChars.forEach(function(i) {
        counter[i] = (counter[i] || 0) + 1;
    })

    
    Object.keys(counter).forEach(function(i){
        result += i;
    })
    result += `<br><br>`
    Object.keys(counter).forEach(function(j){
        k = j
        if(j == " ") j = "Space"
        result += `${j} : ${counter[k]}<br>`

    })

    

    return result;
}

