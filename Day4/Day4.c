/*
Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>

int main(){
    int a;

    printf("Enter first number: ");
    scanf("%d", &a);

    int b;

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("The numbers before swapping a = %d b = %d\n", a, b);
    a = b + a;
    b = a - b;
    a = a - b;

    printf("The numbers after swapping a = %d b = %d", a, b);
    return 0;

}