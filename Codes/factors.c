/*Program Description
Write a Program to find the Factors of given number.

Input Format
A single line contains an integer N.


Output Format
Display all Factors of given number.  */

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}