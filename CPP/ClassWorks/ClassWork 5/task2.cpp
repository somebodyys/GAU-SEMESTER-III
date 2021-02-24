#include <iostream>
#include <cmath>
using namespace std;

main(){
    float b = 2.2, y;

    for(float c = 5; c <= 10; c += 0.5){
        cout << "\nc = " << c << endl << endl;
        for(float x = 2.2; x <= 3.3; x += 0.1){
            y = sqrt((x*x + sin(b)* sin(b))/(cos(x) + c));

            cout << "x = " << x << "    y = " << y <<endl;
        }
    }
}