#include <stdio.h>

int main()
{
    int n, rem, rev = 0, temp;
    printf("Enter n vlaue\n");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev)
        printf("Given Number is Palindrome Number");
    else
        printf("Given Number is Not a Palindrome Number");
    return 0;
}