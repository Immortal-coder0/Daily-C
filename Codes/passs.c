#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int mark;
    printf("Enter Student's marks");
    scanf("%d", &mark);
    if(mark>100 || mark<0)
    {
        printf("Invalid marks");
    }
    else if(mark>33 && mark<=100)
    {
        printf("Student has Passed");
    }
    else
    {
        printf("Student has Failed");
    }
    return 0;
}