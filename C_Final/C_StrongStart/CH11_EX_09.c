#include <stdio.h>
#include <malloc.h>

int main(void)
{
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 6);

	// _msize => 동적 할당된 메모리 크기 확인
	printf("%d\n", _msize(pszData));
	free(pszData);

	return 0;
}
