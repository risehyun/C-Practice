#include <stdio.h>

int main(void)
{
	int iList[5] = { 0 };
	int iMax = 0;
	int iMin = 0;

	// input
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &iList[i]);

		iMax = iList[0];
		iMin = iList[0];


		// MIN
		if (iList[i] < iMin)
		{
			iMin = iList[i];
		}

		// MAX
		if (iList[i] > iMax)
		{
			iMax = iList[i];
		}


	}

	printf("MIN : %d, MAX : %d", iMin, iMax);

	return 0;
}