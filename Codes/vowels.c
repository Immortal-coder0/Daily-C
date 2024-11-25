// Program to find Vowels,Digits Spaces and Consonants in a given array

#include <stdio.h>

int main()
{
    char a[100];
    int i,v=0,c=0,d=0,s=0;
    printf("Enter\n");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='i')
        v++;
        else if(a[i]>='0'&&a[i]<='9')
        d++;
        else if(a[i]==' ')
        s++;
        else
        c++;
    }
    printf("Vowels:%d\n",v);
    printf("Digits:%d\n",d);
    printf("Spaces:%d\n",s);
    printf("Consonants:%d\n",c);
    return 0;
}