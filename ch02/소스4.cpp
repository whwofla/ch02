#include <stdio.h>

long int fact(int);

int main()
{
	int n, result;
	printf("\n정수를 입력하세요 : ");
	scanf_s("%d", &n);
	result = fact(n);
	printf("\n\n%d의 팩토리얼값음 %d입니다.", n);

}
long fact(int n)
{
	int value;
	if (n <= 1) {
		printf("\nfact(1) 함수호출!");
		printf("\nfact(1)값 1반환");
		return 1;

	}
	else {
		printf("\nfact(%d)함수호출!", n);
		value=(n)
	}      미완 아직 덜함
}