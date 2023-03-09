// 사용자로부터 문자열을 한번에 입력받아 다시 문자열 형태로 화면에 출력해주는 예제

#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };

	printf("이름을 입력하세요 : ");
	gets(szName);

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");

	return 0;

}