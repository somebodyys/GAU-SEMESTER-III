#include <iostream>
using namespace std;

/*
7.	შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა 
და დაადგენს არის თუ არა ეს რიცხვი პოლინდრომი (მაგ. 123 არ არის პოლინრომი, 121 არის პოლინდრომი).
*/
void task1(){
    int num, reverse = 0;
    cin >> num;

    int temp = num;
    while(temp){
        reverse += (temp % 10);
        reverse *= 10;
        temp /= 10;
    }

    reverse /= 10;
    
    if(reverse == num){
        cout << "Polindrom" << endl;
    } else {
        cout << "Not Polindrom" << endl;
    }

}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 2 მთელი რიცხვის,  N და M  (1<=N<=1018) შეტანა, 
თუ ეს შეტანილი რიცხვებს აქვს განსხვავებული ლუწ-კენტოვნების მნიშვნელობა დაბეჭდეთ 1, 
წინააღმდეგ შემთხვევაში დაბეჭდეთ 0. (ამოცანა უნდა ამოიხსნას ბიტური ოპერაციების გამოყენებით).
*/
void task2(){
    int N, M;
    cin >> N >> M;

    cout << ((N & 1) ^ (M & 1));
}

main(){
    task2();
}