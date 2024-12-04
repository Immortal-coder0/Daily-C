/*Pavan decided to redecorate his house,and now needs to decide between two different styles of interior design.

For first style,tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.
For the second style,tiling the floor will cost X2 rupees and painting the wallls will cost Y2 rupees.
Pavan will choose whichever style has the lower total cost. How much will Pavan pay for his interior design?*/

#include <stdio.h>

int main()
{
    int X1,X2,Y1,Y2,a,b;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    a=X1+Y1;
    b=X2+Y2;
    if(a>b)
    printf("%d",b);
    else
    printf("%d",a);
    return 0;
}