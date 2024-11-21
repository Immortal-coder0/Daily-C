#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a=4, b=2,c;
    c=a&b;
    printf("%d\n",c);
     c=a|b;
    printf("%d\n",c);
     c=a<<b;
    printf("%d\n",c);
     c=a>>b;
    printf("%d\n",c);
     c=a^b;
    printf("%d\n",c);
     c=~a;
    printf("%d\n",c);
     c=~b;
    printf("%d\n",c);
    
    return 0;
}