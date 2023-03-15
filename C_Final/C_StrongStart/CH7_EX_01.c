#include <stdio.h>

int main()
{
	char ch = 0;

	while ((ch = getchar()) != '\n')
	{
		// 조건이 맞는 경우
		putchar(ch);
	}

	// '\n'이 등장해 조건을 만족하지 못하는 경우 반복문이 끝난다.
	return 0;
}