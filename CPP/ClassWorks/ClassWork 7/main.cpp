#include <iostream>
#include <cmath>
using namespace std;

void task1()
{
    float a, b;
    char operation;

    while (true)
    {
        cout << "Enter Numbers : ";
        cin >> a >> b;

        cout << "Enter Operation To make : ";
        cin >> operation;

        switch (operation)
        {

        case '+':
            cout << "a + b  = " << a + b << endl;
            break;
        case '-':
            cout << "a - b  = " << a - b << endl;
            break;
        case '/':
            cout << "a / b = " << a / b << endl;
            break;
        case '*':
            cout << "a * b = " << a * b << endl;
            break;
        case '^':
            cout << "a to power of b = " << pow(a, b) << endl;
            break;
        default:
            cout << "I don't know that operation" << endl;
            break;
        }
    }
}

void task2()
{

    float a, b;
    char operation;

    cout << "Enter Rectangle sides : ";
    cin >> a >> b;
    cout << "What Sould I Calculate (P - for perimeter; A - for Area) : ";
    cin >> operation;

    // switch (operation)
    // {

    // case 'P':
    //     cout << "Perimeter = " << 2 * a + 2 * b << endl;
    //     break;
    // case 'A':
    //     cout << "Area = " << a * b << endl;
    //     break;
    // }

    switch (operation)
    {
    case 'P':
        cout << "What Sould I Calculate (P - for perimeter; A - for Area) : ";
        cin >> operation;
        switch (operation)
        {
        case 'P':
            cout << "Perimeter = " << 2 * a + 2 * b << endl;
            break;
        case 'A':
            cout << "Area = " << a * b << endl;
            break;
        }
    }
}
main()
{
    while (true)
    {
        task2();
    }
}