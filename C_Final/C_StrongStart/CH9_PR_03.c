#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

	// 여기에 들어갈 코드를 작성합니다.

	for (i = 0; i < 4; i++)
	{
		nMinIndex = i;
		for (j = i + 1; j < 5; j++)
		{
			if (aList[nMinIndex] > aList[j]) nMinIndex = j;
		}

		if (nMinIndex != i)
		{
			nTmp = aList[nMinIndex];
			aList[nMinIndex] = aList[i];
			aList[i] = nTmp;
		}
	}


	// 이하 코드는 수정하지 않습니다.

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');


	return 0;
}