#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c values ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nMaximum=%d",(a>=b && a>=c)?a:(b>=a && b>=c)?b:c);
    return 0;
}


