#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c,s,A;
    printf("Enter sides a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2.0;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triangle=%.2f",A);
    return 0;
}


