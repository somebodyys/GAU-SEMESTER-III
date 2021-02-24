#include <iostream>
#include "functions.h"
#include <cmath>
using namespace std;

main()
{   
    cout << "\n" << endl;
    float b = input("Enter B : "), c = input("Enter C : "), x = input("Enter x : ");

    cout << "\nTask 1 : Z = " << task1(b, c, x) << endl;
    cout << "Task 2 : Z = " << task2(b, c, x) << endl;
    cout << "\n" << endl;
}