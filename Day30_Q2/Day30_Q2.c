/*
Q60: Count positive, negative, and zero elements in an array.

 Sample Test Cases:
 Input 1:
 5
-1 0 1 2 -2
 Output 1:
 Positive=2, Negative=2, Zero=1
 */

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Number of positive elements = %d\n", positive);
    printf("Number of negative elements = %d\n", negative);
    printf("Number of zero elements = %d\n", zero);

    return 0;
}
