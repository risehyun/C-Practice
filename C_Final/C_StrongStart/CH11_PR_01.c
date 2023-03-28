#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer; // 동적할당한 메모리의 주소가 szBuffer라는 배열의 이름(주소)를 덮어써버렸다. 
					    // 따라서 안에 든 원본 값이 아닌 주소만 단순 대입되었다.
	puts(pszData);

	// 동적할당한 메모리를 해제하는 코드가 없어 메모리 누수가 발생한다.

	return 0;
}