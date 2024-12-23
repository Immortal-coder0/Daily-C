/*Program Description
You are given four distinct integers a, b, c, d.

Bolt and three other people are running a Marathon. The value a is the distance that Bolt has run and b, c, d correspond to the distances the other three participants ran.

Output the number of participants in front of Bolt. 

Input Format
The only line of input consists of four distinct integers a, b, c, d. 


Output Format
Output a single integer — the number of participants in front of Bolt. */

#include <stdio.h>

int main() {
    int a, b, c, d, count = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b > a) count++;
    if (c > a) count++;
    if (d > a) count++;

    printf("%d\n", count);

    return 0;
}