/*
Q81: Count characters in a string without using built-in
length functions.
*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
