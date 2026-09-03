/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>

int main() {
    int n, original, digit, i;
    int sum = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;

        factorial = 1;
        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        n = n / 10;
    }

    if (sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }

    return 0;
}