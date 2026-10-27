#include<stdio.h>
#include<math.h>
int main()
{
//finding the roots of a quadratic equation
    float a,b,c,r1,r2,d;
    printf("Enter coefficients a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        //roots are real and distinct
    {   r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nroot1=%.2f",r1);
        printf("\nroot2=%.2f",r2);
    }

    else if(d==0)
        // roots are real and equal
    {   r1=-b/(2*a);
        printf("\nroot1=root2=%.2f",r1);
    }
    else
        printf("Roots are imaginary");
    return 0;
}