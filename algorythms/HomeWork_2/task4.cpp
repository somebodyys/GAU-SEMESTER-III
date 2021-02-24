#include <iostream>
#include <bitset>

using namespace std;

main(){
    int num;

    cout << "\nNumber = ";
    cin >> num;  
    cout << "Visualisation:"<<endl;
    cout << bitset <16>(num)<<endl<<endl;

    cout << "Result : " << (num & (~(num - 1)));
}