/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main(){

    int tot_seconds;
    printf("Enter total seconds: ");
    scanf("%d", &tot_seconds);

    int hours = tot_seconds / 3600;
    int minutes = (tot_seconds % 3600) / 60;
    int seconds = tot_seconds % 60;

    printf("Time: %d hours:%d minutes:%d seconds", hours, minutes, seconds);
    return 0;
}