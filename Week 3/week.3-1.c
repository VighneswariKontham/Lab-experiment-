#include<stdio.h>
#include<math.h>
int main()
{
    float n,y;
    printf("Enter a number: "); //non-negative number 
    scanf("%f",&n);
    y=sqrt(n);
    printf("\nThe square root of %f is %.2f",n,y);
    return 0;
}