#include <stdio.h>

int GetLength(char* _str)
{
	int nLength = 0;
	while (_str[nLength] != NULL)
		nLength++;

	return nLength;
}



int main(void)
{
	char test[20] = { "Hello World!" };

	printf("%d", GetLength(test));


	return 0;
}