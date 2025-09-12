#include <stdio.h>

#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2

int main() {
    int mat1[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int mat2[ROW2][COL2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int result[ROW1][COL2] = {0};

    // Matrix multiplication
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            for (int k = 0; k < COL1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print result
    printf("Resultant matrix:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}