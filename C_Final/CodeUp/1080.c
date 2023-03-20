#include <stdio.h>

int main(void)
{
	int nSum = 0;
	int nInput = 0;
	int nCount = 0;

	scanf("%d", &nInput);

	while (1)
	{
		nCount++;
		nSum += nCount;

		if (nSum >= nInput)
		{
			break;
		}
	}

	printf("%d", nCount);

	return 0;
}