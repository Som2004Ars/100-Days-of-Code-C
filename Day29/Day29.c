/*
 Q57: Find the sum of array elements.

  Sample Test Cases:
  Input 1:
  4
  2 4 6 8
  Output 1:
  20

  Input 2:
  3
  1 1 1
  Output 2:
  3
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
