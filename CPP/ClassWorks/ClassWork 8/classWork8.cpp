#include <iostream>

using namespace std;

main()
{
    // int numbers[] = {4, -9, 20, 5, 11, 27, 30, 7, 16, -22};
    // //sum
    // int sum = 0;
    // for(int i = 0; i < 10; i++){
    //     sum += numbers[i];
    // }
    // cout << "Sum = " << sum << endl;
    // //multiply
    // int mult = 1;
    // for(int i = 0; i < 10; i++){
    //    mult *= numbers[i]; 
    // }
    // cout << "Mult = " << mult << endl;
    // //positive
    // for(int i = 0; i < 10; i++){
    //     int temp = numbers[i];
    //     if(temp > 0){
    //         cout << temp << "  ";
    //     }
    // }
    // //negative
    // for(int i = 0; i < 10; i++){
    //     int temp = numbers[i];
    //     if(temp < 0){
    //         cout << temp << "  ";
    //     }
    // }


    int numbers[] = {10, -9, 28, 16, 3, -5, 16, 32, -33, 20};

    
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(numbers[j] < numbers[i]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }


    for(int i = 0; i < 10; i++){
        cout << numbers[i] << endl;
    }
}