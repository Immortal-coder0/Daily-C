/*Program Description
Life is a like a boX of of mozzarella sticks. You neveR know what you're gonna get, but you can predict with 100 percent accuracy that it will be a mozzarella stick.

Aditya's colleague issued a challenge to Aditya: "If you eat more than X mozzarella sticks, I'll give you 30 rupees for each extra one you eat".

For example, if X=5 and Aditya eats 8 sticks, he would receive 90 rupees because he ate 3 extra sticks.

You know that the restaurant serves Y mozzarella sticks per plate.
You also know that Aditya received R rupees from his colleague as a result of the challenge.

What's the maximum number of plates of mozzarella sticks that Aditya could have ordered? Note: Aditya won't order a new plate till he finishes eating all the sticks from the previous one. However, it's possible that Aditya didn't finish all the sticks from the final plate he ordered.

Input Format
A single line of input, containing three space-separated integers X,Yand R — the lower limit on the number of sticks, the number of sticks on a single plate, and the money received by Aditya.


Output Format
Print the maximum number of plates Aditya could have ordered.

Constraints
1<=X<=100 1<=Y<=10 0<=R<=3.104 It is guaranteed that R is a multiple of 30.*/

#include <stdio.h>

int main()
{
    int X,Y,p,R,m,ex;
    scanf("%d%d%d",&X,&Y,&R);
    ex=R/30;
    m=X+ex;
    if(m%Y!=0)
    p=(m/Y)+1;
    else if(m%Y==0)
    p=m/Y;
    printf("%d",p);
    return 0;
}