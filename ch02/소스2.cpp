#define CRT_SECURE_NO_WARNING
#include<string.h>
#include <stdio.h>

	
	struct employee  {
		char name[10];
		int year;
		int pay;

	};
	
	int main()
	{
		int i;
		struct employee Lee[4] = {
		{"����ȣ",  2014,  4200},
		{"���ѿ�",  2014,  4200},
		{"�̻��",  2014,  4200},
		{"�̻��",  2014,  4200},
		};

		for (i = 0; i < 3; i++)
		{
			printf("%s", Lee[i].name);
			printf("%d", Lee[i].year);
			printf("%d\n", Lee[i].pay);
			

		}

	}
