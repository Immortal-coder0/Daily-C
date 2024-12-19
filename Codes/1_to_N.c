/*Program Description
You'll be a value N print all the numbers from 1 to N (Inclusive).

Input Format
A single line input contains an integer N.


Output Format
Print the output according to the discription.  */

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    return 0;
}