/*Program Description
Print all the numbers from 1 to 10.

Input Format
A single line input containing one integer.


Output Format
Print the output according to the discription.  */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}