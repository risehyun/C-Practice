#include <stdio.h>

int main(void)
{
	char cInput = "";
	char cResult = 'a';

	scanf("%c", &cInput);

	do 
	{
		printf("%c ", cResult);
		cResult++;
		cInput--;
	}

	while (cInput >= 'a');




	return 0;
}