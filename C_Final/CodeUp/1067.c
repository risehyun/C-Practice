#include <stdio.h>

int main(void)
{
	int nInput = 0;
	scanf("%d", &nInput);

	if (nInput > 0)
	{
		printf("plus\n");

		if (nInput % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}
	else 
	{
		printf("minus\n");

		if (nInput % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}


	return 0;
}