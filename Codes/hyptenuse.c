/*Program Description
Find the Hypotenuse of a right angled triangle with two given sides X,Y.

Input Format
single line input containing, two separated integer values say X and Y.


Output Format
Print the hypotenuse of the right angled triangle. The result should be a double value with 2 decimal places.*/

#include <stdio.h>

int main()
{
    int X=5,Y=6;
    double a;
    a=sqrt((X*X)+(Y*Y));
    printf("%.2lf",a);
    return 0;
}