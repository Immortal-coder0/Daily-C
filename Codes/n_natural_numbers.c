/*Program Description
You'll be given a number N.Find out Sum of first N natural numbers.

Input Format
A single line contains an integer N.


Output Format
Display the sum of N natural numbers.  */

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int sum = (N * (N + 1)) / 2;
    printf("%d\n", sum);
    return 0;
}