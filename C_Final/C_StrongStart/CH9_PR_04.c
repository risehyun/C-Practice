#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int nCounter = 0;

	// int�� ��Ұ� 5�� 5���� �̷��� 2���� �迭�� �����ϰ� ��ü ��Ҹ� ��� 0���� �ʱ�ȭ �Ѵ�.
	int aList[5][5] = { 0 };

	for (i = 0; i < 5; i++)
	{
		if(i%2 == 0)
			for (j = 0; j < 5; ++j)
				aList[i][j] = ++nCounter;
		else
			for (j = 0; j < 5; j++)
			{
				aList[i][4 - j] = ++nCounter;
			}
	}

	// �迭 ���

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}


	return 0;
}