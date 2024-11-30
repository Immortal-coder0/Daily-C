/*Program Description
In a coding contest, there are two types of problems:

Easy problems, which are worth 1 point each
Hard problems, which are worth 2 points each
To qualify for the next round, a contestant must score at least X points. Professor solved A Easy problems and B Hard problems. Will Professor qualify or not?

Input Format
A single line input containing three space-separated integers. as follows :

X denotes qualify points.
A denotes number of easy problems solved by the Professor.
B denotes number of hard problems solved by the Professor.

Output Format
Print the output whether Professor Qualified or not . */

#include <stdio.h>

int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    if(X<=(A+2*B))
    printf("Qualify");
    else 
    printf("Not Qualify");
    return 0;
}