/*Program Description
“AquaticaCarnival” is the most successful event dedicated to children and families. The Event has more than 20 rides for children and adults and the organizers always ensure not to compromise on the safety of the visitors.
To ensure the safety of the rides, the organizers have graded the rides in the fair according to the following conditions:
Hurl Factor must be greater than 50.
Spin Factor must be greater than 60.
Speed factor must be greater than 100.

The grades are as follows:
Grade is 10 if all three conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Garde is 6 if only one condition is met.
Grade is 5 if none of three conditions are met.
Write a program display the grade of the rides, given the values of hurl factor, spin factor and speed factor of the ride under consideration. 

Input Format
First line of the input consists of 3 integers that gives the Hurl Factor,Spin Factor and Speed Factor of the ride, each separated by a space. 


Output Format
Output should display the grade of the ride depending on Conditions. */
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
    int hf,sp,sf;
    scanf("%d%d%d",&hf,&sp,&sf);
    if(hf>50&&sp>60&&sf>100)
    printf("10");
    else if(hf>50&&sp>60&&sf<=100)
    printf("9");
    else if(hf<=50&&sp>60&&sf>100)
    printf("8");
    else if(hf>50&&sp<=60&&sf>100)
    printf("7");
    else if(hf>50||sp>60||sf>100)
    printf("6");
    else 
    printf("5");
    return 0;
 }