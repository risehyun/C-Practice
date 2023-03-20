#include <stdio.h>

int main(void)
{
	int nInput = -1;

	while (nInput != 0)
	{
		scanf("%d", &nInput);

		if (nInput != 0)
		{
			printf("%d\n", nInput);
		}

		else
		{
			break;
		}

	}

	

	return 0;
}