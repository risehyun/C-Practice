#include <stdio.h>
#include <stdlib.h>

int GetLength(char* _str)
{
	int nLength = 0;
	while (_str[nLength] != NULL)
		nLength++;

	return nLength;
}


int main(void)
{
	char* str = { 0 };
	str = (char*)malloc((sizeof(char)) * 12);
	gets(str);
	puts(str);


	int nLength = GetLength(str);


	char* newStr = (char*)realloc(str, 24);
	gets(newStr + nLength);

	puts(newStr);

	return 0;
}