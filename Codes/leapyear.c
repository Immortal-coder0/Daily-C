#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int y;
    printf("Enter Year to check");
    scanf("%d",&y);
    if(y%4==0)
    {
        printf("Given Year is Leap Year");
    }
    else if(y%400==0)
    {
        printf("Given Year is Leap Year");
    }
    else 
    {
        printf("not a leap year");
    }
    return 0;
}