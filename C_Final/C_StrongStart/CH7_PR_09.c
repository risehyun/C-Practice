#include <stdio.h>

int main(void)
{

	int iCount = 0;
	int iSum = 0;

	for (int i = 0; i <= 100; i++)
	{
		if (i % 4 == 0)
		{
			++iCount;
			iSum += i;

		}

	}

	printf("4�� ��� ���� : %d\n", iCount);
	printf("4�� ��� �հ� : %d\n", iSum);


	return 0;
}