#include <stdio.h>


int main(void)
{
	int nInput = 0;

	scanf("%d", &nInput);

	if (nInput > 0 || nInput < 100)
	{
		while (nInput != 0)
		{
			printf("%d\n", nInput);
			--nInput;
		}

	}

	return 0;
}