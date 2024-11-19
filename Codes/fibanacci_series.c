#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, x=0,y=1,z;
    printf("Enter n vlaue\n");
    scanf("%d",&n);
    printf("Fibanacci Series is:\n");
    printf("%d\n%d\n",x,y);
    for(i=2;i<n;i++)
    {
        z=x+y;
        printf("%d\n",z);
        x=y;
        y=z;
    }
    return 0;
}