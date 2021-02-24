#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int GCD(int a, int b){
    while(a&&b){
        if(a > b) a %= b;
        else b %= a;
    }

    return a + b;
}

//ლექციაზე რომ გკითხეთ. იგივე ამოცანა იგივე პრინციპი ოღონდ რეკურსიულად დაგიწერეთ. 
//წინა დათვლილების გამოყენებით.
int task1(int n, int k){
    if(k == 0 || k == n ){
        return 1;
    }

    return task1(n - 1,  k - 1) + task1(n - 1, k); 
}

void task2(){
    int m, n;
    cin >> m >> n;

    if(m != 0 && n != 0){
        int gcd = GCD(fabs(m), fabs(n));
        cout << m/gcd << "  "<< n/gcd;
    }      
}

int task3(int n){
    if(n == 0){
        return 0;
    } else if(n == 1 || n == 2){
        return 1;
    }
    return task3(n - 1) + task3(n - 2);
}

//ქართული ასოები არ ჩანს. უნიკოდი არ მაქ ტერმინალზე დაყენებული.
void task4(string text){
    int lng = text.length();
    string res = "";
    for(int i = lng - 1; i >= 0; i--){
        res += text[i];
    }
    if(res == text){
        cout << "Yes";
    } else{
        cout << "No";
    }
}


main(){
    cout << task3(6);
}