/*Given the base1, base2, and height of Trapezium.
Calculate the area of Trapezium.
Note: Adjust the area upto four decimal points.*/

#include <stdio.h>


int main()
{
    int base1,base2,height;
    float ar;
    scanf("%d%d%d",&base1,&base2,&height);
    ar=((base1+base2)/2.0)*height;
    printf("%.4f",ar);
    return 0;
}