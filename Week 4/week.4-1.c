#include<stdio.h>

int main()
{

    int A,B,C,D,E,F,G,J,i;
    printf("Enter A,B,C,D,E,F,G,J,i values ");
    scanf("%d %d %d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&G,&J,&i);
    printf("\na.%d",A+B*C+(D*E)+F*G);
    printf("\nb.%d",A/B*C-B+A*D/3);
    printf("\nc.%d",A+++B---A);
    J=(i++)+(++i);
    printf("\nd.%d",J);

    return 0;
}


