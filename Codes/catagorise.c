/*Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

If the Person's height is less than 150 cm, then print Person is Dwarf.
If the Person's height is greater than 150 cm and less than or equal to 165 cm, then print Person is average heighted.
If the Person's height is greater than 165 cm and less than or equal to 195 cm, then print Person is taller.
If the above conditions are not satisfied, print Abnormal height.*/


#include <stdio.h>

int main()
{
    int h;
    scanf("%d",&h);
    if(h<150)
    printf("Person is Dwarf.");
    else if(h<=165)
    printf("Person is average height.");
    else if(h<=195)
    printf("Person is taller.");  
    else
    printf("Abnormal height");  
    return 0;
}