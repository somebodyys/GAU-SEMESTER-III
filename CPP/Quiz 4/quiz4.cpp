#include <iostream>
#include <time.h>
using namespace std;


template<typename twoDim>
void task1(twoDim& input){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            for(int k = j + 1; k < 6; k++){
                if(input[i][k] < input[i][j]){
                    int temp = input[i][j];
                    input[i][j] = input[i][k];
                    input[i][k] = temp;
                }
            }
        }
    }


    cout << "\nThis is sorted By Row : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << input[i][j] << "\t";
        }
        cout << endl;
    }
}

template<typename twoDim>
void task2(twoDim& input){

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 5; j++){
            for(int k = j + 1; k < 5; k++){
                if(input[k][i] > input[j][i]){
                    int temp = input[j][i];
                    input[j][i] = input[k][i];
                    input[k][i] = temp;
                }
            }
        }
    }


    cout << "\nThis is sorted By Column : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << input[i][j] << "\t";
        }
        cout << endl;
    }
}





main(){
    srand(time(NULL));
    int myMatrix[5][6];

    cout << "This is First Matrix : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            myMatrix[i][j] = rand() % 101 - 50;
            cout << myMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    task1(myMatrix);
    task2(myMatrix);
}