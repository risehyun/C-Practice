#include <stdio.h>

int GetTotal(int(*arry)[4], int nSize)
{
	int i, j = 0, nSum = 0;
	for (i = 0; i < nSize; i++)
	{
		for (j = 0; j < 4; j++)
		{
			nSum += arry[i][j];
		}
	}
	return nSum;
}

void main()
{
	int nArray[5][4] = { 0 };
	int i, j = 0, nCnt = 0, nSum = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
			nArray[i][j] = rand() % 100;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", nArray[i][j]);
		printf("\n");
	}
	nSum = GetTotal(nArray, 5);
	printf("Sum : %d\n", nSum);
}