#include<stdio.h>

int main() 
{
int n1,n2,n3,total;
float avg;
printf("Enter n1,n2,n3:");
scanf("%d %d %d",&n1,&n2,&n3);
total=n1+n2+n3;
printf("\n the total is %d",total);
avg=(float)total/3;
printf("\nthe average of 3 numbers:%.2f",avg);
return 0;
 }