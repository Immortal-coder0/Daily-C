/*Program Description
Given an integer, n, perform the following conditional actions:

If n is odd, print weird
If n is even and in the inclusive range of 2 to 5, print not weird
If n is even and in the inclusive range of 6 to 20, print weird
If n is even and greater than 20, print not weird

Input Format
A single line containing a positive integer, n. 


Output Format
Print the output according to the conditional actions.*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    printf("weird");
    else if(n%2==0)
    {
        if(n>=2&&n<=5)
        printf("not weird");
        else if(n>=6&&n<=20)
        printf("weird");
        else if(n>20)
        printf("not weird");
    }
    return 0;
}