#include <iostream>
using namespace std;

void task1(){
    int n; 
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp;
        string result;
        cin >> temp;

        if(temp % 2 == 0){
            result = "even";
        } else{
            result = "odd";
        }

        cout << temp << " is " << result << endl;
    }
}

void task2(){
    string txt1, txt2;
    cin >> txt1 >> txt2;

    if(txt1.size() < txt2.size()){
        cout << "no" << endl;
    } else{
        cout << "go" << endl;
    }

}

void task3(){
    string input;
    cin >> input;
    int counter = 0;
    for(int i = 0; i < input.size(); i++){
        counter += (input[i] - int('0'));  
    }

    if(counter % 3 == 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;

    }
}

void task4(){
    for(int i = 65; i < 91; i++){
        cout << char(i) << endl;
    }
}

void task5(){
    string input, result = "";
    getline(cin, input);

    for(int i = 0; i < input.size(); i++){
        if(input[i] == '(' || input[i] == ')'){
            result += input[i];
        }
    }

    if(result.size() % 2 == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }
}

main(){
    task1();
    

}
