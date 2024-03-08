#include <stdio.h>
int main() {
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2] = {0};
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 3; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
    // Display result matrix
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}

