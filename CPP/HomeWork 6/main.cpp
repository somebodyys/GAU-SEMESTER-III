#include <iostream>
#include <cmath>
using namespace std;

void task1(){
    int a = 5;
    float y = 0, z = 1;
    cout << "\na = " << a << endl;
    for (int x = 1; x <= 4; x++){
        y += sqrt(x*x + 7*x);
        z *= ((40*x)/(sin(a)));

        cout << "x = " << x << "  y = " << y << "  z = " << z << endl;
    }

}

void task2(){
    float y, a = 0.5, x = -0.5, h = 0.1;
    cout << "\n a = " << a << "   h = " << h << endl;
    while(x <= 0.5){
        y = a * sin(x);
        cout << "x = " << x << "  y = " << y << endl; 
        x += h;
    }
}

void task3(){
 
    float x = -2, h = 0.2, y;

    do{
        y = exp(x);
        cout << "x = " << x << "  y = " << y << endl;
        x += h;
 
    } while (x < 2.2);

}


main(){

    // task1();
    // task2();
    task3();

}