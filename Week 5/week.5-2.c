#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter electricity units consumed:");
    scanf("%d",&units);
    if(units<0)
        printf("Invalid input");
    else if(units<=100)
    {   bill=units*1.50;
        printf("Total bill=Rs.%.2f",bill);
    }
    else if(units<=200)
    {   bill=units*2.50;
        printf("Total bill=Rs.%.2f",bill);
    }
    else if(units<=500)
    {   bill=units*4.00;
        printf("Total bill=Rs.%.2f",bill);
    }
    else
    {   bill=units*6.00;
        printf("Total bill=Rs.%.2f",bill);
    }
    return 0;
}
