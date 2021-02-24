#include <iostream>
#include <time.h>
#include <cmath>
#include <vector>

using namespace std;


void maxMin(){

    srand(time(NULL));
    int nums[4][5], min=0, max = 0;


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            nums[i][j] = rand() % 201 - 100;
            cout << nums[i][j] << "\t";
            if(nums[i][j] < min){
                min = nums[i][j];
            }
            if(nums[i][j] > max){
                max = nums[i][j];
            }
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "Max = " << max << "  Min = " << min << endl;

}

void task5(){

    int matrixOne[5][4], matrixTwo[5][4];

    srand(time(NULL));

    cout << "\nFirst Matrix : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            matrixOne[i][j] = rand() % 301 - 150;
            matrixTwo[i][j] = matrixOne[i][j] * matrixOne[i][j];
            cout << matrixOne[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSecond Matrix : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cout << matrixTwo[i][j] << "\t";
        }
        cout << endl;
    }
}

void task6(){

    int matrixOne[6][6], matrixTwo[6][6], matrixTree[6][6];

    srand(time(NULL));
    for(int i = 0; i <6; i++){
        for(int j = 0; j < 6; j++){
            matrixOne[i][j] = rand() % 101 - 30;
            matrixTwo[i][j] = rand() % 85 - 24;
            matrixTree[i][j] = matrixOne[i][j] + matrixTwo[i][j];
            cout << matrixTree[i][j] << "\t";
        }
        cout << endl;
    }
}

void task7(){
    int matrixOne[5][5], matrixTwo[5][5];
    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrixOne[i][j] = rand() % 70 - 35;
            if(i + 1 <= 5){
                matrixTwo[i+1][j] = matrixOne[i][j];
            }
            cout << matrixOne[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < 5; i++){
        matrixTwo[0][i] = matrixOne[4][i];
    }


    cout << "\nMatrix Two : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrixTwo[i][j] << "\t";
        }
        cout << endl;
    }
}

void task8(){
    int matrixOne[5][5], matrixTwo[5][5];
    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrixOne[i][j] = rand() % 70 - 35;
            if(j + 1 <= 5){
                matrixTwo[i][j + 1] = matrixOne[i][j];
            }
            cout << matrixOne[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < 5; i++){
        matrixTwo[i][0] = matrixOne[i][4];
    }

    cout << "\nMatrix Two : " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrixTwo[i][j] << "\t";
        }
        cout << endl;
    }
}

void task9(){
    srand(time(NULL));
    int matrix[10], nulls = 0;

    for(int i = 0; i < 10; i++){
        matrix[i] = rand() % 5 - 2;
        cout << matrix[i] << " ";
        if(matrix[i] == 0) nulls++;
    }
    cout << "\nNULLS : " << nulls << endl;
}

void task10(){

    float max = 0; 
    for(float x = 1; x <= 5.5; x += 0.5){
        float temp = (2* x*x)/(sqrt(x));
        if(temp > max) max = temp;
    }
    cout << "MAX : " << max;
}
main(){
    task10();
}