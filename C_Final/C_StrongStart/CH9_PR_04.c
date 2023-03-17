#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int nCounter = 0;

	// int형 요소가 5행 5열로 이뤄진 2차원 배열을 선언하고 전체 요소를 모두 0으로 초기화 한다.
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

	// 배열 출력

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