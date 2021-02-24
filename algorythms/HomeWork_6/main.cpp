#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int GCD(int a, int b){
    while(a&&b){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int LCM(int a, int b){
    return (a * b)/ GCD(a, b);
}


/*
Find the Lowest Common Multiple of n positive integers.
*/
void task1(){
    int count;
    cin >> count;
    int first = 1;
    for(int i = 0; i < count; i++){
        int temp;
        cin >> temp;
        first = LCM(first, temp);
    }
    cout << first;
}

/*
The segment's end points have integer coordinates. 
Find the number of points on a segment with integer coordinates.
*/
void task2(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << (GCD(abs(x2 - x1), abs(y2 - y1)) + 1);
}


/*
Find the Greatest Common Divisor of n numbers.
*/
void task3(){
    int count;
    cin >> count;
    int start = 0;
    for(int i = 0; i < count; i++){
        int temp;
        cin >> temp;
        start = GCD(start, temp);
    }
    cout << start;
}

/*
You need to find the capacity (in liters) of such bucket so that Uncle Peter 
made a minimum number of buckets and completely cleaned the yard.
*/
void task4(){
    int n, m;
    cin >> n >> m;
    cout << GCD(n, m);
}

/*
A section of choral singing operates in school. The start of the section always happens in the same way: 
by the signal of the header of the section all n participants stand in a circle and each m-th person sings 
a gamut for singing.

The leader of the section noticed that all the members are not always able to stretch their vocal cords. 
Given n and m, help him to determine whether or not all the choir participants will take part in 
the warm-up again.
*/
void task5(){
    int n, m;
    cin >> n >> m;
    string result = GCD(n,m) == 1 ? "YES" : "NO";
    
    cout << result;
}


/*
Write a program that finds the value of the function
*/
int task6(int m, int n){
    if(m > n){
        return task6(m - n, n);
    } else if(n > m){
        return task6(n - m, m);
    } else{
        return m;
    }
}


/*
Given the n integers, you have to find the maximum GCD 
(greatest common divisor) of every possible pair of these integers.
*/
void task7(){
    int count;
    cin >> count;

    for(int i = 0; i < count + 1; i++){
        string tempLine;
        vector<int> numbers;
        getline(cin, tempLine);

        int tempNum = 0;
        for(char i : tempLine){
            if(i != ' '){
                tempNum += int(i) - int('0');
                tempNum *= 10;
            }else{
                numbers.push_back(tempNum / 10);
                tempNum = 0;
            }
        }
        numbers.push_back(tempNum / 10);

        int max_GCD = 0;
        for(int i = 0; i < numbers.size() - 1; i++){
            for(int j = i + 1; j < numbers.size(); j++){
                int tempGCD = GCD(numbers[i], numbers[j]);
                if(tempGCD > max_GCD){
                    max_GCD = tempGCD;
                }
            }
        }
        cout << max_GCD << endl;
    }
}

/*
Reduce the given fraction to lowest terms.
*/
void task8(){
    int numOne, numTwo;
    cin >> numOne >> numTwo;

    int gcd = GCD(abs(numOne), abs(numTwo));
    cout << (numOne / gcd) << " " << (numTwo/gcd);
}


/*
Given n positive integers, you have to find the summation of 
GCD (greatest common divisor) of every possible pair of these integers.
*/
void task9(){
    int count;
    cin >> count;

    for(int i = 0; i < count + 1; i++){
        string tempLine;
        vector<int> numbers;
        getline(cin, tempLine);
        if(tempLine != ""){
            int tempNum = 0;
            for(char i : tempLine){
                if(i != ' '){
                    tempNum += int(i) - int('0');
                    tempNum *= 10;
                }else{
                    numbers.push_back(tempNum / 10);
                    tempNum = 0;
                }
            }
            numbers.push_back(tempNum / 10);

            int sum_GCD = 0;
            for(int i = 0; i < numbers.size() - 1; i++){
                for(int j = i + 1; j < numbers.size(); j++){
                    cout << numbers[i] <<" " << numbers[j];
                    int tempGCD = GCD(numbers[i], numbers[j]);
                    cout << " = "<< tempGCD << endl;
                    sum_GCD += tempGCD;
                }
            }
            cout << "SUM : " << sum_GCD << endl << endl;
        }
    }
}



/*
Four integer - the numerator and denominator of the first fraction and the numerator 
and denominator of the second fraction. All numbers are not greater 105 by absolute value.
*/
void task10(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int lcm = LCM(y1, y2);
    int top = x1 * (lcm / y1) + x2 * (lcm / y2);

    int gcd = GCD(abs(lcm), abs(top));
    cout << (top / gcd) << " " << (lcm/gcd);

}


//რამოდენიმე ერთ და იგივე იყო და აღარ დავწერე იგივე. 
main(){
   task10();
}