#include <iostream>
#include <cmath>
using namespace std;


float input(string text=""){

    float result;
    cout << text;
    cin >> result;
    return result;
}

float task1(float b, float c, float x){

    float y, z;
    y = (2*(log(log(2*x + b) + 1))) / (sqrt(10*x*x + c)); 
    z = pow(y+1, 2);
    return z;
}

float task2(float b, float c, float x){

    float y, z;

    y = (sin(sin(x*x - b) + 2)) / (sqrt(x*x*x - 0.1));
    z = log(y + 5.5);    
    return z;
}