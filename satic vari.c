#include<stdio.h>
void fun()
{
    int a=1;
    static int b=2;
    printf("%d %d\n",a,b);
    a++;
    b++;
}
void main()
{
    fun();
    fun();
    fun();
}
