#include <iostream>
#include <cmath>

int GCD(int a, int b){
    while(a&&b){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

/*
Print the message Hello, Python!
*/
void task1(){
    std::cout << "Hello, Python!";
}

/*
Read one integer and print the next integer.
*/
void task2(){
    int num;
    std::cin >> num;
    std::cout << (++num);
}

/*
Read one integer and print the previous integer.
*/
void task3(){
    int num;
    std::cin >> num;
    std::cout << (--num);
}


/*
n natural numbers are given. 
Write a program that calculates the greatest common divisor of these numbers.
*/
void task4(){
    int count, result = 0;
    std::cin >> count;
    for(int i = 0; i < count; i++){
        int temp;
        std::cin>>temp;
        result = GCD(result, temp);
    }
    std::cout << result;
}


/*
Write a program that prints the values of a function y = 3 · sin(x) 
on segment from a to b inclusively with step h.

Print in each line two numbers x and y, ascending x with three decimal digits.
*/
void task5(){
    float a, b, h;
    std::cin >> a >> b >> h;
    for(float x = a; x <= b; x+=h){
        printf("%.3f %.3f\n", x, (3*sin(x)));
    }
}

/*
Find the remainder after dividing the last digit by the first in the given positive three-digit integer.
Print the desired remainder.
*/
void task6(){
    int num, last, first;
    std::cin>>num;

    last = num%10;
    first = num / 100;
    std::cout << (last%first);

}

/*
Find the square of sum of digits for a four digital positive integer.
Print the square of sum of digits for a given number.
*/
void task7(){
    int num, sum = 0;
    std::cin >> num;

    while(num){
        sum += num % 10;
        num /= 10;
    }

    std::cout << sum*sum;
}



main(){
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    task7();
}