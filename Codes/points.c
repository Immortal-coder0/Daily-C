/*Program Description
Pavan Playing a mobile game. In the game Pavan's character is "Unstoppable force" that means he can perform special attack.However for each special attack it costs A points to "Unstoppable force". If Pavan currently has B points,determine the number of special attacks he performed.

Input Format
A single line of input contains two space separated integers A,B.


Output Format
Print the number of special attacks he performed while playing the game.*/

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter A,B values");
    scanf("%d %d",&a,&b);
    c=b/a;
    printf("%d",c);
}