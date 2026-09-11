/*
 Q65: Search in a sorted array using binary search.

  Sample Test Cases:
  Input 1:
  5
  1 3 5 7 9
  7
  Output 1:
  Found at index 3

  Input 2:
  5
  1 3 5 7 9
  6
  Output 2:
  -1
*/

#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");

    return 0;
}
