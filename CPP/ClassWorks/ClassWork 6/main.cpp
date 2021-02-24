#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void task1(){
    double b = 2.2, y;

    for(float c = 5; c < 10; c += 0.5){
        float x = 2.2;
        cout << "\nC = " << c <<endl;
        while(x <= 3.3){
            y = sqrt((x*x + pow(sin(b), 2))/(cos(x) + c));
            cout << "x = " << x << "   y = " << y << endl;
            x += 0.1;
        }
    }

}

void task2(){

    for(int i = 1; i < 15; i += 2){
        cout << i << endl;
    }

    for(int i = 2; i < 15; i +=2){
        cout << i << endl;
    }

    for(int i = 0; i < 15; i++){
        if(i % 2 == 0) cout << i << endl;
    }

    for(int i = 0; i < 15; i++){
        if(i % 2 != 0) cout << i << endl;
    }

}

void task3(){

    for(int i = -10; i < 10; i++){
        if(i >= 0) cout << i << endl;
    }
}

void task4(){

    srand(time(NULL));

    for(int x = 1; x <= 5; x++){
        float a = rand() % 100 - 50, y;
        if(a < 10){
            y = a * x + 1;
            cout << "\nX = " << x << "   a = " << a << "   y = " << y << endl;
        } else if (a > 20){
            y = 0.5*x*(1 - a*x);
            cout << "\nX = " << x << "   a = " << a << "   y = " << y << endl;
        } else {
            cout << "\nNot Calculated" << "  a = " << a <<endl;
        }

        
    }
}


void task5(){

    for(float x = 2; x <= 4; x += 0.2){
        cout << "\nx = " << x << endl;
        float a = -2, y;
        while(a <= 2){
            if(a < 1 && a != 0){
                y = (x + 1)/a;
                cout << "a = " << a << "  y = " << y << endl;
            } else if (a >= 1){
                y = a + log(x + 1);
                cout << "a = " << a << "  y = " << y << endl;
            }
            a += 0.5;
        }
    }
}

main(){
    task5();
}
