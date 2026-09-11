/*
 Q66: Insert an element in a sorted array at the appropriate position.

  Sample Test Cases:
  Input 1:
  5
  1 2 4 5 6
  3
  Output 1:
  1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int arr[100], n, element, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    pos = 0;
    while (pos < n && arr[pos] < element) {
        pos++;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
