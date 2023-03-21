#include <stdio.h>

int main(void)
{
	long long nInput = 0;

	scanf("%X", &nInput);

	for (int i = 1; i <= 15; i++)
	{
		printf("%X*%X=%X\n", nInput, i, nInput*i);
	}

	return 0;
}