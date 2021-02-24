#include <iostream>
#include <vector>
#include <string>

/*
Give you a number on base ten, you should output it on base two.
Bitset
*/
void task1()
{
    int num;
    while ((scanf("%d", &num)) != EOF)
    {
        std::vector<int> reminders;
        while (num)
        {
            reminders.push_back(num % 2);
            num /= 2;
        }

        for (int i = reminders.size() - 1; i >= 0; i--)
        {
            std::cout << reminders[i];
        }
        std::cout << std::endl;
    }
}

/*
Two positive integers a and b are given. Apply the bitwise exclusive or operation to them.
*/
void task2()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << (a ^ b);
}


/*
The first line contains the number of test cases t (1 ≤ t ≤ 100). 
Each of the following t lines contains two integers n and k (0 ≤ n ≤ 45, 1 ≤ k ≤ |Fn|, 
where |Fn| is the length of the string Fn, character positions in the line are numbered from one).
*/
#define MAX 44
int count, position, tests, fib[MAX] = {1, 1};
char fibString(int count, int position)
{
    if (count == 0)
        return 'a';
    if (count == 1)
        return 'b';
    if (position <= fib[count - 2])
        return fibString(count - 2, position);
    return fibString(count - 1, position - fib[count - 2]);
}

void task3()
{
    for (int i = 2; i < MAX; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    scanf("%d", &tests);
    while (tests--)
    {
        scanf("%d %d", &count, &position);
        printf("%c\n", fibString(count, position));
    }
}

long f(long n)
{
    long p = (n + 1) / 2;
    if (n == 0)
    {
        return 0;
    }
    return p * p + f(n / 2);
}
/*
Let f(n) be the greatest odd divisor of n, where n is a positive integer. 
You are given a positive integer n. Find the sum f(1) + f(2) + ... + f(n).
*/
void task4()
{
    long n;
    while ((scanf("%lld", &n) == 1))
    {
        printf("%ld\n", f(n));
    }
}

int GCD(int a, int b)
{
    while (a && b)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
int LCM(int a, int b){
    return (a * b)/ GCD(a, b);
}

/*
The least common multiple (LCM) of a set of positive integers is the smallest positive integer 
which is divisible by all the numbers in the set. For example, the LCM of 5, 7 and 15 is 105.
*/
void task5()
{
    int n;
    std::cin >> n;
    for (int j = 0; j < n; j++)
    {
        long result, m, temp;
        std::cin >> m >> result;
        for(int i = 1; i < m; i++){
            std::cin >> temp;
            result = result * temp / GCD(result, temp);
        }
        std::cout << result << std::endl;
    }
}


/*
For each test case print in a separate line 
two positive integers a and b (a ≤ b), which GCD is G and LCM is L. 
If the answer is not unique, output the pair for which a is minimal. 
If there is no such pair, print -1.
*/
void task6(){

    int tests;
    std::cin >> tests;
    for(int i = 0; i < tests; i++){
        int a , b;
        
        std::cin >> a >> b;
        if(b % a == 0){
            std::cout << a << " " << b << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }
}

/*
Given matrix A. Transpose it.
*/
void task7(){
    int n, m;
    std::cin >>n >> m;
    int matrix[n][m], tmatrix[m][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;  j++){
            int temp;
            std::cin >> temp;
            matrix[i][j] = temp;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            tmatrix[i][j] = matrix[j][i];
            std::cout << tmatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int twoDigits(int n){
    if(n == 1) return 2;
    if(n == 2) return 4;
    return twoDigits(n-1) + twoDigits(n - 2);
}
/*
How many n-digit numbers can be created using only digits 5 and 9, 
where no three identical digits stand side by side?
*/
void task8(){
    int input;
    std::cin >> input;
    std::cout << twoDigits(input);
}


/*
The segment is given by the coordinates of its endpoints: M(x1,y1) and N(x2,y2). 
Find the coordinates of O(x,y), which divides it in ratio α.
*/
void task9(){
    float x1, x2, y1, y2, ratio;
    std::cin>>x1 >> y1 >>x2 >>y2 >>ratio;
    printf("%.2f %.2f", ((x1 + ratio*x2) / (1 + ratio)), (y1 + ratio*y2) / (1 + ratio));
}
main()
{
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    // task7();
    // task8();
    // task9();

}