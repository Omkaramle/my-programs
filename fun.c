#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    int *p=&a;
    int *q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("%d  %d",temp);

}
