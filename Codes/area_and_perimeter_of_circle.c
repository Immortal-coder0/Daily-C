/*Given an integer radius of the circle.
 Find the area and perimeter of circle.

Note:
    1. Adjust the output to 2 decimal places after point.
    2. Take the value of 'pi' as 3.14*/

#include <stdio.h>

int main()
{
    int radius;
    float p,ar;
    scanf("%d",&radius);
    p=2.0*3.14*radius;
    ar=3.14*radius*radius;
    printf("%.2f\n%.2f",ar,p);
    return 0;
}