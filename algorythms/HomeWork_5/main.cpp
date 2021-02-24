#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;



/*
The infinite in both directions stripe with width 1 is divided into blocks of size 1 x 1. 
In one of these blocks the robot is located. It can move from one cell to another 
(the robot at the figure is marked with square). 
Its movements are determined by the program, 
each instruction is given by one of three capital letters: L, R, S. 
The instruction L says the robot to move one cell to the left, 
the instruction R - to move one square right, and S - to stay in the same cell. 
Program execution means the sequential execution of all instruction in it.
*/
void task1(){
    string input;
    cin >> input;

    long now = 10000;
    bool cells[20000];

    for(int i = 0; i < 20000; i++){
        cells[i] = false;
    }

    cells[now] = true;

    for(char i : input){
        if(i == 'L'){
            cells[++now] = true;
        }
        if(i == 'R'){
            cells[--now] = true;
        }
    }

    int counter = 0;
    for(int i = 0; i < 20000; i++){
        if(cells[i]){
            counter++;
        }
    }
    cout << counter;
}


/*
The student Vasya has a younger brother Peter, 
who went to the first class and started to learn arithmetic. 
At home in the first class he was asked to solve many problems using addition and subtraction. 
Peter asked Vasya to check the homework. Seeing the two-page written scrawl tests, 
Vasya was horrified by the amount of work and decided to teach Peter to use a computer for self checking. 
To do this, Vasya needs to write a program that computes the answers for the required arithmetic problems.
*/
void task2(){

    string input;
    int total = 0, num = 0;
    vector<int> nums;
    vector<char> operations;

    getline(cin, input);

    for(char i : input){

        if(i == '+' || i == '-'){
            operations.push_back(i);
            num /= 10;
            nums.push_back(num);
            num = 0;
            
        } else {
            num += int(i) - int('0');
            num *= 10; 
        }
    }
    nums.push_back(num/10);

    for(int i = 1; i < nums.size(); i++){

        if(operations[i - 1] == '-'){
            total -= nums[i];
        }else{
            total += nums[i];
        }
    }
    total += nums[0];

    cout << total;

}


/*
Two friends came to Vasyl with great news: they won in lottery n rubles. 
Since the lottery ticket was obtained as a short change during the overall purchase in the store, 
it was impossible to determine its owner. So it was decided to split the prize equally. 
Vasil wants to know whether its possible to divide the prize fairly.
*/
void task3(){
    string input;
    int sum = 0;
    getline(cin, input);

    for(char i : input){
        sum += int(i) - int('0');
    }

    string result = sum % 3 == 0 ? "Yes" : "NO";
    cout << result;
}


/*
Julius Caesar used his own method of encrypting text. 
Each letter is replaced by the following in alphabetical order by k positions in the circle. 
Given an encrypted text. Determine its original text.
*/
void task4(){
    string input;
    int code;
    getline(cin, input);
    cin >> code;

    for(char i : input){
        int result = int(i) - code;
        if(result < 65){
            result += 26;
        }
        cout << char(result);
    }
}


/*
Consists of a single line that contains only lowercase letters of the Latin alphabet and parentheses. 
Its length does not exceed 200 characters. This line describes the concatenation of several strings, 
some of which need to be reversed.
In the given line to the right of each opening bracket there is a closing, 
to the left of each closing bracket there is an opening, and there are no other 
brackets between the opening and closing brackets corresponding to each other and there must be at least one letter.
*/
void task5(){
    string input;
    cin >> input;

    string result = "";

    for(int i  = 0; i < input.length(); i++){

        if(input[i] == '('){
            string inner = "";
            while(input[i + 1] != ')'){
                inner += input[i + 1];
                i++;
            }

            string rev = "";
            for(int i = inner.length() - 1; i >= 0; i--){
                rev += inner[i];
            }
            result += rev;
        }else if(input[i] == ')'){
            continue; 
        }else{
            result += input[i];
        }
    }
    cout << result;

}


/*
The input consists of two lines. The first line is the "aaah" Jon Marius is able to say that day. 
The second line is the "aah" the doctor wants to hear. Only lowercase 'a' and 'h' will be used in the input, 
and each line will contain between 0 and 999 'a's, inclusive, followed by a single 'h'.
*/
void task6(){
    string one, two;
    cin >> one >> two;

    string result = one.length() < two.length() ? "NO" : "YES";
    cout << result;
}


/*
The bracket sequence is a correct arithmetic expression, from which all numbers and signs are removed. 
For example,

1 + ( ( ( 2 + 3 ) + 5 ) + ( 3 + 4 ) ) → ( ( ( ) ) ( ) )
*/
void task7(){
    string input;
    cin >> input;

    int counter = 0;
    for(char i : input){
        if(i == '('){
            counter++;
        }else{
            counter--;
        }
        if(counter < 0) break;
    }
    string result = counter == 0 ? "YES" : "NO";
    cout << result;
}

main(){
    task1();
}