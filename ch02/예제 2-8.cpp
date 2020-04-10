#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    int* ptr;

    ptr = &i;
    ptr = &j;
    i = *ptr;

    printf("%d,%d\n", i, j);

    return 0;
}

