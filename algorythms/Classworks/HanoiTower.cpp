#include <iostream>
using namespace std;

void hanoi(int n, int a, int b, int c){
    if(n == 1){
        cout << n << " " << a << " " << b << " " << c << endl;
        return;
    }
    
    hanoi(n - 1, a, c, b);
    cout << n << " " << a << " " << b << endl;
    hanoi(n - 1, b, a, c);
    cout << n << " " << a << " " << c <<endl;
    hanoi(n-1, a, c, b); 
}



main(){
    hanoi(3, 1, 2, 3);
}