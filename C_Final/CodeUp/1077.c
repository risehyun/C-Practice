#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nIndex = 0;

	scanf("%d", &nInput);

	for (nIndex = 0; nIndex <= nInput; ++nIndex)
	{
		printf("%d\n", nIndex);
	}

	return 0;
}