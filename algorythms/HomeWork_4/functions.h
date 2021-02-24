#include <iostream>
using namespace std;
#include <time.h>


/*
int x[74]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, 
რომელიც დაადგენს და დააბრუნებს x მასივში ისეთი ელემენტების რაოდენობას, 
რომელთა მნიშვნელობა კენტია, ხოლო ინდექსი კი ლუწი.
*/
int task1(){

    srand(time(NULL));

    int x[74], counter = 0;
    for(int i = 0; i < 74; i++){
        x[i] = rand() % 100 + 1;
    }

    for(int i = 0; i < 74; i += 2){
        if(x[i] % 2 != 0) counter++; 
    }
    return counter;
}


/*
int x[77]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, 
რომელიც დაადგენს და დააბრუნებს x მასივში ისეთი ელემენტების რაოდენობას, 
რომელთა მნიშვნელობა ლუწია, ხოლო ინდექსი კი 3-ის ჯერადი.
*/
int task2(){
    srand(time(NULL));

    int x[77], counter = 0;
    for(int i = 0; i < 77; i++){
        x[i] = rand() % 100 + 1;
    }

    for(int i = 3; i < 77; i += 3){
        if(x[i] % 2 == 0) counter++;
    }
    return counter;
}

/*
int x[71]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, 
რომელიც დაადგენს და დააბრუნებს პასუხს კითხვაზე, 
4არის თუ არა x მასივში ერთი მაინც ისეთი ელემენტი, 
რომლის მნიშვნელობა უარყოფითია, ხოლო ინდექსი კი ლუწი.
*/
bool task3(){
    srand(time(NULL));
    int x[71];
    for(int i = 0; i < 71; i++){
        x[i] = rand() % 100 - 50;
    }   

    for(int i = 0; i < 71; i += 2){
        if(x[i] < 0) return true;
    }

    return false;
}

/*
int x[80]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, 
რომელიც დაადგენს და დააბრუნებს პასუხს კითხვაზე, 
არის თუ არა x მასივში ერთი მაინც ისეთი ელემენტი, 
რომლის მნიშვნელობა არაუარყოფითია, ხოლო ინდექსი კი 3-ის ჯერადი.
*/
bool task4(){
    srand(time(NULL));
    int x[80];
    for(int i = 0; i < 80; i++){
        x[i] = rand() % 100 - 50;
    }

    for(int i = 3; i < 80; i += 3){
        if(x[i] >= 0) return true;
    }

    return false;
}

/*
int x[83]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, 
რომელიც დაადგენს და დააბრუნებს პასუხს კითხვაზე, სწორია თუ არა, 
რომ x მასივში არ არის არც ერთი ისეთი ელემენტი, რომლის მნიშვნელობა უარყოფითია, 
ხოლო ინდექსი კი კენტი.
*/
bool task5(){
    srand(time(NULL));
    int x[83];
    for(int i = 0; i < 83; i++){
        x[i] = rand() % 100 - 50;
    }

    for(int i = 1; i < 83; i += 2){
        if(x[i] < 0) return false;
    }

    return true;
}

/*
int x[86]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, 
რომელიც დაადგენს და დააბრუნებს პასუხს კითხვაზე, 
სწორია თუ არა, რომ x მასივში არ არის არც ერთი ისეთი ელემენტი, 
რომლის მნიშვნელობა ლუწია, ხოლო ინდექსი კი 3-ის ჯერადი.
*/
bool task6(){
    srand(time(NULL));
    int x[86];
    for(int i = 0; i < 86; i++){
        x[i] = rand() % 100 - 50;
    }

    for(int i = 3; i < 86; i +=3){
        if(x[i] % 2 == 0) return false;
    }
    
    return true;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, 
ამ რიცხვის ათობითი მნიშვნელობის მაქსიმალური ციფრის დადგენა და გამოტანა.
*/
int task7(){
    int num;
    cin >> num;

    int maxDigit = 0;
    while(num){
        if(num % 10 == 9) return 9;
        if(num % 10 > maxDigit) maxDigit = num % 10;
        num /= 10;
    }
    
    return maxDigit;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, 
ამ რიცხვის ათობითი მნიშვნელობის მინიმალური ციფრის დადგენა და გამოტანა.
*/
int task8(){
    int num;
    cin >> num;
    
    int minDigit = 9;
    while(num){
        if(num % 10 == 0) return 0;
        if(num % 10 < minDigit) minDigit = num % 10;
        num /= 10; 
    }

    return minDigit;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, 
ამ რიცხვის ათობითი მნიშვნელობის ყველაზე ხშირად გამოყენებული ციფრის დადგენა და გამოტანა.
*/
int task9(){
    long long num;
    cin >> num;

    int result = 0;
    int maxCount = 0;

    for(int i = 0; i < 10; i++){
        int tempCount = 0;
        long long tempNum = num;
        while(tempNum){
            if(tempNum % 10 == i) tempCount++;   
            tempNum /= 10;
        }

        if(tempCount > maxCount){
            maxCount = tempCount;
            result = i;
        }
    }

    return result;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, 
ამ რიცხვის რვაობითი მნიშვნელობის მაქსიმალური ციფრის დადგენა და გამოტანა.
*/
int task10(){
    int num;
    cin >> num;

    int maxDigit = 0;
    while(num){
        if(num % 8 == 8) return 8;
        if(num % 8 > maxDigit) maxDigit = num % 8;
        num /= 8;
    }
    
    return maxDigit;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, 
ამ რიცხვის რვაობითი მნიშვნელობის მინიმალური ციფრის დადგენა და გამოტანა.
*/
int task11(){
    int num;
    cin >> num;
    
    int minDigit = 8;
    while(num){
        if(num % 8 == 0) return 0;
        if(num % 8 < minDigit) minDigit = num % 8;
        num /= 8; 
    }

    return minDigit;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, 
ამ რიცხვის რვაობითი მნიშვნელობის ყველაზე ხშირად გამოყენებული ციფრის დადგენა და გამოტანა.
*/
int task12(){
    long long num;
    cin >> num;

    int result = 0;
    int maxCount = 0;

    for(int i = 0; i < 8; i++){
        int tempCount = 0;
        long long tempNum = num;
        while(tempNum){
            if(tempNum % 8 == i) tempCount++;   
            tempNum /= 8;
        }

        if(tempCount > maxCount){
            maxCount = tempCount;
            result = i;
        }
    }

    return result;
}


/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი 
რიცხვის შეტანა და დაადგენს ეს რიცხვი არის თუ არა პოლინდრომი. 
(მაგ. 121 არის პოლინდრომი, 123 არ არის პოლინდრომი).
*/
bool task13(){
    long long num;
    cin >> num;

    long long reverse = 0;
    long long tempNum = num;
    while(tempNum){
        reverse += tempNum % 10;
        reverse *= 10;
        tempNum /= 10;
    }
    if(reverse / 10 == num) return true; return false;
}

/*
შეადგინეთ პროგრამა, 
რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა და 
იპოვის ამ რიცხვამდე ყველა მარტივ რიცხვს.
*/
void task14(){
    int max;
    cin >> max;

    int numbers[max];

    //Fill list
    for(int i = 0; i < max; i++){
        numbers[i] = i;
    }

    //Mark Non-Prime Numebrs
    for(int j = 2; j < max; j++){
        for(int i = j + 1; i < max; i++){
            if(numbers[i] % j == 0){
                numbers[i] = -1;
            }
        }
    }

    //Print Prime Numbers  
    for(int i = 2; i < max; i++){
        if(numbers[i] != -1){
            cout << numbers[i] << "  ";
        } 
    }
}