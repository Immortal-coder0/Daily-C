/*Program Description
Pavan is hungry and wants to reach home.

Pavan can travel up to 5 kilometres on 1 litre of fuel on his motorcycle.
Currently, his motorcycle is filled with X litres of fuel and his home is Y kilometres away.

Determine whether Pavan can reach his home on his motorcycle or not.

Input Format
The first line of input contains two space-separated integers X and Y.- the amount of fuel in Pavan's motorcycle and the distance to Pavan's home in kilometres. 


Output Format
Print the output as YES or NO. */

#include <stdio.h>

int main()
{
    int X,Y,a;
    scanf("%d%d",&X,&Y);
    a=X*5;
    if(a>=Y)
    printf("YES");
    else
    printf("NO");
    return 0;
}