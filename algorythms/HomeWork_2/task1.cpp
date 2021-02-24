#include <iostream>
#include <bitset>

using namespace std;

main(){
    int k, num;

    cout << "\nNumber = ";
    cin >> num;  
    cout << "K = ";
    cin >> k;
    cout << "Visualisation:\n"<<endl;
    cout << bitset <16>(num)<<endl;
    cout << bitset <16>(1 << (k-1))<<endl<<endl;
    cout << "Replaced "<< k <<"'th bit, result is : "<<endl;
    cout << "Binary: "<<bitset <16>(num^(1<<k)) <<"\nDecimal: "<<(num^(1<<k));

}