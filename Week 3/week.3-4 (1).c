#include<stdio.h>
int main()
{
    float s,t,d;
    printf("Enter speed(in km/h),time(in hours): ");
    scanf("%f %f",&s,&t);
    d=s*t;
    printf("\ndistance travelled=%.2fkm",d);
    return 0;
}


