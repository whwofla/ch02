﻿
#include <stdio.h>

int main(void)
{
	int i = 0, n;
	int multiply[9];

	printf("\n1~9의 정수를 입력하세요 : ");

	while (1)
	{
		scanf_s("%d", &n);
		if (n < 0 || n>9) {
			printf("\n 1~9의 정수를 입력하세요 : ");
		}
		else {
			break;
		}
	}
		printf("\n");
		for (i = 0; i < 9; i++)
		{
			multiply[i] = n * (i + 1);
			printf("%d*%d=%d \n", n, (i + 1), multiply[i]);
		}
	
}