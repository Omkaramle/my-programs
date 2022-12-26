#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int *p;
    p=&num;
    printf("address of variable is:%x\n",p);
    printf("value of variable is%d:",*p);

}
