/*Program Description
Kumar wants to organize a culinary competition for his students. However, he has made it mandatory that only students who have attended 75% or more of the culinary classes will be eligible to participate in the competition.

Given the total number of culinary classes conducted and the number of classes attended by a student, help Kumar to determine whether the student is eligible to participate in the culinary competition or not.

Input Format
A single line input contains two space-separated integers x and y – the total number of classes conducted and the number of classes attended by that student.


Output Format
output on a single line “ELIGIBLE” if the student is eligible to participate in the competition, and “NOT ELIGIBLE” otherwise.*/

#include <stdio.h>

int main() {
    int total_classes, attended_classes;
    scanf("%d %d", &total_classes, &attended_classes);

    if ((float)attended_classes / total_classes >= 0.75) {
        printf("ELIGIBLE\n");
    } else {
        printf("NOT ELIGIBLE\n");
    }

    return 0;
}