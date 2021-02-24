#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

/*
Direct x = a and y = b divide the quadrilateral with vertices 
A(0, 0), B(0; y1), C(x1; y1), D(x1; 0) into four parts. 
Determine the square formed by the figures.

Print the first area of a quadrilateral APQM, then through the gap - PBOQ, 
then through the gap - QOCK, and, finally, through the gap - MQKD. 
The results lead to three decimal.
*/
void task1(){
    double a, b, x,y;
    std::cin>>a>>b>>x>>y;
    a = fabs(a);
    b = fabs(b);
    x = fabs(x);
    y = fabs(y);
    printf("%.3f %.3f %.3f %.3f", fabs(a*b), fabs(a*(y-b)), fabs((y-b)*(x-a)), fabs(b*(x-a)));
}

/*
Four pointsA(x1; y1), B(x2; y2), C(x3; y3), D(x4; y4)are the vertices of parallelogram. 
Determine the length of the diagonals and find the coordinates of their intersection.

The first line print after a gap of x and y coordinates of the point O, in the second - 
print the length of the diagonal ACand through a gap - BD. The results lead to three decimal.
*/
void task2(){
    float A[2], B[2], C[2], D[2];
    std::cin>>A[0]>>A[1]>>B[0]>>B[1]>>C[0]>>C[1]>>D[0]>>D[1];
    
    printf("%.3f %.3f\n", fabs(C[0] - D[0]), fabs(A[1] - D[1]));
    printf("%.3f %.3f", sqrt(pow(fabs(C[0] - A[0]),2) + pow(fabs(A[1] - D[1]), 2)), sqrt(pow(fabs(B[0] - D[0]),2) + pow(fabs(B[1] - C[1]),2)));

}


/*
It set lengths of the sides of a triangle. Define, is this triangle rectangular?
Deduce "YES" (without inverted commas), if a triangle rectangular, or "NO" (without inverted commas) otherwise.
*/
void task3(){
    int a, b, c;
    std::cin >> a >> b >> c;

    if(a > b){std::swap(a,b);}
    if(b > c){std::swap(b,c);}

    std::cout << ((a*a + b*b == c*c) ? "YES" : "NO");
}


/*
The area of a ring and radius of an external circle are given. Find the radius of an internal circle.

Print the radius of an internal circle with 2 digits after the decimal point.
*/
void task4(){
    float S, R1, pi = 3.14159265358979323846;
    std::cin >> S >> R1;

    printf("%.2f", sqrt(R1*R1 - (S/pi)));
}


/*
The sides a, b, c, d and the diagonal f of a convex quadrilateral are given.
 Find the area of a quadrilateral, using the Heron’s formula that calculates the area of a triangle.
 Print one number - the area of a quadrilateral calculated with accuracy of 4 digits after the decimal point
*/
void task5(){
    float a, b, c, d, f, s1, s2;
    std::cin >> a >> b >> c >> d >> f;
    s1 = (a+b+f)/2;
    s2 = (f+c+d)/2;

    printf("%.4f", (sqrt(s1*(s1 - a)*(s1 - b) * (s1 - f)) + sqrt(s2* (s2 - f) * (s2 - c) * (s2 - d))));
}


/*
4 numbers a, b, c, d, defining lengths of pieces are set. 
Define, is it possible to form a parallelogram from these pieces.

Deduce in a unique line a word "YES" if it is possible to form a parallelogram or "NO" (without inverted commas) otherwise.
*/
void task6(){
    
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::string result = "NO";

    if((a == b) && (c == d)){result = "YES";}
    if((a == c) && (b == d)){result = "YES";} 
    if((a == d) && (b == c)){result = "YES";}  

    std::cout << result;
}


/*
Find the triangle type (equilateral, isosceles, scalene) if the lengths of its sides are given.

Print 1 if the triangle is equilateral, 2 if isosceles and 3 if scalene.
*/
void task7(){
    int a, b, c;
    std::cin >> a >> b >> c;

    int result = 3;
    if(a == b && b != c || a == c && c != b || b == c && c != a){result = 2;}
    if(a == b && b == c){result = 1;}
    
    std::cout << result;
}


/*
Find the heights of the triangle with sides a, b, c.

Print the heights of the triangle ha, hb, hc with two digits after the decimal point, separated with one space.
*/
void task8(){

    short a, b, c;
    double p, s;
    std::cin >> a >> b >> c;
    p = (a+b+c)/2.0;
    s = sqrt(p*(p - a)*(p - b)*(p - c));
    printf("%.2f %.2f %.2f\n", 2*s/a, 2*s/b, 2*s/c);
}


/*
The triangle is given. Find the value of its biggest angle.
Print the value of its biggest angle in degrees with 6 decimal digits.
*/
void task9(){
    std::vector <std::pair <double, double>> point;
    std::vector <double> side;
    float x, y, pi = 3.1415926535897932384626433832795;

    for (int i = 0; i < 3; i++)
	{
		std::cin >> x >> y;
		point.push_back(std::make_pair(x, y));
	}
    side.push_back(hypot(point[0].first - point[1].first, point[0].second - point[1].second));
	side.push_back(hypot(point[0].first - point[2].first, point[0].second - point[2].second));
	side.push_back(hypot(point[2].first - point[1].first, point[2].second - point[1].second));
	sort(side.begin(), side.end());
	printf("%.6f", acos((pow(side[2], 2) - pow(side[1], 2) - pow(side[0], 2)) / (-2 * side[0] * side[1])) * 180 / pi); 
}


main(){
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