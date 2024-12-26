/*Program Description
An important resolution is being discussed in the Parliament. There are N members present in the Parliament out of which X members voted in favour of the resolution and the remaining voted against it.

According to the constitution, a resolution is passed if and only if half or more than half of the members present in the Parliament vote in favour of the resolution.

Determine if the resolution is passed or not.

Input Format
A single line input contains two space-separated integers N and X — the total number of members present in the Parliament and the number of members who voted in favour of the resolution.


Output Format
Output YES if the resolution is passed. Otherwise, output NO.*/

#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    if (X >= (N + 1) / 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}