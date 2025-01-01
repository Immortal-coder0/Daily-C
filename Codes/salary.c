/*Program Description
Given Basic Salary, HRA and DA of an employee, calculate the PF on Basic Salary and finally print the PF and Gross Salary of an employee.

Note: PF = 12% of the Basic Salary and Gross Salary = Basic Salary + HRA + DA + PF

Input Format
Three different lines of input contains float values Salary, HRA, and DA


Output Format
Print PF and Gross Salary of an employee*/

#include <stdio.h>
#include <math.h>

int main()
{
    float hra,da,pf,base,gross;
    scanf("%f%f%f",&base,&hra,&da);
    pf=0.12*base;
    gross=base+da+hra+pf;
    printf("%.2f\n%.2f",pf,gross);
    return 0;
}