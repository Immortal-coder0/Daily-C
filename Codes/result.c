/*Program Description
Given the marks (out of 100) of 5 different subjects viz. English, Maths, Physics, Chemistry, Computer Science. Determine if the student is PASSED or FAILED in the exam.

A student is cosidered as PASS, if and only if he/she gets more than 34 marks in EACH and EVERY subject.
Input Format
A single line input containing five space-separated integers. 


Output Format
Print the output according to the description. */

#include <stdio.h>

int main()
{
    int e,m,p,c,cs;
    scanf("%d%d",&e,&m,&p,&c,&cs);
    if(e>34&&m>34&&p>34&&c>34&&cs>34)
    printf("PASSED");
    else
    printf("FAILED");
    return 0;
}