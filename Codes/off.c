/*You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end.

For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161.

Given A and B, can you predict what the calculator will print when you ask it for A+B?*/

#include <stdio.h>

int main() {
    int side,sa,v;
    scanf("%d",&side);
    sa= 6*side*side;
    v=side*side*side;
    printf("Surface area = %d and Volume = %d",sa,v);
    return 0;
}