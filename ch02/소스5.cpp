//2020.04.10
#include <stdio.h>

int main()

{
	int i = 0, sale[4] = { 157,209,251,312 };

	for (i = 0; i < 4; i++)
	{
		printf("\n address : %u sale[%d]=%d", &sale[i],i,sale[i]);
	}
	getchar();
}