/*When two taps are working together to fill an empty tank, you can calculate the time it takes to fill the tank using the concept of rates.
Tap A fill the tank in X minutes.
Tap B fill the tank in Y minutes.*/

#include <stdio.h>

int main()
{
    int X,Y,a,b;
    scanf("%d%d",&X,&Y);
    a=X*Y;
    b=X+Y;
    printf("%d",a/b);
    return 0;
}