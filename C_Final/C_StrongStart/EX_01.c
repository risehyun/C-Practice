#include <stdio.h>

// 사용자로부터 문자를 입력받아 변수에 저장한 후, 별다른 가공 없이 다시 화면에 출력하는 예제
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