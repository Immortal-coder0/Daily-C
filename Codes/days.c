/*Program Description
Given number of days (D). Convert that days(D) into years, weeks.

Note: Ignore Odd days.

Input Format
Single line input contains, one integer D-number of days


Output Format
convert the number of days into number of years and number of weeks and display the result*/

#include <stdio.h>
#include <math.h>

int main()
{
    int D,y,w,a;
    scanf("%d",&D);
    y=D/365;
    a=D%365;
    w=a/7;
    printf("%d\n%d",y,w);
    return 0;
}