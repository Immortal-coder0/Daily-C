/*Program Description
In Tournament, a football player gets 2 points for each goal and 1 point for each assist.

Messi has A goals and B assists this season, whereas Ronaldo has X goals and Y assists.

Find out the player with more points this season.

Input Format
The first and only line of input contains four space-separated integers A, B, X and Y-the number of goals and assists that Messi has and the number of goals and assists that Ronaldo has respectively.


Output Format
Print a single line containing: Messi, if Messi has more points than Ronaldo. Ronaldo, if Ronaldo has more points than Messi. Equal, if both have equal points.*/

#include <stdio.h>

int main() {
    int A, B, X, Y;
    
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    
    int messi_points = 2 * A + B;
    int ronaldo_points = 2 * X + Y;
    
    if (messi_points > ronaldo_points) {
        printf("Messi\n");
    } else if (ronaldo_points > messi_points) {
        printf("Ronaldo\n");
    } else {
        printf("Equal\n");
    }
    
    return 0;
}
