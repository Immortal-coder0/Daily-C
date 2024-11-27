/*Program Description
Write a program to print days of week using if else ladder statement.

In this program, we will take a number between 1 to 7 as input from user, where 1 corresponds to Monday, 2 corresponds to Tuesday and so on. We will use if else ladder statement to print name of day in words.If any other input is given, then print "Invalid input".

Input Format
A single line input containing one integer.


Output Format
Display output according to the description. */

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
    printf("Monday");
    else if(a==2)
    printf("Tuesday");
    else if(a==3)
    printf("Wednesday");
    else if(a==4)
    printf("Thursday");
    else if(a==5)
    printf("Friday");
    else if(a==6)
    printf("Saturday");
    else if(a==7)
    printf("Sunday");
    else
    printf("Invalid input");
    return 0;
}