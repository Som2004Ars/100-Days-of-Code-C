/*
Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/

#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Enter the 1st number: ");
    scanf("%d", &x);

    printf("Enter the 2nd number: ");
    scanf("%d", &y);

    printf("The sum of %d and %d is: %d", x, y, x+y);
    return 0;
}