#include <iostream>
#include <cmath>
using namespace std;


void task1(){
    double a[3], y[] = {-3, -1, 0, 1.5, 3}, length = sizeof(y) / sizeof(y[0]);
    
    for(int i = 0; i < 3; i++){
        cout << "Enter a["<<i<<"] : ";
        cin >> a[i];
        cout << endl;
        for(int j = 0; j < length; j++){
            if(a[i] < 1){
                cout << "z = " << pow(y[j], 2) + pow(a[i], 3) << "\ty = " << y[j] << endl;
            } else if(a[i] >= 1){
                cout << "z = " << (log(pow(y[j], 2) + a[i]))/(y[j] + 1) << "\ty = " << y[j] << endl;
            }
        }

        cout << endl;
    }
}

void task2(){
    double a[] = {0.5, 1.5, 2};
    
    for(int j = 0; j < 3; j++){
        float temp = a[j];
        cout << "a = " << temp << endl;
        for(float x = 10; x <= 12; x += 0.2){
            if(temp < 1){
                cout << "y = " << temp * log(x) + atan(x) << "\tx = " << x << endl;
            } else if(temp > 2){
                cout << "y = " << x * x +1 << "\tx = " << x <<endl;
            } else {
                cout << "No Calculations!" << endl;
            }
        } 

        cout << endl;
    }
    
}



main(){
    task2();
    
}