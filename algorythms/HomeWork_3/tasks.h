#include <iostream>
#include <set>
#include <cmath>
using namespace std;

// a && b
int task1(int a, int b){
    if(a){
        if(b) return 1; return 0;
    }

    return 0;
}

// !a && b
int task2(int a, int b){
    if (a){
        return 0;
    } else {
        if (b) return 1; return 0;
    }
}

// a && !b
int task3(int a, int b){
    if(a){
        if(b) return 0; return 1;
    }

    return 0;
}

// !a && !b
int task4(int a, int b){
    if (a){
        return 0;
    } else {
        if(b) return 0; return 1; 
    }
}

// a || b
int task5(int a, int b){
    if(a){
        return 1;
    } else {
        if (b) return 1; return 0;
    }
}

// !a || b
int task6(int a, int b){

    if(a){
        if(b) return 1; return 0;
    }

    return 1;
}

// a || !b 
int task7(int a, int b){

    if (a){
        return 1;
    } else {
        if(b) return 0; return 1;
    }
}

// !a || !b
int task8(int a, int b){

    if(a){
        if(b) return 0; return 1;
    }

    return 1;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებს x და y აქვს განსხვავებული ლუწ-კენტოვნების მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task9(int x, int y){
    return ((x&1) ^ (y&1));
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებიდან x და y ზუსტად ერთს აქვს 4-ის ჯერადი მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task10(int x, int y){
    if(x%4 == 0 && y%4 != 0 || x%4 != 0 && y%4 == 0) return 1; return 0;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებიდან x და y ზუსტად ერთს არა აქვს 3-ის ჯერადი მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task11(int x, int y){
    if(x%3 != 0 && y%3 == 0 || x%3 == 0 && y%3 != 0) return 1; return 0;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებიდან x, y და z ერთს მაინც აქვს  არაუარყოფითი მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task12(int x, int y, int z){
    if(x >= 0 || y >= 0 || z >= 0) return 1; return 0;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებიდან x, y და z არც ერთს არა აქვს   კენტი მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task13(int x, int y, int z){
    if(!(x&1) & !(y&1) & !(z&1)) return 1; return 0;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებში x, y და z გვხდება განსხვავებული მნიშვნელობის მქონე ცვლადები. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task14(int x, int y, int z){
    if(x != y && x != z && y != z) return 1; return 0;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებიდან x და y ზუსტად ერთს  აქვს არაუარყოფითი  მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task15(int x, int y){
    if(x < 0 && y >= 0 || x >= 0 && y < 0) return 1; return 0;
}

/*
C-ზე შეადგინეთ გამოსახულება, რომლის მნიშვნელობაა 1 მაშინ და მხოლოდ მაშინ, 
თუ მთელი ტიპის ცვლადებიდან x და y ზუსტად ერთს  აქვს არადადებითი  მნიშვნელობა. 
წინააღმდეგ შემთხვევაში გამოსახულება უნდა უდრიდეს 0-ს.
*/
int task16(int x, int y){
    if(x <= 0 && y > 0 || x > 0 && y <= 0) return 1; return 0;
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 3 მთელი რიცხვის შეტანა, 
და თუ ამ რიცხვების მაქსიმუმი ერთადერთია, მისი რიგითი ნომრის გამოტანა (ათვლილი 1-დან), 
წინააღმდეგ შემთხვევაში გამოსატანია 0.
*/
int task17(int x, int y, int z){

    int max = x;
    int max_index = 1;
    int counter  = 0;

    if(y > max) max = y, max_index = 2;
    if(z > max) max = z, max_index = 3;

    if(x == max) counter += 1;
    if(y == max) counter += 1;
    if(z == max) counter += 1;

    if(counter == 1) return max_index; return 0; 
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 3 მთელი რიცხვის შეტანა, 
და თუ ამ რიცხვების მინიმუმი ერთადერთია, მისი რიგითი ნომრის გამოტანა (ათვლილი 1-დან), 
წინააღმდეგ შემთხვევაში გამოსატანია 0.
*/
int task18(int x, int y, int z){

    int min = x;
    int min_index = 1;
    int counter  = 0;

    if(y < min) min = y, min_index = 2;
    if(z < min) min = z, min_index = 3;

    if(x == min) counter += 1;
    if(y == min) counter += 1;
    if(z == min) counter += 1;

    if(counter == 1) return min_index; return 0; 
}

/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 3 მთელი რიცხვის შეტანა, 
და თუ ამ რიცხვებს შორის ტოლები არ გვხდება, იმ რიცხვის რიგითი ნომრის გამოტანა (ათვლილი 1-დან), 
რომელსაც შუა მნიშვნელობა აქვს (ანუ არც მინიმუმია და არც მაქსიმუმი), წინააღმდეგ შემთხვევაში გამოსატანია 0.
*/
int task19(int x, int y, int z){
    if(task14(x, y, z)){
        int middle = x;
        int middle_index = 1;

        if(y > x && y < z) middle = y, middle_index = 2;
        if(z > x && z < y) middle = z, middle_index = 3;
    
        return middle_index;
    } 

    return 0;
}


/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 3 მთელი რიცხვის შეტანა, 
და თუ ამ რიცხვების ტოლი სიგრძის მონაკვეთებიდან სამკუთხედი აიგება, 
მაშინ გამოსატანია 1 - თუ კი ეს სამკუთხედი ტოლგვერდაა, 
გამოსატანია 2 - თუ კი იგი მხოლოდ ტოლფერდაა (ანუ ტოლგვერდა არ არის, მაგრამ ტოლფერდაა) 
და გამოსატანია 3 - თუ კი ეს სამკუთხედი არ არის ტოლფერდა. წინააღმდეგ შემთხვევაში 
(ანუ, თუ სამკუთხედი ვერ აიგება) გამოსატანია 0.
*/
int task20(int x, int y, int z){
    if( x + y > z && x + z > y && y + z > x){
        if ( x == y && x == z && y == z) return 1;
        if ( x == y && x != z || x == z && x != z || y == z && y != x) return 2; return 3;
    } 

    return 0;
}

/*
შეადგინეთ პროგრამა, რომელიც ითვალისწინებს 4 მთელი რიცხვის შეტანას და 
ამ რიცხვებიდან შედგენილი სიმრავლის სიმძლავრის (განსხვავებული რიცხვების რაოდენობის) გამოტანას. 
მაგალითად, თუ რიცხვებია 4,4,4,4 - პასუხი იქნება 1, თუ რიცხვებია 4,3,3,3 - პასუხია 2, 
თუ რიცხვებია 4,3,2,3 - პასუხია 3, ხოლო თუ რიცხვებია 4,3,2,5 - პასუხია 4.
*/
int task21(int x, int y, int z, int k){

    set<int> nums = {x, y, z, k};
    return nums.size();
}


/*
შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია 3 მთელი რიცხვის შეტანა, 
და თუ ამ რიცხვების ტოლი სიგრძის მონაკვეთებიდან სამკუთხედი აიგება, მაშინ გამოსატანია 1 - 
თუ კი ეს სამკუთხედი მართკუთხაა, გამოსატანია 2 - თუ კი იგი ბლაგვკუთხაა და გამოსატანია 3 - 
თუ კი ეს სამკუთხედი მახვილკუთხაა. წინააღმდეგ შემთხვევაში (ანუ, თუ სამკუთხედი ვერ აიგება) გამოსატანია 0.
*/
int task22(int x, int y, int z){
    
    if( x + y > z && x + z > y && y + z > x){
       if(x*x + y*y == z*z || x*x + z*z == y*y || y*y + z*z == x*x) return 1;
       if(x*x + y*y > z*z && x*x + z*z > y*y && y*y + z*z > x*x) return 3; return 2;
    } 
    return 0;
}

/*
!a || b && !c
*/  
int task23(int a, int b, int c){
    if(a){
        if(b){
            if(c) return 0; return 1;
        }
        return 0;
    }

    return 1;
}

/*
!b && c || !d
*/
int task24(int b, int c, int d){
    if(b){
        if(d) return 0; return 1; 
    }

    if(c) return 1; return 0;
}


/*
e && !f || !g
*/
int task25(int e, int f, int g){
    if(e){
        if(f){
            if(g) return 0; return 1;
        }

        return 1;
    }

    if(g) return 0; return 1;
}

/*
!h || !k && m
*/
int task26(int h, int k, int m){
    if(h){
        if(k){
            return 0;
        }

        if(m) return 1; return 0;
    }
    return 1;
}

/*
a && b || !c
*/
int task27(int a, int b, int c){
    if(a){
        if(b){
            return 1;
        }
        if(c) return 0; return 1;
    }

    if(c) return 0; return 1;
}

/*
b || !c && d
*/
int task28(int b, int c, int d){
    if(b) return 1;
    if(c) return 0; 
    if(d) return 1; return 0;
}


