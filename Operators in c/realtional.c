#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter Values of a and b");

    scanf("%d %d", &a, &b);

    printf("%d\n",a<b);
    printf("%d\n",a<=b);
    printf("%d\n",a>b);
    printf("%d\n",a>=b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    return 0;
}