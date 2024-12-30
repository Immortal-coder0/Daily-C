/*Convert the given integer (in seconds) to hours, minutes and seconds.*/

#include <stdio.h>

int main()
{
    int sec,s,m,h,a;
    scanf("%d",&sec);
    s=sec%60;
    a=sec/60;
    h=a/60;
    m=a%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
    return 0;
}