/*Program Description
Vijay is confused whether to go out and eat at the restaurant or order food online.

The online order costs N rupees while the cost of eating at the restaurant is M rupees. However, Vijay has a discount coupon with which he can avail flat 10% off on his online order.

Find the cheaper option for Vijay to eat, i.e., whether to order food online or eat at the restaurant.

Input Format
A Single line of input consists of two space-separated integers N and M, the cost of ordering online and eating at the restaurant respectively.


Output Format
output on a new line: ONLINE, if Vijay gets a better deal in online ordering, DINING, if Vijay gets a better deal in eating at the restaurant, EITHER, if both deals cost the same.*/

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    N = N - (N * 10) / 100;
    if (N < M) {
        printf("ONLINE");
    } else if (N > M) {
        printf("DINING");
    } else {
        printf("EITHER");
    }
    return 0;
}