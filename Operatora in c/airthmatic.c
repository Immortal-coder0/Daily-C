#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);

    printf("Airthmatic Operations are as follows:\n ");
    c = a + b;
    printf("%d\n", c);

    c = a - b;
    printf("%d\n", c);

    c = a * b;
    printf("%d\n", c);

    c = a / b;
    printf("%d\n", c);

    c = a % b;
    printf("%d", c);

    return 0;
}