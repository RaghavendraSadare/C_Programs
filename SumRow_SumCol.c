#include <stdio.h>
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum[3] = {0};
    int colSum[3] = {0};
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    // Display row sums
    for (int i = 0; i < 3; ++i)
        printf("Sum of Row %d: %d\n", i + 1, rowSum[i]);
    // Display column sums
    for (int j = 0; j < 3; ++j)
        printf("Sum of Column %d: %d\n", j + 1, colSum[j]);
    return 0;
}

