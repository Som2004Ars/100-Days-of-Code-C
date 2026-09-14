/*
 Q72: Find the sum of all elements in a matrix.

  Sample Test Cases:
  Input 1:
  2 3
  1 2 3
  4 5 6
  Output 1:
  21
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
