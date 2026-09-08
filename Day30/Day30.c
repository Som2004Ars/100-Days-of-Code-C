/*
Q59: Count even and odd numbers in an array.

 Sample Test Cases:
 Input 1:
 6
 1 2 3 4 5 6
 Output 1:
 Even=3, Odd=3

 Input 2:
 4
 2 4 6 8
 Output 2:
 Even=4, Odd=0
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}
