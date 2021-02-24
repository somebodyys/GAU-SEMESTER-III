#include <iostream>
#include <string>
#include <time.h>


//No Template
// void print(std::string text){
//     std::cout << text << std::endl;
// }

// void print(int number){
//     std::cout << number << std::endl;
// }

// void print(float number){
//     std::cout << number << std::endl;
// }

// void print(double number){
//     std::cout << number << std::endl;
// }

//Use template for print

template<typename type>
void print(type input){
    std::cout << input << std::endl;
}

main(){
    print<std::string>("tornike");
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


// template<typename type>
// void printMatrix(type matrix, int rows, int cols){
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             std::cout << matrix[i][j] << "\t";
//         }
//         std::cout << std::endl;
//     }
// }

// main(){

//     int test[2][2] ={
//         {1,2},
//         {3,4}
//     };

//     // std::cout << (sizeof(test)/sizeof(test[0])) << " " << (sizeof(test[0])/sizeof(test[0][0]));
//     printMatrix(test, 2, 2);
// }

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


// template<typename type,int size>
// class Array{
//     private:
//         type myArray[size];
//     public:
//         int GetSize() const { return size;}
// };


// main(){
//     Array<int, 5> test;
//     std::cout << test.GetSize();

// }