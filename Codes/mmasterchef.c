/*Program Description
Teja has been working hard to compete in MasterChef. He is ranked X out of all contestants. However, only 10 contestants would be selected for the finals.

Check whether Teja made it to the top 10 or not?

Input Format
A single line of input consists of one integer X — the current rank of Teja.


Output Format
output on a new line, YES, if Teja made it to the top 10 and NO otherwise.*/

#include <stdio.h>

int main() {
    int rank;
    scanf("%d", &rank);
    if(rank <= 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}