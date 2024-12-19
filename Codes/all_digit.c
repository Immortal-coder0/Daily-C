/*Program Description
Write a Program to Find the sum of all the digits in the Given Number.

Input Format
A single line contains an integer N.


Output Format
Display the given integer digits sum  */

#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}