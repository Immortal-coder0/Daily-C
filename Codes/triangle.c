//Given the base and height of the triangle.Calculate the area of the triangle.

#include <stdio.h>

int main()
{
    int base,height,area;
    scanf("%d%d",&base,&height);
    area=0.5*base*height;
    printf("%d",area);
    return 0;
}