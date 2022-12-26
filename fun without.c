#include<stdio.h>
void sum()
{
    int a,b,sum;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d",sum);
}
int main()
{

    printf("sum of two number:");
    sum();
}

