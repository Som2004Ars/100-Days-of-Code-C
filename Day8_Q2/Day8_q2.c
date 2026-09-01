/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main(){
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);

    if(x>y && x>z){
        printf("%d is the largest number.", x);
    }
    else if(y>x && y>z){
        printf("%d is the largest number.", y);
    }
    else{
        printf("%d is the largest number.", z);
    }
    return 0;
}