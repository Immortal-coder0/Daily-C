/*Program Description
In the mathematics, the proof utilized a concept called height.
Consider a fraction x/y​.Its height is defined as the maximum of its numerator and denominator. So, for example, the height of 5/24 would be 24, and the height of 29/3 would be 29.
Given x and y, find the height of x/y.

Input Format
The only line of input contains two integers, x and y. 


Output Format
Output a single integer, which is the height of x/y​. */

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    (x>y)?(printf("%d",x)):(printf("%d",y));
    return 0;
}