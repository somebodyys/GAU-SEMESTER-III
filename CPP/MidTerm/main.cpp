#include <iostream>
#include <cmath>
using namespace std;

//method to print my Biography
void myBiography(){
    cout << "სახელი : თორნიკე\n" << "გვარი : კიკაჩეიშვილი\n"<< "დაბადების წელი : 1997"<<endl;
    cout << "განათლება : თავისუფალი უნივერსიტეტი(ფიზიკის ბაკალავრი), გაუ(ინფორმატიკის ბაკალავრი)" <<endl;
    cout << "ჰობი : გიტარა" <<  endl;
}


//Calculate quadratic Eqcuation
void quadraticEc(){
    float a, b, c, discriminant, x1, x2;
    input:
        cout << "Please Enter a, b, c : ";
        cin >> a >> b >> c;
        if(a == 0){
            cout << "\nPlease Enter non-zero 'a' value!" << endl; 
            goto input;
        }
        
        discriminant = b*b - 4*a*c;

        if(discriminant > 0){
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "\nx1 = " << x1 << "  x2 = " << x2 << "  discriminant = " << discriminant << endl;
        } else if (discriminant == 0){
            x1 = -b/(2*a);
            cout << "\nx1 = x2 = " << x1 << endl;
        } else {
            float real = -b/(2*a);
            float imag = sqrt(-discriminant)/(2*a);
            cout << "\nx1 = " << real << " + " << imag << "i" << endl;
            cout << "x1 = " << real << " - " << imag << "i" << endl;
             
        }
}

void task1(){

    char operation;
    cout << "Please Enter Operation (a, b) : ";
    cin >> operation;
    switch(operation){
        case 'a': myBiography();
        break;
        case 'b': quadraticEc();
        break;
    }
}

void task2(){
    float a, b, y;
    input:
        cout << "Enter a : ";
        cin >> a;
        if(a < 0){
            goto input;
        }

        cout << "Enter b : ";
        cin >> b;

        cout << "a = " << a << "  b = " << b << endl << endl;
        for(float x = 2.4; x < 4.2; x += 0.2){
            y = (exp(2*x) * sin(b + x) - 1)/(a*a + x);
            cout << "x = " << x << "  y = " << y << endl;
        }
}

void task3(){
    float b = 2.2, y;

    for(float x = 2.2; x <= 3.3; x += 0.1){
        cout << "\nx = " << x << endl;

        float c = 5;
        while(c <= 10){
            y = sqrt((x*x + pow(sin(b), 2))/(cos(x) + c));
            cout << "c = " << c << "  y = " << y << endl;
            c += 0.5;
        }
    }
}


main(){
    task1();
    // task2();
    // task3();
}