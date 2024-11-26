/*Program Description
Write a Program to print the color name by taking the Color code as input.
V -> Violet
I -> Indigo
B -> Blue
G -> Green
Y -> Yellow
O -> Orange
R -> Red

Note: If none of the above mentioned character is entered as input, print -1 as output.

Input Format
Single line input containing, one character 


Output Format
Print the output according to the description.*/

#include <stdio.h>
#include <math.h>

int main()
{
    char c;
    scanf("%c",&c);
    if (c=='V'||c=='v')
    printf("Violet");
    else if (c=='G'||c=='g')
    printf("Green");
    else if (c=='I'||c=='i')
    printf("Indigo");
    else if (c=='B'||c=='b')
    printf("Blue");
    else if (c=='Y'||c=='y')
    printf("Yellow");
    else if (c=='O'||c=='o')
    printf("Orange");
    else if (c=='R'||c=='r')
    printf("Red");
    else 
    printf("-1");
    return 0;
}