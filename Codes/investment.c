/*Pavan has invested his money at an interest rate of X percent per annum while the current inflation rate is Y percent per annum.

An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
Determine whether the investment made by Pavan is good or not.*/

#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X>=2*Y)
    printf("YES");
    else
    printf("NO");
    return 0;
}