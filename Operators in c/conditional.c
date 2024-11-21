#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter Values of a and b");

    scanf("%d %d",&a,&b);
    c=(a<b)?a:b;
    printf("c value is %d",c);


    return 0;
}