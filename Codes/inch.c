/*Program Description
You'll be given a person's height in inches. Write a program to convert it into centimeters.

Input Format
A single line of input cotains an integer denoting height in inches.


Output Format
Print height in centimeters adjusted to 2 decimal places after point.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int h;
    float cm;
    scanf("%d",&h);
    cm=h*2.54;
    printf("%.2f",cm);
    return 0;
}