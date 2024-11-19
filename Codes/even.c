#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given Number is Even");
    }
    else 
    {
        printf("Given number is Odd");
    }
    return 0;
}