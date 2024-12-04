/*Program Description
In the light of G-20 summit, government has decided to keep the average air quality index (AQI) strictly below 100.
On some random day, Ram measures the AQI and found the value to be X.

Find whether the government was able to keep the AQI within limits.

Input Format
A single line of input contains an integer X-the AQI Ram measured.


Output Format
Output YES ,if the government was able to keep the AQI within limits and NO otherwise.*/

 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
    int x;
    scanf("%d",&x);
    (x<100)?(printf("YES")):(printf("NO"));
    return 0;
 }