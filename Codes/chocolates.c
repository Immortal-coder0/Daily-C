/*Romeo has X 5 rupee coins and Y 10 rupee coins. 
Romeo goes to a shop to buy chocolates for Juliet where each chocolate costs Z rupees.
Find the maximum number of chocolates that Romeo can buy for Juliet. */
#include <stdio.h>


int main()
{
    int a,X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    a=((5*X)+(10*Y))/Z;
    printf("%d",a);
    return 0;
}