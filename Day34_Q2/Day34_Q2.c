/*
 Q68: Delete an element from an array.

  S a*mple Test Cases:
  Input 1:
  5
  1 2 3 4 5
  2
  Output 1:
  1 2 4 5
*/

#include <stdio.h>

int main() {
    int a[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
