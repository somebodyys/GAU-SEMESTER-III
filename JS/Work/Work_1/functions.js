function decoration_1(text, class_name){
    return "<span class="+class_name+">"+text+"</span>"
}

function return_sum(num1, num2){
    result = num1+num2;
    return num1+"+"+num2+"="+ result  
}

function text_size_maker(text, size){
    return "<span style='font-size:"+size+"px'>"+text+"</span>"
}

function table_builder(width, height, bg_color="white", border_width){
    
    result = `
        <table style="width:`+width+`px; height:`+height+`px; background:`+bg_color+`;border-width:`+border_width+`px;">
            <tr>
                <td></td>
                <td></td>            
            </tr>
            <tr>
                <td></td>
                <td></td>
            </tr>
    
        </table>
        `;
    return result
    
}

function natural_number(start,end){

    if (start>end){
        point_a = end;
        point_b = start;
    } else if (start < end){
        point_a = start;
        point_b = end;
    } else{
        return "Wrong Parameters"
    }
    

    result = ""
    for (let i=point_a; i<=point_b; i++){
        result = result + i + "<br>" 
    }

    return result
}


function better_table_builder(row, col, width=100, height=100, bg_color="white", border=1){

    if (row > 0 && col > 0 && Number.isInteger(row) && Number.isInteger(col)){
        result = `<table style='width:${width}px; height:${height}px; background:${bg_color}; border-width:${border}px;'>`;

        for (let i = 0; i < row; i++){
            result += "<tr>";
            for (let j = 0; j < col; j++){
                result += "<td>" + i + ":" + j +"</td>";
            }
            result += "</tr>";
        }

        result += "</table>";
    } else {

        result = "Wrong Input";
    }
    
    return result
}

