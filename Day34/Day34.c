/*
Q67: Insert an element in an array at a given position.

 Sample Test Cases:
 Input 1:
 4
 10 20 30 40
 2 15
 Output 1:
 10 20 15 30 40
*/

#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &value);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
