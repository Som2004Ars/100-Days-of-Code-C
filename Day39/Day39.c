/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    int distinct = 1;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}