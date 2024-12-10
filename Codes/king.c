/*Program Description
King loves to go on tours with his friends.

King has N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.

Input Format
The first and only line of each test case contains two space-separated integers N and M — the number of cars of 5-seaters and 7-seaters, respectively.  


Output Format
Display maximum number of people that they can travel together. */

#include <stdio.h>
#include <math.h>

int main()
{
    int N,M,a;
    scanf("%d%d",&N,&M);
    a=(5*N)+(7*M);
    printf("%d",a);
    return 0;
}