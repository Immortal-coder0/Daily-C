/*Program Description
If you wanna party, if you, if you wanna party Then put your hands up

Ram wants to host a party with a total of N people.

However, the party hall has a capacity of X people. Find whether Ram can host the party.

Input Format
A single line of input consists of two space-separated integers N and X — the total number of people and the capacity of the party hall.


Output Format
Output on a new line, YES, if Chef can host the party and NO otherwise.*/

#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    if (N <= X) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}