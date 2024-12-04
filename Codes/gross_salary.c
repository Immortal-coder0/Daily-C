/*Program Description
Given basic salary of an employee as input and calculate its gross salary according to following.
Basic Salary <=10000 ==> DA = 80% & HRA = 20%
Basic Salary <=20000 ==> DA = 90% & HRA = 25%
Basic Salary >20000 ==> DA = 95% & HRA = 30%

Gross Salary = Basic Salary + DA + HRA

Note: Display the gross salary in a single line with 2 decimal places after point.

Input Format
Single line input containing, one integer value. 


Output Format
Print output according the description.*/

#include <stdio.h>

int main()
{
    int basic_salary;
    float gs,da,hr;
    scanf("%d",&basic_salary);
    if(basic_salary<= 10000)
    {
        da=(0.8*basic_salary);
        hr=(0.2*basic_salary);
    }
    else if(basic_salary<= 20000)
    {
        da=(0.9*basic_salary);
        hr=(0.25*basic_salary);
    }
    else if(basic_salary>20000)
    {
        da=(0.95*basic_salary);
        hr=(0.3*basic_salary);
    }
    gs=basic_salary+da+hr;
    printf("%.2f",gs);
    return 0;
}