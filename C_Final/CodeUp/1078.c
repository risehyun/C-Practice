#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nSum = 0;

	scanf("%d", &nInput);

	for (int i = 1; i <= nInput; i++)
	{
		if (i % 2 == 0)
		{
			nSum += i;
		}
	}

	printf("%d", nSum);

	return 0;
}