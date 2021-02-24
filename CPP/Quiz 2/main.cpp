#include <iostream>
#include <cmath>
using namespace std;

void task1(){
    cout << "TASK 1 : " << endl;
    float z, y;

    for(float a = 1; a <= 2.8; a += 0.4){
        cout << "\na = " << a << endl << endl;
        for(float b = 1; b <= 3; b += 0.3){
            z = 0.57 * a * a * a + 0.68 * sin(b);
            if(z < 0){
                y = z*z + 2;
            } else if(z > 1){
                y = pow((z*z*z + 2), 1/4);
            } else {
                y = sqrt(z*z*z + 2);
            }

            cout << "b = " << b << "   z = " << z << "  y = "<< y << endl;
        }
    }

    cout << "\n\n\n";
}

void task2(){

    cout << "TASK 2 :" << endl;
    float a = 1.5, b = 2.5, y;

    for(float x = -1; x <= 1.5; x += 0.1){
        float z = 1;
        cout << "\nx = " << x << endl << endl;
        while(z <= 2.5){
            y = a * x * x + b * x + z;
            cout << "z = " << z << "   y = " << y << endl;
            z += 0.2;  
        }

        // ასე იქნებოდა Do While შემთხვევაში
        // do{
        //     y = a * x * x + b * x + z;
        //     cout << "z = " << z << "   y = " << y << endl;
        //     z += 0.2;
        // } while(z <= 2.5);
    }

    // ხოლო ეს არის While ით და do while ით ერთიდა იგივე ამოცანა განსხვავებულად ამოხსნილი.
    // float x = -1;
    // while(x <= 1.5){
    //     cout << "\nx = " << x << endl << endl;
    //     float z = 1;
    //     do{
    //         y = a * x * x + b * x + z;
    //         cout << "z = " << z << "   y = " << y << endl;
    //         z += 0.2;
    //     } while(z <= 2.5);
    //     x += 0.1; 
    // }


}

main(){
    task1();
    task2();
}