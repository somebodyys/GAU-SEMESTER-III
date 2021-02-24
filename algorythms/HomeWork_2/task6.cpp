#include <iostream>
#include <bitset>

using namespace std;

main(){
    int k, num;

    cout << "\nNumber = ";
    cin >> num;  
    cout << "K = ";
    cin >> k;
    cout << "Visualisation:"<<endl;
    cout << bitset <16>(num)<<endl<<endl;
    cout << k <<"'th bit Is set To 0 :\n"<<bitset <16>((num | (1 << k)) ^ (1 << k));


}