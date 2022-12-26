#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("enter the string 1:");
    gets(str1);
    printf("enter the string 2:");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("string is equal");

    }
    else
    {
        printf("string is not equal");
    }


}
