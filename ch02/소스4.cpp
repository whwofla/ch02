#include <stdio.h>

long int fact(int);

int main()
{
	int n, result;
	printf("\n������ �Է��ϼ��� : ");
	scanf_s("%d", &n);
	result = fact(n);
	printf("\n\n%d�� ���丮���� %d�Դϴ�.", n);

}
long fact(int n)
{
	int value;
	if (n <= 1) {
		printf("\nfact(1) �Լ�ȣ��!");
		printf("\nfact(1)�� 1��ȯ");
		return 1;

	}
	else {
		printf("\nfact(%d)�Լ�ȣ��!", n);
		value=(n)
	}      �̿� ���� ����
}