// Program Description
// Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.

// Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.

// Input Format
// The first line of input contains X i.e. the amount which he spends in the current month.

// The second line of input contains Y i.e his daily expenditure.


// Output Format
// Print the output according to the description.

#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if((30*Y)<=X)
    printf("YES");
    else 
    printf("NO");
    return 0;
}