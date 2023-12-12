/*                                       
                                           LAB MANUAL 09
                                         M.ZAOREZ(455443)
                                             SEC A
*/
#include <iostream>
using namespace std;
int main() {
    //                            TASK 01
	/*int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int leftDiagonalSum = 0;
    int rightDiagonalSum = 0;

    for (int i = 0; i < 3; ++i) {
        leftDiagonalSum += matrix[i][i];
        rightDiagonalSum += matrix[i][2 - i];
    }

    cout << "Matrix:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    cout << "Left Diagonal Sum: " << leftDiagonalSum << "\n";
    cout << "Right Diagonal Sum: " << rightDiagonalSum << "\n";

    return 0;*/
    
    //                                  TASK 02
/*
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
}

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    addMatrices(matrix1, matrix2, result);

    cout << "Matrix 1: ";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cout << matrix1[i][j] << " ";

    cout << "Matrix 2: ";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cout << matrix2[i][j] << " ";

    cout << " Result Matrix (Matrix 1 + Matrix 2): ";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cout << result[i][j] << " ";

    return 0;
}
*/
//                                       TASK 04
/*
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    multiplyMatrices(matrix1, matrix2, result);

    cout << "Matrix1: ";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << matrix1[i][j] << " ";
    }

    cout << "\nMatrix2: ";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << matrix2[i][j] << " ";
    }

    cout << "\nResult Matrix (Matrix1 * Matrix2): ";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << result[i][j] << " ";
    }

    return 0;
}
*/
//                                 TASK 05
/*
#include <iostream>

void printTable(int number, int multiplier) {
    if (multiplier > 10) return;

    std::cout << number << " x " << multiplier << " = " << (number * multiplier) << std::endl;
    
    printTable(number, multiplier + 1);
}

int main() {
    int number = 15;

    std::cout << "Multiplication Table of " << number << ":\n";
    printTable(number, 1);

    return 0;
}




}
   
