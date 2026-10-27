#include<stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
    printf("Enter two numbers:");
    scanf("%f %f",&num1,&num2);
    printf("\n Calculator menu");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        result=num1+num2;
        printf("Result=%.2f",result);
        break;
    case 2:
        result=num1-num2;
        printf("Result=%.2f",result);
        break;
    case 3:
        result=num1*num2;
        printf("Result=%.2f",result);
        break;
    case 4:

        if(num2==0)
        {
            printf("Division by zero is not possible");
        }
        else
        {   result=num1/num2;
            printf("Result=%.2f",result);
        }
        break;
    default:
        printf("Invalid option");
    }
    return 0;
}
