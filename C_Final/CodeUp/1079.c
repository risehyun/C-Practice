#include <stdio.h>

int main(void)
{

	char cInput = "";


	while (cInput != 'q')
	{
		scanf(" %c", &cInput);
		printf("%c\n", cInput);
	}

	return 0;
}