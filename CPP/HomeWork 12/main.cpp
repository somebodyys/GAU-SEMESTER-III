#include <iostream>
#include <cmath>
#include <algorithm>
#include <time.h>
#include <vector>
using namespace std;

//mocemulia masivi Ai (i=1,2, … 20),  masivis maqsimaluri wevri SecvaleT igi  0-iT. 
void task1(){
    int A[20], max = 0, max_index = 0;
    for(int i = 0; i < 20; i++){
        A[i] = rand() % 101 - 50;
        if(A[i] > max){
            max = A[i];
            max_index = i; 
        } 
        cout << A[i] << " ";
    }
    A[max_index] = 0;
}

//ipoveT  min {e sinx},    Xϵ[0,5;1],   h=0,05   da dabeWdeT misi Sesabamisi argumentis mniSvneloba.
void task2(){
    float min = exp(sin(0.5));
    for(float i = 0.5; i <= 1; i += 0.05){
        float temp = exp(sin(i));
        if(temp < min){
            min = temp;
        }
    }
    cout << "MIN : " << min;
}

//mocemulia masivi  Ai (i=1,2, … 10), ipoveT 0-isagan gansxvavebuli wevrebis jami da 0-is toil wevrebis raodenoba.
void task3(){
    int A[10], sum = 0, count_zero = 0;
    for(int i = 0; i < 10; i++){
        A[i] = rand() % 5 - 2;
        sum += A[i];
        if(A[i] == 0){
            count_zero++;
        }
    }
    cout << "Sum = " << sum << "  Zeroes = " << count_zero;
}

//mocemulia masivi Ai (i=1,2, … 20), uaryofiTi wevrebi SecvaleT 0-ebiT. dabeWdeT axali masivi
void task4(){
    int A[20];
    for(int i = 0; i < 20; i++){
        A[i] = rand() % 101 - 50;
        if(A[i] < 0){
            A[i] = 0;
        }
        cout << A[i] << " ";
    }
}

/*
mocemulia funqcia  y =2x3x+1; Xϵ-2,5; 3; h=0,5   gansazRvreT funqciis 
dadebiT mniSvnelobaTa jami da uaryofiT mniSvnelobaTa namravli. 
*/
void task5(){
    float sum = 0, mult = 1;
    for(float i = -2.5; i <= 3; i += 0.5){
        if(i == -1){continue;};
        float y = (2 * i * i * i)/(i + 1);
        if(y > 0){
            sum += y;
        }

        if(y < 0){
            mult *= y;
        }
    }
    cout << "Sum = " << sum << "  Mult = " << mult;
}

/*
mocemulia masivi  Xi (i=1,2, … 20),  gamoTvaleT masivis  0-sagan gansxvavebuli wevrebis
namravli da  dabeWdeT 0-is toli wevrebis indeqsis mniSvnelobebi.
*/
void task6(){
    int X[20], mult = 1;
    vector<int> zeroIndexes;
    for(int i = 0; i < 20; i++){
        X[i] = rand() % 5 - 2;
        if(X[i] != 0){
            mult *= X[i];
        }

        if(X[i] == 0){
            zeroIndexes.push_back(i);
            cout << i << " ";
        }
    }
    cout << "  Mult = " << mult;
}


/*
mocemulia funqcia  y=sinxx-1; Xϵ-1; 1;    h=0,1   gamoTvaleT funqciis im  
mniSvnelobaTa jami romalTa absolituri sidide 0,5-ze metia mniSvnelobaTa namravli.
*/
void task7(){
    float sum = 0, mult = 1;
    for(float i = -1; i < 1; i += 0.1){
        float y = (sin(i))/(i - 1);
        if(fabs(y) > 0.5){
            sum += y;
            mult *= y;
        }
    }
    cout << "Sum = " << sum << "  Mult = " << mult;
}

main(){
    srand(time(NULL));
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    // task7();
}