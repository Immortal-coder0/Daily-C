/*Program Description
Find the area of Triangle using Heron's formula.

Hint:Heron's Formula= sqrt(s*(s-a)*(s-b)*(s-c).where a,b,c are sides.

Input Format
Single line input contains three integers a,b,c.


Output Format
Print area of triangle. The result should be decimal value with 4 decimal places.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float ar,s;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4f",ar);
    return 0;
}