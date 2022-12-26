#include<stdio.h>
int main()
{
    int size,largest;
    printf("enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("%d",size);
    for (int i=1;i<size;i++)
    {
        scanf("%d",size[i]);

    }
    largest=size[0];
    for (int i=1;i<size;i++)
    {
        if (largest<size[i])
       largest=size[i];
    }
    printf("%d",largest);
}
