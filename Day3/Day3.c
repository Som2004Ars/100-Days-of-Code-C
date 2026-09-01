/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main(){
    int temp_c;

    printf("Enter the temperature in C: ");
    scanf("%d", &temp_c);

    int temp_f = (temp_c * 9/5) + 32;

    printf("The temperature in farenheit is: %d", temp_f);
    return 0;

}