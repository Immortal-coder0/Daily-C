/*A blood drive aims to collect N number of blood donations.

The drive has collected X donations so far. 
Find the remaining number of donations needed to reach the target.*/

#include <stdio.h>

int main()
{
    int N,X;
    scanf("%d%d",&N,&X);
    printf("%d",N-X);
    return 0;
}