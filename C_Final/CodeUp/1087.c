#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nSum = 0;

	scanf("%d", &nInput);

	int nCount = 1;

	while (nSum < nInput)
	{
		nSum += nCount;
		nCount++;
	}

	printf("%d", nSum);


	return 0;
}