#include<stdio.h>

int main()
{
    int A,B,C,D,E,F,G,J,i,r1,r2,r3;
    printf("Enter A,B,C,D,E,F,G,J,i values ");
    scanf("%d %d %d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&G,&J,&i);
    r1=A+B*C+(D*E)+F*G;
    printf("\nresult1=%d",r1);
    r2=A/B*C-B+A*D/3;
    printf("\nresult2=%d",r2);
    r3=A+++B---A;
    printf("\nresult3=%d",r3);
    J=(i++)+(++i);
    printf("\nJ=%d",J);
    return 0;
}


