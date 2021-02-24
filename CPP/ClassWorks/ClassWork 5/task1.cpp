#include <iostream>
#include <cmath>
using namespace std;

main(){
    float a = 1.1, y;

    for(float x = 3.5; x <= 4.5; x+=0.1){

        y = (x*sin(x))/(sqrt(a + sin(x)));
        cout << "x = " << x << "  y=" << y <<endl;  
    }

}