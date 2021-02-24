#include <iostream>
#include <cmath>
using namespace std;


void task1(){
    float a, b, x, y;
    cout << "Enter a b x : ";
    cin >> a >> b >> x;
    if(a > 0){
        y = (exp(2*x) * sin(sin(b + x) - 1))/(a*a + x);
        cout << "Y = " << y << endl;
    }  else{
        cout << "Enter Positive a" << endl;
    }
} 

float task2(){
    float x, a;
    cout << "Enter x : ";
    cin >> x;

    a = sqrt(pow(1 - cos(x), 3));

    if(a == 1) return a * x;
    if(a < 1) return exp(x); return sqrt(1 + a * x * x);
}

float task3(float num1, float num2, float num3){
    float min = num1;

    if (num2 < min) min = num2;
    if (num3 < min) min = num3;

    return min;
}

float task4(float x, float a){
    if(x != 0){
        if(a < 1.5) return (a * x * x); return 1/x;
    }

    return 0;
}

float task5(float x, float a){
    if(a != 0 && x > 0){
        if(x < 1) return (x + 1) / a; return (a + log(log(x + 1)));
    }

    return 0;
}

float task6(float x, float a){
    if(a != x){
        if(a > 0) return a + x*x; return 1/(a - x);
    }

    return 0;
}
main(){
    //task1();
    // cout << task2();
    // cout << "MIN = " << task3(-5, 9, -22);
    // cout << "Y = " << task4(3, 6);
    // cout << "Y = " << task5(6, 15);
    cout << "Y = " << task6(7, 13);
}