#include <iostream>
#include <vector>
using namespace std;


template<typename dimTwo>
vector<int> function1(dimTwo& input){
    vector<int> result;
    int mult = 1;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int temp = input[i][j];
            if(temp % 2 == 0){
                mult *= temp;
            }
        }
        result.push_back(mult);
        mult = 1;
    }
    return result;
}

template<typename dimTwo>
vector<int> function2(dimTwo& input){
    vector<int> result;
    int max = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int temp = input[j][i];
            max = temp > max ? temp : max;
        }
        result.push_back(max);
        max = 0;
    }
    return result;
}


template<typename dimTwo>
vector<int> function3(dimTwo& input){
    vector<int> result;

    int counter = 1;
    for(int i = 0; i < 5; i++){
        int temp = input[i][0];
        if(temp > 0){
            for(int j = 1; j < 5; j++){
                if(input[i][j] > 0){
                    counter++;
                }
            }
            result.push_back(counter);
            counter = 1;
        } else if(temp < 0){
            for(int j = 1; j <5; j++){
                if(input[i][j] < 0){
                    counter++;
                }
            }
            result.push_back(counter);
            counter = 1;
        }else{
            for(int j = 1; j < 5; j++){
                if(input[i][j] == 0){
                    counter++;
                }
            }
            result.push_back(counter);
            counter = 1;
        }
    }

    return result;
}

main(){

    int matrix[5][5] ={
        {-4,3,11,66,-25},
        {-22,-11,5,8,36},
        {11,10,87,-5,9},
        {27,-6,18,31,12},
        {0,84,2,1,0}
    }; 

    int mult = 1;
    vector<int> byRow;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int temp = matrix[i][j];
            if(temp % 2 != 0){
                mult *= temp;
            }
        }
        
        byRow.push_back(mult);
        mult = 1;
    }

    // for(int i : byRow){
    //     cout << i << " ";
    // }

    // vector<int> evenMult = function1(matrix);
    // for(int i : evenMult){
    //     cout << i << " ";
    // }

    // vector<int> byCol = function2(matrix);
    // for(int i : byCol){
    //     cout << i << " ";
    // }

    vector<int> test = function3(matrix);
    for(int i : test){
        cout << i << " ";
    }
}