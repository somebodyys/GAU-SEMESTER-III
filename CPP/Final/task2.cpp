#include <iostream>
#include <time.h>
#include <vector>



template<typename type>
std::vector<int> minList(type& input){
    std::vector<int> result;
    for(int row = 0; row < 4; row++){
        int tempMin = input[row][0];
        for(int col = 1; col < 4; col++){
            if(input[row][col] < tempMin){
                tempMin = input[row][col];
            }
        }
        result.push_back(tempMin);
    }

    std::cout << "\n(From Function) Min Matrix By Row : { ";
    for(int i : result){
        std::cout << i << "  ";
    }
    std::cout << "}\n";
    return result;
}



main(){
    srand(time(NULL));
    int matrix[4][4], minMatrix[4];

    std::cout << "\nStarting Matrix : " <<std::endl;
    for(int i = 0; i < 4; i++){
        for(int  j = 0; j < 4; j++){
            matrix[i][j] = rand() % 100 - 50;
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::vector<int> minVector = minList(matrix);


    std::cout << "\n(From Main) Min Matrix By Row : { ";
    for(int i = 0; i < 4; i++){
        minMatrix[i] = minVector[i];
        std::cout << minMatrix[i] << "  ";
    }
    std::cout << "}\n";
}