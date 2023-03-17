#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int nCounter = 0;

	int x = 5;
	int y = 0;
	int nLength = 9;
	int nDirection = -1;

	int aList[5][5] = { 0 };

	for (nLength = 9; nLength > 0; nLength -= 2)
	{
		for (i = 0; i < nLength; ++i)
		{
			if (nLength / 2 + 1 > i) x += nDirection;
			else y -= nDirection;
			++nCounter;

			aList[y][x] = nCounter;

		}

		nDirection = -nDirection;

	}

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');

	}


	return 0;
}