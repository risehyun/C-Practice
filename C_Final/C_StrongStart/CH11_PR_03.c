#include <stdio.h>

int main(void)
{
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	// ���� �ڵ���� �ּҿ� ������� ��� �޸𸮿� ����� ���ڿ��� ������ ���Ѵ�.
	// ���� ���̰� �ٸ��� ������ ���� ���ڿ��� �ƴϴ�.

	printf("%d\n", strcmp(szBuffer, pszData));		// 0�� ��µȴ�.
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", "TestString"));

	return 0;
} 