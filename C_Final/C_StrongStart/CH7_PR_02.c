#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 5)
	{
		j = 0;			// �߿�! �� �κ��� �־�� �� �ٸ��� ���� ����� �� �ְ� �ȴ�.
		                // ��ø�� �ݺ����� ������ �� ����� �ʱ�ȭ �ڵ带 ������ �ʵ��� ��������.

		while (j < 5)
		{
			printf("*\t");
			++j;
		}

		printf("\n");
		++i;
	}

	return 0;
}