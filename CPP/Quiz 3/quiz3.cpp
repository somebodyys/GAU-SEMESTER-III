#include <iostream>
#include <cmath>

using namespace std;

void task1(){
    int x1[] = {21, 24, 27};
    double top = 2, bot = 0, right;

    //calculate top
    for(int i = 3; i < 5; i++){
        top *= i;
    }
    top += 10;

    //calculate bot
    for(int i = 0; i < 3; i++){
        bot += (x1[i] * x1[i] + 5);
        right += (x1[i] * 2);
    }
    cout << "Top = " << top << "  Bot = " << bot << " right = " << right << "  B = " << top/bot + right << endl;
}

void task2(){

    int size = 15, nums[size];

    for(int i = 0; i < size; i++){
        nums[i] = rand() % 101 - 50;
    }

    //non 0 sum
    int sum = 0;
    cout <<"\nNon 0 : " << endl;
    for(int i = 0; i < size; i++){
        if(nums[i] >= 0){
            sum += nums[i];
            cout << "["<<i<<"] = " << nums[i] << " ";
        }
    }
    cout << "\nSum = " << sum << endl;

    int mult = 1;
    cout << "\nNegative : " << endl;
    for(int i = 0; i < size; i++){
        if(nums[i] < 0){
            mult *= nums[i];
            cout << "["<<i<<"] = " << nums[i] << " ";
        }
    }
    cout << "\nMultiplication = " << mult << endl << endl;
}

main(){
    task1();
    // task2();
}
