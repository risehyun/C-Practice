#include <stdio.h>

int main(void)
{
	int nInput = -1;

	while (nInput < 0 || nInput > 10)
	{
		printf("Input numper : ");
		scanf_s("%d", &nInput);

	}

	puts("End");

	return 0;
}