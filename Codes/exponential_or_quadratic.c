/*Program Description
Does 2 ^n > n^2 hold? 

Input Format
Input is given from Standard Input in the following format:

n  


Output Format
If 2 ^n > n^2 , print Yes; otherwise, print No. */

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    if (pow(2, n) > pow(n, 2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}