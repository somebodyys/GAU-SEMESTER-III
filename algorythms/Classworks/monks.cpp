#include <iostream>

main(){
    short n;
    std::cin >> n;
    if(n == 64){
        std::cout << ((1ULL << 63) - 1 + (1ULL << 63));
    }else{
        std::cout << ((1ULL << n) - 1);
    }
}