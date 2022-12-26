#include<stdio.h>
int main()
{
    int i,n,a1[100],a2[100];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elemnt in array");
    for (int i=0;i<=n;i++)

    {
     scanf("%d",&a1[i]);
    }
    for(int i=0;i<=n;i++)
    {
         a2[i]=a1[i];

    }
    printf("array 2 elemnts:");
    for(int i=0;i<=n;i++)
    {
    printf("% d",a2[i]);
    }
    printf("\n\n");
}
