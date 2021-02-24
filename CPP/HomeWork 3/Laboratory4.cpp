#include <iostream>
#include <cmath>

using namespace std;

float task1(float x, float a, float b, float c)
{
    float y;

    y = (sin(sin(2 - x) + 1)) / (sqrt(exp(a - x)));

    if (y == 1)
    {
        return (a * x * x + b * x + c);
    }

    return -1;
}

float task2(float c)
{
    float x, y;

    x = sin(x * exp(sqrt(fabs(cos(c)))));

    if (x <= 0)
    {
        y = cos(x) + log(x * x * x);
    }
    else
    {
        y = sin(x) + exp(x);
    }

    return y;
}

float task3(float x)
{
    float p, z, y;

    p = 0.57 * x * x * x + 0.68 * sin(x);

    z = sqrt(p * p + 1) * cos(p);

    if (z < 0)
    {
        y = z * z + 2;
    }
    else if (z > 1)
    {
        y = pow((z * z * z + 2), 1 / 4);
    }
    else
    {
        y = sqrt(z * z * z + 2);
    }

    return y;
}
main()
{

    cout << "\nTask 1 : " << task1(2, 2.8, -4.2, 8) << endl;
    cout << "\nTask 2 : y = " << task2(81.7) << endl;
    cout << "\nTask 3 : y = " << task3(2.835) << endl;
}