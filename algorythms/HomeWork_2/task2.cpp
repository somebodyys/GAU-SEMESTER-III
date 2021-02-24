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
    cout << k <<"'th bit is: "<<((num & (1 << k)) >> k);

}