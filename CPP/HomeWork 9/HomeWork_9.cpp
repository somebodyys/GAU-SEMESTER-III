#include <iostream>
using namespace std;

void arrayMaxMinIndex(int numbers[], int matrixLength){
    int max = numbers[0], min = numbers[0], max_index = 0, min_index= 0;
    
    for(int i = 1; i < matrixLength; i++){
        if(numbers[i] > max){
            max = numbers[i];
            max_index = i;
        }

        if(numbers[i] < min){
            min = numbers[i];
            min_index = i;
        }
    }
    cout << "\nMAX["<<max_index<<"] = " << max << endl;
    cout << "MIN["<<min_index<<"] = " << min << endl;
}

main(){

    int size;
    cout << "\nSize : ";
    cin >> size;
    int matrix[size];

    cout << "Data : ";
    for(int i = 0; i < size; i++){
        cin >> matrix[i];
    }

    arrayMaxMinIndex(matrix, size);
}