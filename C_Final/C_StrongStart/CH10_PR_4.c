#include <stdio.h>

int nInput = 100;

int TestFunc(void)
{
	printf("%d\n", nInput);
}


int main(void)
{
	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput > 10)
	{
		int nInput = 20;
		printf("%d\n", nInput);

		TestFunc();

		if (nInput >= 100)
		{
			printf("%d\n", nInput);
		}
	}

	printf("%d\n", nInput);

	return 0;
}