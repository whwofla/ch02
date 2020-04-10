#define CRT_SECURE_NO_WARNING

#include <stdio.h>


int main()
{
	int i, j, k=5;

		for (i = 0; i < 5; i++)
		{
			printf("\n");
			
			for (k = 0; k < 5-i; k++)
			{
				printf(" ");
			}
			
			for (j = 0; j < i*2+1; j++)
			{
				printf("@");
			}

			
		}
		
		

		return 0;
}