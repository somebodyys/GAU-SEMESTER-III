#include <iostream>
#include <string>
#include <map>
#include <vector>

/*
Vitek has at home 2 identical sets of cubes of English letters, 
but during the regular cleaning one of the cubes was lost. 
Help Witek to determine which of the cubes is missing in one of the sets.

Print the character on the lost cube, or the message "Ok", 
if Vitek was mistaken and no cube is lost.
*/
void task1(){
    
    //ვიფიქრე და რაოდენობის შემოტანა ზედმეტია უფრო მატრივადაც შეილება ამოხსნა,
    //ზედმეტი ინფორმაციაა, დინამიურად გავაკეთე
    // int numberOfCubes;
    // std::cin >>numberOfCube;

    std::string cubes;
    std::cin >> cubes;
    std::map<char, int> cubeCounter;
    for(char i : cubes){
        cubeCounter[i] = (cubeCounter[i] || 0) + 1;
    }

    bool lost = false;
    for(auto pair : cubeCounter){
        if(pair.second == 1){
            std::cout<<pair.first;
            lost = true; 
        }
    }
    if(!lost){std::cout<<"Ok";}//თუ არ დაუკარგავს
    
}

/*
For the board game the deck of cards is used with numbers 
from 1 to n (positive integer n does not exceed 106). One card is lost. Find it.

Print the number of lost card.
*/
void task2(){
    int n;
    std::cin >> n;
    std::vector<int> numbers;
    for(int i = 0; i < n - 1; i++){
        int temp;
        std::cin>>temp;
        numbers.push_back(temp);
    }
    for(int i = 1; i <= n; i++){
        bool found = false;
        for(int j : numbers){
            found = i == j ? true : found;
        }
        if(!found){std::cout<<i;break;}
    }
}


main(){
    task1();
    task2();
}