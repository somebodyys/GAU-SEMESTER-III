#include <iostream>
#include <cmath>
using namespace std;


void possible(int primeN){
    int counter = 0;
    cout << "\nFor Prime : " << primeN <<endl;  
    for(int i = 1; i < primeN; i += 2){
        for(int j = i; j < primeN; j += 2){
            if((i * j) % (primeN) == 1){
                cout << "i = " << i << "  j = " << j << endl;
                counter++;
            }
        }
    }

    cout << "Total " << counter << " pairs." << endl << endl;

}


main(){

    // int max;
    // cout << "Enter Max Number : ";
    // cin>>max;

    // int numbers[max];

    // //Fill list
    // for(int i = 0; i < max; i++){
    //     numbers[i] = i;
    // }

    // //Mark Non-Prime Numebrs
    // for(int j = 2; j < max; j++){
    //     for(int i = j + 1; i < max; i++){
    //         if(numbers[i] % j == 0){
    //             numbers[i] = -1;
    //         }
    //     }
    // }

    // //Print Prime Numbers  
    // for(int i = 2; i < max; i++){
    //     if(numbers[i] != -1){
    //         possible(numbers[i]);
    //     } 
    // }

    possible(72);

}