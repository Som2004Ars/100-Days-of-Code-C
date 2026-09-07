/*
Q58: Find the maximum and minimum element in an array.

 Sample Test Cases:
 Input 1:
 5
 2 9 1 4 7
 Output 1:
 Max=9, Min=1

 Input 2:
 3
 10 10 10
 Output 2:
 Max=10, Min=10
*/

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23, 5, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
