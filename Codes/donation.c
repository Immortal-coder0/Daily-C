/*Program Description
In a certain month, Pavan earned X rupees while Ganapathi earned Y rupees such that Y>X.
Since they want to end with exactly the same amount ,they decide to donate the difference between their income to a trust.Find the amout they donate in the month.

Input Format
A single line input contains two space separated integers X,Y. 


Output Format
Print the output, the amount they donate in the month. */

#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    printf("%d",Y-X);
    return 0;
}