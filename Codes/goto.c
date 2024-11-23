// Intro to goto function

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    goto even;
    else 
    goto odd;
    even:printf("Even\n");
    return 0 ;
    odd:printf("Odd\n");
    return 0;
}