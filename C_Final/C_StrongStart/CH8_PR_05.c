#include <stdio.h>

int main(void)
{
	// 사용자로부터 문자열을 입력받음
	char szString[10] = { 0 };
	int nLength = 0;

	gets(szString);

	while (szString[nLength] != '\0')
		nLength++;

	// 문자열의 길이를 출력함. 한글은 2바이트이므로 2로 나눠서 출력함
	printf("한글 문자의 개수는 %d자 입니다.\n", nLength/2);

	return 0;
}