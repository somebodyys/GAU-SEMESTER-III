#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//display any vector
void displayVector(vector<int> numbers){
    cout << "{ ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << "}";
}

//pick best fish
void getHunt(){

    //input fisherman details.
    int fishCount, maxKG;
    cin >> fishCount >> maxKG;

    //declare and fill net with fish kg.
    vector<int>net;
    for(int i = 0; i < fishCount; i++){
        int newFish;
        cin >> newFish;
        net.push_back(newFish);
    }
    //sorts input values from greatest to lowest
    sort(net.begin(), net.end(), greater<int>());

    //greedy algorythm pickes best fish
    vector<int> pickedFish;
    for(int i = 0; i < fishCount; i++){
        int tempFish = net[i];
        if(tempFish <= maxKG){
            pickedFish.push_back(tempFish);
            maxKG -= tempFish;
        }
    }

    //display result
    int pickedCount = pickedFish.size();
    cout << pickedCount << endl;
    for(int i = 0; i < pickedCount; i++){
        cout << pickedFish[i] << endl;
    }
    
}

main(){
    getHunt();
}

