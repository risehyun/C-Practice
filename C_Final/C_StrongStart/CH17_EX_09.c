#include <stdio.h>

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (b > nMax) nMax = b;
	if (c > nMax) nMax = c;

	return nMax;
}

int __cdecl main(void)
{
	// int �Ű����� ���� �޾� int �ڷḦ ��ȯ�ϴ� �Լ� ������ ���� �� ����
	int(__cdecl * pfGetMax)(int, int, int) = GetMax;

	// �Լ� �����͸� �̿��� �Լ��� ȣ���Ѵ�.
	printf("MAX : %d\n", pfGetMax(1, 3, 2));

	return 0;
}