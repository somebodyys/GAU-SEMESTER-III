#include <iostream>
#include <time.h>

template<typename type>
void desc(type& input){
    for(int col = 0; col < 5; col++){
        for(int i = 0; i < 3; i++){
            bool swapped = false; //კიდე უფრო გავაუმჯობესე იმის ნაცვლად რომ ვითვალო უბრალოდ ლოგიკური ცვლადი შემოვიტანე
            for(int j = i + 1; j < 4; j++){
                if(input[i][col] < input[j][col]){
                    std::swap(input[i][col], input[j][col]);
                    swapped = true;
                }
            }
            if(!swapped){break;}
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            std::cout << input[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

template<typename type>
void asc(type& input){
    for(int rows = 0; rows < 4; rows++){
        for(int i = 0; i < 4; i++){
            //უმჯობესი იქნებოდა აქაც შემომეტანა ზედმეტი მოქმედებები რომ ავირიდო თავიდან. 
            //მაგრამ ზუსტად პირობის მიხედვით დაგიწერეთ.
            for(int j = i + 1; j < 5; j++){
                if(input[rows][i] > input[rows][j]){
                    std::swap(input[rows][i], input[rows][j]);
                }
            }
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            std::cout << input[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}


main(){
    srand(time(NULL));
    int matrix[4][5];
    std::cout << "\nStarting Matrix : " << std::endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][j] = rand() % 100 - 50;
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "\nEnter Operation(a|b) : ";

    char operation;
    std::cin >> operation;
    switch(operation){
        case 'a': desc(matrix);
        break;
        case 'b': asc(matrix);
        break;
    }
}