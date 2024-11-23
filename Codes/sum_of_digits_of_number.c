// C program to find sum of digits of a given number 

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    printf("Sum is %d", sum);
    return 0;
}