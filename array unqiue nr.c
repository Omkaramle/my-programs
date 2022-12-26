#include<stdio.h>
int main()
{
    int i,j,k,n,arr1[100],ctr;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elemnt in array");
    for (int i=0;i<=n;i++)

    {
     scanf("%d",&arr1[i]);

    }
    for(int i=0;i<=n;i++)
    {
        ctr=0;
        for(j=0,k=n;j=k+1;j++)

        {
           if(i!=j)
           {
               if(arr1[i]=arr1[j])
               {
                   ctr++;
               }

        }
    }
if(ctr==0)
{
    printf("%d",arr1[i]);
}
    }
}
