/*Program Description
Write a program to calculate and print the Electricity bill of a given customer. Units consumed by the user should be taken from the keyboard and display the total amount to be paid by the customer. The charges are as follows

Unit Charge/unit

upto 199 @1.20

200 and above but less than 400 @1.50

400 and above but less than 600 @1.80

600 and above @2.00

If the bill exceeds Rs. 400 then a surcharge of 15% will be charged.

If the bill is less than Rs. 400 then a minimum surcharge amount should be Rs. 100/-.

Input Format
A single line input containing, one integer.


Output Format
Display output according to the description.*/

#include <stdio.h>

int main()
{
    int x;
    float s, c, r;

    scanf("%d", &x);

    if (x <= 199)
        r = 1.2;
    else if (x > 199 && x < 400)
        r = 1.5;
    else if (x >= 400 && x < 600)
        r = 1.8;
    else if (x > 600)
        r = 2.0;

    if ((x * r) > 400)
        s = 0.15 * (x * r);

    else if ((x * r) <= 400)
        s = 100;

    c = (x * r) + s;
    printf("%.2f", c);

    return 0;
}