#include<stdio.h>
int main()
{
    int a[5][5];
    for(int i=0;i<=4;i++)
    {
    for (int j=0;j<=4;j++)
    {
        scanf("%d%d",&a[i][j]);
    }
    }
        for(int i=0;i<=4;i++)
        {
            for (int j=0;j<=4;j++)
            {
                               printf("%d%d\n",a[i][j]);

            }


}
}


