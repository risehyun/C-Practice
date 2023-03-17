#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int nCounter = 0;
	int nFlag = 1;

	int aList[5][5] = { 0 };

	for (i = 0; i < 5; ++i)
	{
		if (nFlag)
		{
			for (j = 0; j < 5; ++j)
			{
				++nCounter;
				aList[j][i] = nCounter;

			}

			nFlag = 0;

		}

		else 
		{
			for (j = 4; j > -1; --j)
			{
				++nCounter;
				aList[j][i] = nCounter;
			}

			nFlag = 1;
		}
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