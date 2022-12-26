#include<stdio.h>
void main()
{
    int a, n,sum;
    printf("enter the number");
    scanf("%d",&n);
    //printf("%d",n);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
                sum=sum+i;
                    printf("%d\n",sum);


        }
        else
        {
            //printf("odd");
        }
    }
}
