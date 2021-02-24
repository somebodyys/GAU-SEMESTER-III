#include <iostream>
#include <vector>
#include <cmath>

//დააბრუნებს გვერდის ციფრების ჯამს
int pageSum(int page){
    int result = 0;
    while(page){
        result += page%10;
        page /= 10;
    }
    return result;
}

//დააბრუნებს რიცხვში ციფრ 6 იანების რაოდენობას
int sixCalc(int num){
    int result = 0;
    while(num){
        if(num % 10 == 6){result++;}
        num /= 10;
    }
    return result;
}

//აბრუნებს ვექტორს, რომელშიც გამოთვლილი მონაცემებია ამოცანის ფუნქციის მიხედვით
std::vector<int> calculate(std::vector<int> data){
    std::vector<int> result;
    for(int i : data){
        long long temp = (i - sqrt(i)) + log(i) + (i * pow(sin(i), 2));
        result.push_back(abs(temp) % 1000000);
    }
    return result;
}


/*
Misha sometimes read books.But it did a strange way
:he always began with the first page and read the daily exactly as many pages 
as is the sum of digits of the page at which he began to read someday.
That is,the first day, he read one page, then two, four, eight and so on.
Help her father Misha figure out what day of his son reading a book, 
if it's Mike reads the k-th page of the book.

An integer indicating which day Mike is reading a book.
*/
void task1(){
    int currentPage, book = 1, day = 0;
    std::cin>>currentPage;

    while(book <= currentPage){
        book += pageSum(book);
        day++;
    }
    std::cout<<day;
}


/*
How many times will be written the digit 6 if to write 
sequentially all the positive integers from a to b?

The number of 6 in sequentially written integers from a to b.
*/
void task2(){
    int start, end, total=0;
    std::cin >> start >> end;
    if(start > end) std::swap(start, end);
    for(int i = start; i <= end; i++){
        total += sixCalc(i);
    }
    std::cout<<total;
}


/*
An evil professor has just assigned you the following problem. 
A sequence is defined by the following recurrence: x0 = 1,

For each value i determine the value xi.
For each value of i (but not the final -1) 
output the corresponding value of xi modulo 1000000.
*/
void task3(){
    std::vector<int> input;
    while(true){
        int temp;
        std::cin>>temp;
        if(temp == -1){break;}
        input.push_back(temp);
    }

    std::vector<int> calcualted = calculate(input);
    for(int i : calcualted){
        std::cout<<i<<std::endl;
    }
}

main(){
    // task1();
    // task2();
    task3();
}