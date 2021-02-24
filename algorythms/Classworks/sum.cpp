#include <iostream>
#include <cmath>
using namespace std;




main(){
    
    int num, sum = 0, mult = 1;
    double result;
    cin >> num;
    while(num){
        sum += num%10;
        mult *= num%10;
        num/=10;
    }

    result = mult/sum;

}

