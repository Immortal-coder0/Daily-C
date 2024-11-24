//Intro to Bubble sort

#include <stdio.h>

int main()
{
    int a[10],i,j,n,temp;
    scanf("%d",&n);
    printf("Enter values of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Ascending Order is :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}