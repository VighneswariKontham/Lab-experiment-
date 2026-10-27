#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float total,avg;
    printf("Enter s1,s2,s3,s4,s5 subject marks: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total =s1+s2+s3+s4+s5;
    printf("\ntotal=%.2f",total);
    avg=total/5.0;
    printf("\naverage=%.2f",avg);
    return 0;
}


