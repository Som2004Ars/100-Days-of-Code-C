/*
Q61: Search for an element in an array using linear search.

 Sample Test Cases:
 Input 1:
 5
 1 2 3 4 5
 3
 Output 1:
 Found at index 2

 Input 2:
 4
 10 20 30 40
 25
 Output 2:
 -1
*/

#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
