#include <iostream>
#include <time.h>
using namespace std;

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 2 მთელი რიცხვის,  N (0&lt;=N&lt;=10 9 ) და K
(0&lt;=K&lt;=30) შეტანა, N რიცხვის ორობით მნიშვნელობაში  K-რი ბიტის მნიშვნელობის დადგენა და
გამოტანა. ბიტების ათვლა წარმოებს მარჯვნიდან მარცხნივ და იწყება 0-თ.
*/
int task4(){
    int N, K;
    cin >> N >> K;

    return ((N>>K)&1);
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, თუ მთელი
ტიპის ცვლადებს x და y აქვს ერთი და იგივე ლუწ-კენტოვნების მნიშვნელობა. წინააღმდეგ
შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task5(){
    int x, y;
    cin >> x >> y;

    if(x % 2 == 0 && y % 2 != 0 || x % 2 != 0  && y % 2 == 0) return 0; return 1; 
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 3 მთელი რიცხვის შეტანა, და თუ ამ
რიცხვების მაქსიმუმი და მინიმუმი ერთადერთია, მაქსიმალური რიცხვის რიგითი ნომრის გამოტანა
(ათვლილი 1-დან), წინააღმდეგ შემთხვევაში გამოსატანია 0.
*/
int task6(){
    int x, y, z;    
    cin >> x >> y >> z;

    int max = x, min = x;
    int maxIndex = 1;
    int maxCounter = 0;
    int minCounter = 0;

    if(y > max){
        max = y;
        maxIndex = 2;
    }
    if(y < min){
        min = y;
    }
    if(z < min){
        min = z;
    }
    if(z > max){
        max = z;
        maxIndex = 3;
    }

    if(x == max) maxCounter++;
    if(y == max) maxCounter++;
    if(z == max) maxCounter++;
    if(x == min) minCounter++;
    if(y == min) minCounter++;
    if(z == min) minCounter++;

    if(maxCounter == 1 && minCounter == 1) return maxIndex; return 0;


}

/*
შეადგინეთ x = a || !b && !c; მინიჭების ტოლძალოვანი ოპერატორი C/C++ -ზე იმ პირობებში, როცა
ყველა ცვლადი მთელი ტიპისაა და აკრძალულია მინიჭების გარდა რაიმე სხვა ოპერატორების
გამოყენება.
*/
int task7(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a) return 1;
    if(b) return 0;
    if(c) return 0;

    return 1;
}

/*
int x[100]; აღწერის პირობებში შეადგინეთ ფრაგმენტი, რომელიც დააბრუნებს x მასივში ისეთი
ელემენტების ჯამს, რომელთა მნიშვნელობა ლუწია, ხოლო ინდექსი კი კენტი.
*/
int task8(){
    srand(time(NULL));
    int x[100], result = 0;
    
    for(int i = 0; i < 100; i++){
        x[i] = rand() % 1000;
    }

    for(int i = 1; i < 100; i+=2){
        if(x[i] % 2 == 0) result += x[i];
    }

    return result;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია ერთი მთელი რიცხვის შეტანა, ამ რიცხვის
შვიდობითი მნიშვნელობის მინიმალური, მაქსიმალური და ყველაზე ხშირად გამოყენებული ციფრის
დადგენა და გამოტანა.
*/
void task9(){
    int num;
    cin >> num;

    int maxDigit = 0, minDigit = 6, tempNum1 = num, tempNum2 = num, freqDigit = 0, freqCounter = 0;

    while(tempNum1){
        if(tempNum2 % 7 == 6){
            maxDigit = 6;
            break;
        }
        if(tempNum1 % 7 > maxDigit) maxDigit = tempNum1 % 7;
        tempNum1 /= 7;
    }

    while(tempNum2){
        if(tempNum2 % 7 == 0){
            minDigit = 0;
            break;
        }
        if(tempNum2 % 7 < minDigit) minDigit = tempNum2 % 7;
        tempNum2 /= 7;
    }

    for(int i = 0; i < 7; i++){
        int tempNum3 = num;
        int tempCounter = 0;
        while(tempNum3){
            if(tempNum3 % 7 == i) tempCounter++;
            tempNum3 /= 7;
        }

        if(tempCounter > freqCounter){
            freqCounter = tempCounter;
            freqDigit = i;
        }
    }
    
    cout << "Max Digit : " << maxDigit << "  Min Digit : " << minDigit << "  Most Frequent : " << freqDigit << endl;
}

main(){
    // cout << task4();
    // cout << task5();
    // cout << task6();
    // cout << task7();
    // cout << task8();
    task9(); 
}