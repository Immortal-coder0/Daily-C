/*Program Description
Write a program to check whether a triangle is Equilateral, Isosceles or Scalene.

1. A triangle is said to be Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only if a == b == c

2. A triangle is said to be Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.

3. A triangle is said to be Scalene Triangle, if none of its sides are equal.

Input Format
A single line contains three sides of a Triangle S1, S2, S3. 


Output Format
Display the output according to the description. */

#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b &&b==c && a==c)
    printf("Equilateral triangle");
    else if((a==b)||(b==c)||(a==c))
    printf("Isosceles triangle");
    else 
    printf("Scalene triangle");
    return 0;
}