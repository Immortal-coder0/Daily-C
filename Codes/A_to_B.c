/*Program Description
You will be given two values A and B respectively. Print the numbers from A to B (Both inclusive)

It is guaranteed that A≤B
Input Format
A single line input containing two space-separated integers.


Output Format
Display output according to the discription.  */

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    for(int i = A; i <= B; i++) {
        printf("%d ", i);
    }
    return 0;
}