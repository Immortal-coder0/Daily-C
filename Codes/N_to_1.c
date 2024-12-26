/*Program Description
You will be given a number N. Print all the numbers from N to 1 (Both inclusive).

Input Format
A single line contains an integer N. 


Output Format
Display the all the numbers from N to 1.*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = N; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}