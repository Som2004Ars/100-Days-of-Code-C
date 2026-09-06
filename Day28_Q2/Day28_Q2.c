/*
 Q56: Read and print elements of a one-dimensional array.

  Sample Test Cases:
  Input 1:
  3
  10 20 30
  Output 1:
  10 20 30

  Input 2:
  5
  1 2 3 4 5
  Output 2:
  1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int a[10], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
