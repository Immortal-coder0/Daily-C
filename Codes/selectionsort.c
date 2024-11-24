//Intro to selection sort

#include <stdio.h>

int main()
{
    int n, i, j, min, temp, arr[10];
    printf("Enter a value");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("The sorted elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}