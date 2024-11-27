// Calculation of Compound Intrest using c program. 

#include <stdio.h>
#include <math.h>

int main()
{
    int P,R,T;
    float CI;
    scanf("%d%d%d",&P,&R,&T);
    CI=(P*pow((1+R/100.00),T))-P;
    printf("%.2f",CI);
    return 0;
}