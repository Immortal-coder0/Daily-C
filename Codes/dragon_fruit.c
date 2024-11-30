/*One day Pavan and his friend Teja decided to buy a Dragon Fruit. After that the Dragon Fruit was weighed, and the scales showed X kilos. They rushed home and decided to divide the fruit, however they faced a hard problem.

Pavan and Teja are great fans of even numbers, that's why they want to divide the Dragon Fruit in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide that in the way they want. For sure, each of them should get a part of positive weight.*/

#include <stdio.h>

int main()
{
    int X;
    scanf("%d",&X);
    if(X%2==0&& X>=4)
    printf("YES");
    else
    printf("NO");
    return 0;
}