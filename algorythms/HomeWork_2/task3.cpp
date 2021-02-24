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
    cout << bitset <16>(~(~0 << k))<<endl<<endl;
    cout << k <<"Bit Are saved Other Are dropped: "<<bitset <16>(num & (~(~0 << k)));


}