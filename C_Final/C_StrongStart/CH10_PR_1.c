// �Ű������� INT�� �ڷ� 4���� �޾� �� �� ���� ���� ���ڸ� ��ȯ�ϴ� GetMin() �Լ��� �ۼ��϶�.

#include <stdio.h>


int GetMin(int _a, int _b, int _c, int _d)
{
	int nMin = _a;

	if (nMin > _b)
	{
		nMin = _b;
	}

	else if (nMin > _c)
	{
		nMin = _c;
	}

	else if (nMin > _d)
	{
		nMin = _d;
	}

	return nMin;
}

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	int nMin = GetMin(a, b, c, d);
	
	printf("%d", nMin);

	return 0;
}