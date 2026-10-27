#include<stdio.h>
int main() 
{
float F,C;
printf("Enter temperature in fahrenheit scale:");
scanf("%f",&F);
C=(F-32)*5/9;
printf("Temperature in celsius scale is %.2f",C);
return 0;
}


