#include <iostream>
using namespace std;

void checkRows(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
        if (sum == 15) {
            cout << "Row " << i + 1 << " sums to 15: ";
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void checkColumns(int matrix[3][3]) {
    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += matrix[i][j];
        }
        if (sum == 15) {
            cout << "Column " << j + 1 << " sums to 15: ";
            for (int i = 0; i < 3; i++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void checkDiagonals(int matrix[3][3]) {
    int sum1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
    int sum2 = matrix[0][2] + matrix[1][1] + matrix[2][0];

    if (sum1 == 15) {
        cout << "Main diagonal sums to 15: " << matrix[0][0] << " " << matrix[1][1] << " " << matrix[2][2] << endl;
    }
    if (sum2 == 15) {
        cout << "Secondary diagonal sums to 15: " << matrix[0][2] << " " << matrix[1][1] << " " << matrix[2][0] << endl;
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    checkRows(matrix);
    checkColumns(matrix);
    checkDiagonals(matrix);

    return 0;
}
