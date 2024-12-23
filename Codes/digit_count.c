/*Program Description
Write a Program to find total digits in a given number.

Input Format
A single line contains an integer N.


Output Format
Display the total digits count in a given number.*/

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10;
        count++;
    }

    printf("Total digits: %d\n", count);

    return 0;
}