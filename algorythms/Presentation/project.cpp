#include <iostream>

void oddMagic(int dimension){
    int magicSquare[dimension][dimension];

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            magicSquare[i][j] = 0;
            std::cout << magicSquare[i][j] << "\t";
        }
        std::cout << std::endl
                  << std::endl;
    }
    std::cout << std::endl;

    int index_i = dimension / 2;
    int index_j = dimension - 1;
    for (int number = 1; number <= dimension * dimension; number++)
    {
        //check if occupied
        if (magicSquare[index_i][index_j] != 0)
        {
            index_i++;
            index_j -= 2;
        }

        //insert
        magicSquare[index_i][index_j] = number;

        //display
        std::cout << "Number : " << number << "  Position[" << index_i << "," << index_j << "]" << std::endl
                  << std::endl;
        for (int i = 0; i < dimension; i++)
        {
            for (int j = 0; j < dimension; j++)
            {
                std::cout << magicSquare[i][j] << "\t";
            }
            std::cout << std::endl
                      << std::endl;
        }
        std::cout << std::endl
                  << std::endl;

        //calculate new position
        index_i--;
        index_j++;
        if (index_i == -1 && index_j == dimension)
        {
            index_i = 0;
            index_j = dimension - 2;
        }
        else if (index_i == -1)
        {
            index_i = dimension - 1;
        }
        else if (index_j == dimension)
        {
            index_j = 0;
        }
    }
}


void doubleEven(int dimension){
    int magicSquare[dimension][dimension];
    
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            magicSquare[i][j] = 0;
            if(j < dimension/4 && i < dimension/4){
                magicSquare[i][j] = -1;
            } 

            if(j > (dimension - 1) - dimension/4 && i < dimension/4){
                magicSquare[i][j] = -1;
            }

            if(j > (dimension - 1) - dimension/4 && i > (dimension - 1) - dimension/4){
                magicSquare[i][j] = -1;
            }

            if(j < dimension/4 && i > (dimension - 1) - dimension/4){
                magicSquare[i][j] = -1;
            }

            if(i >= dimension/4 && j <=(dimension - 1) - dimension/4 && j >=dimension/4 && i <=(dimension - 1) - dimension/4){
                magicSquare[i][j] = -1;
            }
            std::cout<<magicSquare[i][j]<<"\t";
        }
        std::cout<<std::endl<<std::endl;
    }
    
    std::cout<<std::endl;
    std::cout<<std::endl;
    int counter = 1;
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            magicSquare[i][j] = (magicSquare[i][j] == -1 ) ? counter : magicSquare[i][j];
            counter++;
            std::cout<<magicSquare[i][j]<<"\t";
        }
        std::cout<<std::endl<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    int secondCounter = 1;
    for(int i = dimension - 1; i >= 0; i--){
        for(int j = dimension - 1; j >= 0; j--){
            magicSquare[i][j] = (magicSquare[i][j] == 0) ? secondCounter : magicSquare[i][j];
            secondCounter++;
        }
    }

    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            std::cout<<magicSquare[i][j]<<"\t";
        }
        std::cout<<std::endl<<std::endl;
    }
}


main(){
    std::cout << "Welcome To Magic Square Generator" << std::endl;
    while (true)
    {
        int dimension;
        std::cout << "Enter Dimension : ";
        std::cin >> dimension;
        std::cout << std::endl;


        if(dimension > 0){
            if(dimension % 2){
                oddMagic(dimension);
            }else if(dimension % 4 == 0){
                doubleEven(dimension);
            }else{
                std::cout<<"Sorry, Cant Solve!"<<std::endl;
            }
        } else {
            std::cout << "No negative Dimensions!" <<std::endl;
        }
    }
}