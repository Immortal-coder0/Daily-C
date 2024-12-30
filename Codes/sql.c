/*Kumar has recently started learning from the new SQL course.

He has a table which initially has R rows and C columns.
He then adds E extra rows to it. How many total cells does he have finally?*/

#include <stdio.h>

int main()
{
    int a,R,C,E;
    scanf("%d%d%d",&R,&C,&E);
    a=R+E;
    printf("%d",a*C);
    return 0;
}