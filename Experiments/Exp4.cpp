#include <iostream>
using namespace std;

class Matrix {
public:
    int row, col, value;
};

class SparseMatrixOperations {
public:
    static Matrix* sparse(int matrix[][10], int rows, int cols, int &nonZeroCount) {
        nonZeroCount = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != 0) {
                    nonZeroCount++;
                }
            }
        }
        Matrix* sparseMatrix = new Matrix[nonZeroCount];
        int k = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != 0) {
                    sparseMatrix[k].row = i;
                    sparseMatrix[k].col = j;
                    sparseMatrix[k].value = matrix[i][j];
                    k++;
                }
            }
        }

        return sparseMatrix;
    }
};

int main() {
    int rows, cols;
    cout << "Enter num of rows and col: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter elements: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int nonZeroCount;
    Matrix* sparseMatrix = SparseMatrixOperations::sparse(matrix, rows, cols, nonZeroCount);

    cout << "\nSparse Matrix Representation (Row, Col, Value):\n";
    for (int i = 0; i < nonZeroCount; i++) {
        cout << sparseMatrix[i].row << " "
             << sparseMatrix[i].col << " "
             << sparseMatrix[i].value << endl;
    }
}
