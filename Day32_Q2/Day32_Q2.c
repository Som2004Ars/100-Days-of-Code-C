/*
Q64: Find the digit that occurs the most times in an integer number.

 Sample Test Cases:
 Input 1:
 112233
 Output 1:
 1

 Input 2:
 887799
 Output 2:
 7
*/

#include <stdio.h>

int main() {
    int n, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    printf("Occurrences: %d\n", maxCount);

    return 0;
}
