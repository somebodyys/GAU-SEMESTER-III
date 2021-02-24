#include <iostream>
#include <time.h>

template<typename type>
void printList(type &input){
    int size = (sizeof(input) / sizeof(input[0]));
    std::cout << "\n{ ";
    for(int i = 0; i < size; i++){
        std::cout << input[i] << " ";
    }
    std::cout << "}";
}

template<typename type>
void BubbleSort(type &input, bool desc = true){
    int size = (sizeof(input) / sizeof(input[0]));
    for(int i = 1; i < size; i++){
        bool swaped = false;
        for(int j = 0; j < size - i; j++){
            if(input[desc ? j+1 : j] > input[desc ? j : j+1]){
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
                swaped = true;
            }
        }
        if(!swaped){break;}
    }
}

template<typename type>
void SimpleSort(type &input, bool desc = true){
    int size = (sizeof(input) / sizeof(input[0]));
    for(int i = 0; i < size - 1; i++){
        bool swaped = false;
        for(int j = i + 1; j < size; j++){
            if(input[desc ? j : i] > input[desc ? i : j]){
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
                swaped = true;
            }
        }
        if(!swaped){break;}
    }
}

template<typename type>
int BinarySearch(int item, type &data){
    int start = 0, end = (sizeof(data) / sizeof(data[0]));
    while(start <= end){
        int center = (start+end)/2;
        if(item == data[center]){ return center; }
        end = item < data[center] ? center - 1 : end;
        start = item > data[center] ? center + 1 : start;
    } 
    return -1;
}

main(){
    srand(time(NULL));

    const int size = 15;
    int list[size];
    //Fill
    for(int i = 0; i < size; i++){
        list[i] = rand() % 100 - 50;
    }

    printList(list); //Display Initial
    // BubbleSort(list);
    SimpleSort(list, false);
    printList(list); //Display Sorted
    std::cout << "\nCallBack : "<< BinarySearch(17, list) <<std::endl;
}