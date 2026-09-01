/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x>0){
        printf("%d is a positive number.", x);
    }
    else if (x<0){
        printf("%d is a negative number.", x);
    }
    else{
        printf("%d is zero.", x);
    }
    return 0;
}