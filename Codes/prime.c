// C program to find the given number is a prime number or not.

#include <stdio.h>

int main()
{
    int i = 1, n, f = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            f++;
        }
        i++; 
    }
    if (f == 2)
    {
        printf("Given number is prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}