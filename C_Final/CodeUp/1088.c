#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int i = 0;

	scanf("%d", &nInput);

	for (i = 0; i <= nInput; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}

		printf("%d ", i);
	}

	return 0;
}