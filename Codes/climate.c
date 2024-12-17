/*Program Description

Mr. Snowman considers the climate HOT if the temperature is above 20, otherwise he considers it as COLD. You are given the temperature C, find whether the climate is HOT or COLD.

Input Format

A single line input containing one integer. 


Output Format

Print the output according to the description.*/

 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
    int x;
    scanf("%d",&x);
    (x>20)?(printf("HOT")):(printf("COLD"));
    return 0;
 }