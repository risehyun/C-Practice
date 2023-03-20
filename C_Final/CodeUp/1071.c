#include <stdio.h>

int main(void)
{
	int nInput = -1;

	while (nInput)
	{
		scanf("%d", &nInput);

		if (nInput == 0)
		{
			break;
		}
		else
		{
			printf("%d\n", nInput);
		}


	}




	return 0;
}