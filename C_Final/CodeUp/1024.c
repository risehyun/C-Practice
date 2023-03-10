#include <stdio.h>

int main(void)
{
	char cWord[30];
	scanf("%s", &cWord);

	for (int i = 0; i < cWord[i] != '\0'; i++)
	{
		printf("'%c'\n", cWord[i]);
	}

	return 0;
}