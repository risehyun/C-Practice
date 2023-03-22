#include <stdio.h>

// 인수로 전달된 두 주소의 메모리에 담긴 정보(원본값)을 복사하는 함수인
// memcpy() 함수를 사용하기 위한 헤더를 포함한다.

#include <string.h>

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	// 원본에서 4바이트만 대상 메모리로 복사한다.
	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	// 원본에서 6바이트만 대상 메모리로 복사한다.
	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);

	// 원본 메모리 전체를 대상 메모리로 복사
	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	return 0;
}