#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nMax = 0;

	scanf_s("%d", &nMax);

	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}

	printf("MAX : %d", nMax);

	return 0;
}