#include <stdio.h>

// ������ ������ �� �缱���ߴ�.
typedef const char* LPSTR;

int main(void)
{
	// '*' ��ȣ�� ������ pszData�� ������ �����̴�.

	LPSTR pszData = NULL;
	pszData = "HelloWorld";
	printf("%s\n", pszData);

	return 0;
}