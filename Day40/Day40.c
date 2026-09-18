/*
Q79: Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal: ");

    for (int d = 0; d < rows + cols - 1; d++) {
        int row, col;

        if (d < cols) {
            row = 0;
            col = d;
        } else {
            row = d - cols + 1;
            col = cols - 1;
        }

        while (row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
