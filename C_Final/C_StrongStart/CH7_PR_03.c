#include <stdio.h>

int main(void)
{
	int i = 1;
	int nSum = 0;

	while (i <= 10)
	{
		nSum += i;
		++i;
	}

	printf("Total : %d", nSum);

	return 0;
}