/*Program Description
You're given a character ch. Figure out whether it's an Vowel or Consonant.

Input Format
A single line input containg one alphabet. 


Output Format
Print the output according to the discription. */

#include <stdio.h>
int main() {
    char ch;
    int lc, up;
    scanf("%c", &ch);

    lc = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    up = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lc || up)
        printf("VOWEL");
    else
        printf("CONSONANT");
    return 0;
}
