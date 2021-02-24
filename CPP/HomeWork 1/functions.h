#include <iostream>
#include <cmath>

using namespace std;

void task1()
{
    float B = 3.64, C = 0.6, x = 0.5, y, Z;

    y = (sqrt(pow(x, 2) + B) + exp(-(x + C))) / (2 * (sin(sin(x + C) + 1)));
    Z = y * y + 1;

    cout << "\n Task 1" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = y*y + 1" << endl;
    cout << "Z = " << Z << endl;
}

void task2()
{
    int A = 8, B = 2, C = 2, x = 1;
    float Z, y;

    y = (sin(sin(exp(x + B) - 1) + sqrt(A + 1))) / (exp(C - x));
    Z = y * y * y - 2 * y * y - y + 1;

    cout << "\n Task 2" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task3()
{
    float A = 3.1, B = 2.4, C = 1.1, x = 1.2, y, Z;

    y = (log(log(x * x + B) + 1) * A) / (sin(sin(x + C) + 1));
    Z = y * y - y;

    cout << "\n Task 3" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task4()
{
    float B = 0.5, C = 1, x = 2.5, y, Z;

    y = sqrt((x * x + sin(B)) / (cos(cos(x + C))));
    Z = sqrt(y + 1);

    cout << "\n Task 4" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task5()
{
    float x = 0.8, y, Z;

    y = sqrt(1 + x) + ((sin(sin(x))) / (1 + log(x + 1)));
    Z = y * y - x;

    cout << "\n Task 5" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task6()
{
    float A = 0.3, x = 0.7, y, Z;

    y = -(A * A / sqrt(x * x)) + ((2 * A * A + 1) / (3 * sqrt(x * x - A * A)));
    Z = y * y / (x - A);

    cout << "\n Task 6" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task7()
{
    float A = 7, x = 1.5, y, Z;

    y = (log(log(exp(x * x)) + 1) * A) / (sin(sin(x - 2) + 2));
    Z = y * y - 5;

    cout << "\n Task 7" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task8()
{
    int A = 5, x = 3;
    float y, Z;

    y = (A * exp(x * x) * (1 + sin(sin(x)))) / (1 + cos(x) * cos(x));
    Z = y * y * y - 1;

    cout << "\n Task 8" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task9()
{
    int A = 10, x = 2;
    float B = 3.4, y, Z;

    y = (sqrt(log(log(x * x * x + B) + exp(x)))) / (2 * exp(x * x - 3));
    Z = y + (y / A);

    cout << "\n Task 9" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task10()
{
    float A = 1.5, x = 2, y, Z;

    y = (5 * sin(x / 2) + x * exp(x - 1)) / (4 + cos(A + 1));
    Z = A * y * y;

    cout << "\n Task 10" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task11()
{
    float B = 1.5, x = 0.5, y, Z;

    y = (5 * sin(sin(x + sqrt(B)) * exp(x))) / (B * B + x * x);
    Z = log(y);

    cout << "\n Task 11" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task12()
{
    float A = 10, x = 1.5, y, Z;

    y = sqrt((exp(x) + 1) / (exp(x) + 2)) + sin(sin(x));
    Z = A * y;

    cout << "\n Task 12" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task13()
{
    float B = 5, x = 1.3, y, Z;

    y = (sin(sin(x)) + log(log(B))) / (exp(x + B));
    Z = x * (y * y + 1);

    cout << "\n Task 13" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task14()
{
    int A = 2, B = 1;
    float x = 0.5, y, Z;

    y = (exp(2 * x) * sin(sin(B + x) - 1)) / (A * A + x);
    Z = A + y * y;

    cout << "\n Task 14" << endl;
    cout << "\ny = " << y << endl;
    cout << "Z = " << Z << endl;
}

void task15()
{
    float B = -1, x = 1.5, y, A;

    A = fabs(x * x - B * B);
    y = (sqrt(log(log(A + B) + x))) / (exp(x) + 1);

    cout << "\n Task 15" << endl;
    cout << "\nA = " << A << endl;
    cout << "y = " << y << endl;
}
