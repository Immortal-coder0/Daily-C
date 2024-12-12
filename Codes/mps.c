/*Program Description
Convert the Speed kilometer per hour to meter per second.

Input Format
Single line input, contains one integer value Speed (kilometers).


Output Format
Print the speed in meter per second. The result should be decimal value with 2 decimal places.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int km;
    float m;
    scanf("%d",&km);
    m=km/3.6;
    printf("%.2f",m);
    return 0;
}