#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nCount = 0;

	scanf_s("%d", &nInput);
	if (nInput < 1)
	{
		nInput = 1;
	}

	else if (nInput > 9)
	{
		nInput = 9;
	}

	while (nCount < nInput)
	{
		printf("*");
		nCount++;
	}

	printf("\n");

	return 0;
}