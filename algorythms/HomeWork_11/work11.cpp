#include <iostream>

void hanoi(int discs, int a, int b, int c){
    if(discs == 1){
        std::cout<<a<<" -> "<<b<<std::endl;
        return;
    }

    hanoi(discs - 1, a, c, b);
    std::cout<<a<<" -> "<<b<<std::endl;
    hanoi(discs - 1, c, b, a);

}

void fixedHanoi(int discs, int a, int b){
    if(discs == 1){
        std::cout<<discs<<" : "<<a<<" -> "<<6-(a+b)<<std::endl<<discs<<" : "<<6-(a+b)<<" -> "<<b<<std::endl;
        return;
    }
    fixedHanoi(discs - 1, a, b);
    std::cout<<discs<<" : "<<a<<" -> "<<6-(a+b)<<std::endl;
    fixedHanoi(discs - 1, b, a);
    std::cout<<discs<<" : "<<6-(a+b)<<" -> "<<b<<std::endl;
    fixedHanoi(discs - 1, a, b);
}


/*
By UNESCO resolution the original Tower of Hanoi was subjected to restoration.
Thereby during solution of the puzzle it is forbidden to move a disk from the 
first peg directly to the third peg and vice versa. Write a recursive procedure 
that prints a sequence of moves subject to such restrictions.

Print the sequence of moves for transferring all the rings to the third peg in the next order: 
number of the disk, starting peg, destination peg. Disks are numbered from the smallest to the largest. 
The number of moves should not exceed 105.
*/
void task1(){
    int discCount;
    std::cin>>discCount;
    std::cout<<"Solution : " << std::endl;
    fixedHanoi(discCount, 1, 3);
}



/*
In all known classical problem of the Tower of Hanoi assume discs numbered consecutive 
numbers starting from zero so that the disk with a larger diameter corresponded to a greater number.

Our task - for a given serial number (numbered from 1) the correct 
solution to determine the serial number of the disk, which made this move.

We believe that the original number of drives is enough for the demanded number of moves.
Print the serial number of the disk, which made n-th move.
*/
void task2(){
    int d = 63;
    unsigned long long disc;
    std::cin>>disc;
    while(d){
        if(disc % (1ULL << d) == 0){
            std::cout<<d;
            break;
        }  
        d--;
    }
    if(!d) std::cout << 0;
}


/*
Three pegs are given. The first peg contains some disks in ascending order of their size from top to bottom.
 The other two pegs are empty. You must move all disks from the first peg to the second. 
 You can move each time only one disk. It is not allowed to put a larger disk on a smaller one.
 In each line print two numbers – the peg numbers from which and where the disk is moved. The solution must be the shortest.
*/
void task3(){
    int discs;
    std::cin>>discs;
    hanoi(discs, 1, 2, 3);
}


/*
In one of the Buddhist monasteries, monks have been rearranging discs for a thousand years.
 They have three pegs with discs of different sizes. Initially a certain number of disks are 
 put on the first peg and ordered by size - from smallest to largest from top to bottom.
  Monks must move all discs from the first peg to the third one, satisfying the only condition
   - any disc cannot be placed on a smaller disc. All three pegs can be used for moves. 
   The monks move one disc in one second. Once they finish their work, the world will come to an end.

Well, is it like a monk to bring the end of the world closer? Wrong monks ... :)

Therefore, we will not be interested in the answer to a question somehow related to the apocalypse, 
but will be interested in the answer to a more familiar question in our everyday life: 
What is the least number of moves the monks will be able to complete their work,
 provided that they move the disks in optimal way?
*/
void task4(){
    short discs;
    std::cin >> discs;
    std::cout << ((discs == 64) ? ((1ULL << 63) - 1 + (1ULL << 63)) : ((1ULL << discs) - 1)); 
}


main(){
    // task1();
    // task2();
    // task3();
    task4();
}