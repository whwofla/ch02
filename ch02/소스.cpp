
#include <stdio.h>

int main(void)
{
    int n, v, i = 0;

    printf("1~15���� �����Է��Ͻÿ� : ");


    while (1)
    {
        scanf_s("%d", &n);
        if (n<1 || n>15) {
            printf("1~15���̼� ������Է��ض� : ");
           
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

