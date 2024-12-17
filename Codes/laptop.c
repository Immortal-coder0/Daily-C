/*Program Description
Om has X rupees. He wants to gift a laptop worth N rupees to his girlfriend.

We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds of IIIT-A. Currently there are M rupees in the fund and Om can use the fund as much as he wants.

Find whether Om can gift his girlfriend a new laptop.

Input Format
The first and only line of input contains three space-separated integers X, N, and M — the amount Om has, the price of the laptop, and the amount present in the Gymkhana fund respectively.


Output Format
Output YES if Om can buy the laptop and NO otherwise.*/

#include <stdio.h>

int main() {
    int X, N, M;
    scanf("%d %d %d", &X, &N, &M);

    if (X + M >= N) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}