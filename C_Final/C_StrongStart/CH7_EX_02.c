#include <stdio.h>

int main(void)
{
	char ch = 0;
	int nIndex = 0;

	while ((ch = getchar()) != '\n')
	{
		// ���ۿ��� ���� ������ �ε����� ���� ����Ѵ�.
		printf("%02d\t%c\n", nIndex, ch);

		// �� ���ڸ� ��������� �ε����� 1 ���� ��Ų��.
		++nIndex;
	}

	return 0;
}