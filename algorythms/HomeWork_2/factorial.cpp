#include <iostream>

using namespace std;

unsigned long long int factorial(unsigned long int num){
    if (num == 0 | num == 1){
        return 1;
    }

    return num * factorial(num - 1);
}


main(){

    unsigned long int number;

    cout << "\nNumber = ";
    cin >> number;
    cout << number << "! = " << factorial(number) << endl;
}