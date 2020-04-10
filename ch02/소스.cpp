
#include <stdio.h>

int main(void)
{
    int n, v, i = 0;

    printf("1~15사이 수를입력하시오 : ");


    while (1)
    {
        scanf_s("%d", &n);
        if (n<1 || n>15) {
            printf("1~15사이수 제대로입력해라 : ");
           
        }
        else  {
            break;
        }
    }
    printf("\n");
    for (i = 0; i < 9; i++)
    {
        v = n * (i + 1);
        printf("%d*%d=%d \n", n, (i + 1), v);
    }
    

    return 0;
	}

