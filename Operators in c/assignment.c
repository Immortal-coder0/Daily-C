#include <stdio.h>

int main()
{
    int a=10,b;
    b=a+=2;
    printf("%d\n", b);

    b=a-=2;
    printf("%d\n", b);

    b=a*=2;
    printf("%d\n", b);

    b=a/=2;
    printf("%d\n", b);
    b=a%=2;
    printf("%d", b);
    return 0;
}
