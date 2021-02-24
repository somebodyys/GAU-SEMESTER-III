#include <iostream>
#include <cmath>
using namespace std;

void task1(){
    int n;
    cin >> n;

    for(int i = 0; i < 2*n + 1; i++){

        if(i == n){
            for(int k = 0; k < 2*n + 1; k++){
                cout << "*";
            }
            cout << endl;
            continue;
        }
        for(int j = 0; j < n; j++){
            cout << ".";
        }
        cout << "*";
        for(int j = 0; j < n; j++){
            cout << ".";
        } 

        cout << endl;
    }
}

float max(float x, float y){
    if(x > y) return x; return y;
}

float min(float x, float y, float z){
    float min = x;

    if(y < min) min = y;
    if(z < min) min = z;

    return min;
}

int GCD(int a, int b){
    while(a&&b){
        if(a > b) a %= b;
        else b %= a;
    }

    return a + b;
}

main(){
    int x, y;
    cin >> x >> y;
    cout << x/GCD(fabs(x), fabs(y)) << "  " << y / GCD(fabs(x), fabs(y));

}