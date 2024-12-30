/*Program Description
Your task is to convert a number into a string that contains raindrop sounds corresponding to certain potential factors. A factor is a number that evenly divides into another number, leaving no remainder.

The rules of raindrops are that if a given number:

has 3 as a factor, add 'Pling' to the result.

has 5 as a factor, add 'Plang' to the result.

has 7 as a factor, add 'Plong' to the result.

does not have any of 3, 5, or 7 as a factor, the result should be the digits of the number.

Input Format
Single line containing an integer N 


Output Format
Based on the given rules of raindrop print result. */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
        if(n%3==0)
        {
            printf("Pling");
        }
        if (n%5==0)
        {
            printf("Plang");
        }
        if(n%7==0)
        {
            printf("Plong");
        }
        else if(n%3!=0&&n%5!=0&&n%7!=0)
        {
            printf("%d",n);
        }
    
    return 0;
}