#include <stdio.h>

int main()
{
    int *p;
    int x;

    p = &x;
    *p = 0;

    printf(" x = %d\n", x);
    printf(" *p = %d\n", *p);

    *p += 5;
    printf(" x  = %d\n", x);
    printf(" *p = %d\n", *p);

    (*p)++;
    printf(" x = %d\n", x);
    printf(" *p = %d\n", *p);

    return 0;
}
