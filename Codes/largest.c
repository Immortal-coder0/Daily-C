#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Enter a,b values");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("Greater number is %d",a);
    }
    else
    {
        printf("Greater number is %d",b);
    }
    return 0;
}