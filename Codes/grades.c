/*Program Description
Write a program that takes marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer Science as input and calculate percentage and grade according to given conditions:

If percentage >= 90% : Print:Grade A
If percentage >= 80% : Print:Grade B
If percentage >= 70% : Print:Grade C
If percentage >= 60% : Print:Grade D
If percentage >= 40% : Print:Grade E
If percentage < 40% : Print:Grade F

Input Format
A single line containing, five space-separated integers which denotes marks.


Output Format
Print the output according to the description. */

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,e,x;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=(a+b+c+d+e)/5;
    if(x>=90)
    printf("Grade A");
    else if(x>=80)
    printf("Grade B");
    else if(x>=70)
    printf("Grade C");
    else if(x>=60)
    printf("Grade D");
    else if(x>=40)
    printf("Grade E");
    else if(x<40)
    printf("Grade F");
    return 0;
}