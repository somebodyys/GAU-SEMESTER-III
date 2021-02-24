#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int GCD(int a, int b){
    while(a&&b){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}





main(){

    int p,q, N, F;
    cin >> p >> q;

    N = p * q;
    F = (p - 1) * (q - 1);

    int keyOne;
    for(int i = 0; i < F; i++){
        if(GCD(i, F) == 1 && GCD(i, N) == 1){
            keyOne = i;
        }
    }

    int keyTwo = 1;
    while((keyOne * keyTwo) % F != 1 || keyOne == keyTwo){
        keyTwo++;
    }
    

    cout << "Enter Text : ";
    string text, crypted;
    cin >> text;

    for(char i : text){
        int tempCode = int(i);
        int tempPow = pow(tempCode, keyOne);
        int encrypted = tempPow % N;

        cout << encrypted;
    }

    
}   