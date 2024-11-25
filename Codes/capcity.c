/*Program Description
Consider a disk has 2 surfaces, each surface is divided into T tracks and each track is divided into S sectors, each sector is divided into B blocks. Each block has 512 bytes of memory. So find the capacity of the disk (in KB's).

Input Format
Single line input, containing three space-separated integers T, S, B. 


Output Format
Print the Capacity of the disk(in KB's).*/

#include <stdio.h>

int main()
{
    int T,S,B,c;
    scanf("%d%d%d",&T,&S,&B);
    c=T*S*BWWWWW;
    printf("%d KB",c);
    return 0;
}