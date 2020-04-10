#include<string.h>
#include <stdio.h>

struct employee {
	char name[10];
	int year;
	int pay;	
};

int main()
{
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy_s(Sptr->name, "ÀÌ¼ø½Å");
	Sptr->year = 2015;
	Sptr->pay = 5900;

	printf("%s", Sptr->name);
	printf("%d", Sptr->year);
	printf("%d\n", Sptr->pay);
}