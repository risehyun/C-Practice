#include <stdio.h>

int main(void)
{
	char ch = 0;

	// getchar() 함수의 반환 값을 ch에 저장
	ch = getchar();

	// ch에 저장된 값을 버퍼를 거쳐 출력
	putchar(ch);

	// 대문자 Z 출력
	putchar('Z');

	return 0;
}