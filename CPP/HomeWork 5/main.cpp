#include <iostream>
#include <cmath>
using namespace std;

float task1(){
    float x;

    input:
        cout << "\nEnter x : "; 
        cin >> x;
        if(x < 0 || x == 1){
            cout << "\n***** Only positive input is valid *****" << endl << endl;
            goto input;
        }

        return sin(x)/(x-1);
}

float task2(){
    float x, c;

    input:
        cout << "\nEnter x and c : ";
        cin >> x >> c;
        if(x < 0 || c < 0){
            cout << "\n***** Only positive input is valid *****" << endl << endl;
            goto input;
        }

        return (1.5 * sqrt(c + x))/(c + sin(sin(x)));

}


main(){
    // cout << task1();
    cout << task2();

}