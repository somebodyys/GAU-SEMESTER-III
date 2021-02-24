#include <iostream>


main(){

    int test;
    std::cin>>test;
    for(int i = 0; i < test; i++){
        int x1, y1, x2, y2, x3, y3;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int x4 = x3 - x1;
        int y4 = y3 - y1;


        int x5 = x2 - x1;
        int y5 = y2 - y1;

        long long d= x4 * y5 - x5 * y4;

        if(d < 0){
            std::cout<<"LEFT" <<std::endl;

        } else if(d > 0){
            std::cout <<"RIGHT" << std::endl;
        } else {
            std::cout << "TOUCH" << std::endl;
        }

    }
}