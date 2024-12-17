/*Program Description
Alice and Bob are playing a game. Each player rolls a regular six faced dice 3 times.

The score of a player is the sum of the values of the highest 2 rolls. The player with the highest score wins, and the game ends in a Tie if both players have the same score.

Find the winner of the game or determine whether it is a tie.

Input Format
A single line of input contains six space-separated integers A1, A2, A3, B1, B2 and B3 — the values Alice gets in her 3 dice rolls, followed by the values which Bob gets in his 3 dice rolls.


Output Format
Output on a new line Alice if Alice wins, Bob if Bob wins and Tie in case of a tie.*/

#include <stdio.h>

int calculate_score(int x1, int x2, int x3) {
    int max1 = x1 > x2 ? x1 : x2;
    int max2 = x1 > x2 ? x2 : x1;

    if (x3 > max1) {
        max2 = max1;
        max1 = x3;
    } else if (x3 > max2) {
        max2 = x3;
    }

    return max1 + max2;
}

int main() {
    int A1, A2, A3, B1, B2, B3;

    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    int alice_score = calculate_score(A1, A2, A3);
    int bob_score = calculate_score(B1, B2, B3);

    if (alice_score > bob_score) {
        printf("Alice\n");
    } else if (bob_score > alice_score) {
        printf("Bob\n");
    } else {
        printf("Tie\n");
    }

    return 0;
}
