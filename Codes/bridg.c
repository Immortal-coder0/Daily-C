/*Program Description
You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a bridge that can withstand a weight of Z kilograms.

Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

Input Format
Single line input, contains three space-separated integers x, y, z;


Output Format
Print output according to the discription..*/

#include <stdio.h>

int main()
{
    int X,Y,Z,a;
    scanf("%d%d%d",&X,&Y,&Z);
    a=(Z-Y)/X;
    printf("%d",a);
    return 0;
}