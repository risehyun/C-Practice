#include <stdio.h>

int main(void)
{
	// goto���� ����� �ݺ����� ����� ������ �ϵ��� ����
	int n = 0;
	int m = 0;

	scanf("%d", &n);

reget:
	scanf("%d", &m);


	if (n-- != 0)
	{
		printf("%d\n", m);
		goto reget;
	}

	return 0;
}