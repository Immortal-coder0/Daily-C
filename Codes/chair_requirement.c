/*Program Description
The coding class is very famous in T-hub.
This year X students joined his class and each student will require one chair to sit on. Chef already has Y chairs in his class. Determine the minimum number of new chairs T-hub's manager must buy so that every student is able to get one chair to sit on.

Input Format
A single line of input contains two space separated integers. 

X denotes number of studentsjoined in the class and Y denotes number of chairs already in the class.


Output Format
Print the output the minimum number of extra chairs required for the students. */

#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        printf("%d",X-Y);
    }
    else
    printf("0");
    return 0;
}