#include<stdio.h>
#include<math.h>
int main()
{

    float p,r,t,CI;
    printf("Enter principal amount,rate of interest,time period: ");
    scanf("%f %f %f",&p,&r,&t);
    CI=p*pow(1+r/100,t)-p;
    printf("\nCompound interest=%.2f",CI);
    return 0;
}


