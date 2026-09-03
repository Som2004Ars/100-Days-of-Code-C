/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() {
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    // Find the highest power of 10
    power = 1;
    digits = n;

    while (digits >= 10) {
        digits = digits / 10;
        power *= 10;
    }

    first = digits;

    // Remove first and last digits
    middle = (n % power) / 10;

    // Swap first and last digits
    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}
