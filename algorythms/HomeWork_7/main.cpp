#include <iostream>
#include <time.h>
using namespace std;

//displays any two dimensional matrix
template <typename TwoDim>
void displayMatrix(TwoDim& matrix){
    //calcualte any two dimensional matrix dimension
    int dimMatrix[] = {sizeof(matrix) / sizeof(matrix[0]), sizeof(matrix[0]) / sizeof(matrix[0][0])};

    for(int i = 0; i < dimMatrix[0]; i++){
        for(int j = 0; j < dimMatrix[1]; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

//multiply two matrices
template <typename matrixOne, typename matrixTwo>
void matrixMult(matrixOne& A, matrixTwo& B){
    //calculate dimensions of both matrix and save in array
    int dimA[] = {sizeof(A)/sizeof(A[0]), sizeof(A[0])/sizeof(A[0][0])};
    int dimB[] = {sizeof(B)/sizeof(B[0]), sizeof(B[0])/sizeof(B[0][0])};

    //display input matrix
    cout <<"\nMatrix One : " << endl;
    displayMatrix(A);
    cout << "\nMatrix Two : " << endl;
    displayMatrix(B);
    cout << "\nResult : " << endl;

    //check multiplicability
    if(dimA[1] == dimB[0]){
        //result matrix dim will be first martix rows, second matrix cols.
        int result[dimA[0]][dimB[1]];
        
        for(int i = 0; i < dimA[0]; i++){
            for(int j = 0; j < dimB[1]; j++){
                result[i][j] = 0;
                //for each result element make mult and sum.
                for(int k = 0; k < dimA[1]; k++){
                    result[i][j] += A[i][k] * B[k][j];
                }
                //display
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
    } else {
        cout << "Can Not Be multiplied!" << endl;
    }
}

main(){

    //declare any dim matrix
    const int dim1 = 7, dim2 = 5, dim3 = 5, dim4 = 6;
    int a1[dim1][dim2];
    int a2[dim3][dim4];

    //for new random elements on every try
    srand(time(NULL));
    
    //fill first matrix fill random numbers
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            a1[i][j] = rand() % 101 - 50;
        }
    }

    //fill second matrix with random numbers
    for(int i = 0; i < dim3; i++){
        for(int j = 0; j < dim4; j++){
            a2[i][j] = rand() % 101 - 50;
        }
    }

    //multiply first and second matrices
    matrixMult(a1, a2);

}