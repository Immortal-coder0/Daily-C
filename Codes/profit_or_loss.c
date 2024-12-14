/*Program Description
Write a program to calculate profit or loss on a transaction. Given that, the cost price and selling price of an item respectively.

Note: If cost price and selling price are equal then print "No Profit and No Loss".

Input Format
The first line of input contains cost price of an item.

The second line of input contains selling price of an item.


Output Format
Print the output according to the description.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(cp==sp)
    printf("No Profit and No Loss");
    else if(cp>sp)
    printf("Loss");
    else 
    printf("Profit");
    return 0;
}