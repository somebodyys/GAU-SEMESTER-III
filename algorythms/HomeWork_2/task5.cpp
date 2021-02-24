#include <iostream>
#include <bitset>

using namespace std;

int position(int number){
    int counter = 1;

    while(number){
        
        if(number & 1){
            return counter;
        } else {
            number = number >> 1;
            counter += 1;
        }
        
    }   
    return counter;
}

main(){
    int num;

    cout << "\nNumber = ";
    cin >> num;  
    cout << "Visualisation:"<<endl;
    cout << bitset <16>(num)<<endl<<endl;
    
    cout << "First Way: " << endl;
    cout << bitset <16>(num ^ ( 1 << (position(num) - 1))) << endl;

    cout << "Second Way : "<<endl;
    cout << bitset <16>(num ^ (num ^ (num & (num - 1))));
}