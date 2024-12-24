/*Program Description
You'll be given three numbers N, A and B. Print the multiplication table of number N from A TO B (Both inclusive). Refer to the sample I/O for more clarity.

It is guaranteed that 𝐴<𝐵
Input Format
A single line contains a three integers N, A, B.


Output Format
Print the multiplication table.  */

#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    for(int i = A; i <= B; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
