#include <stdio.h>

int main(void)
{
	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;

	// ���ڿ��� ���̸� �����ϱ� ���� NULL ���ڰ� ����� ��ġ�� ã�Ƴ���.
	while (*pszData != '\0')
	{
		pszData++;
	}

	// NULL ���ڰ� ����� ��ġ(�ּ�)���� ���� ��ġ(�ּ�)�� ����
	// ���ڿ��� ���̸� �� �� �ִ�.
	printf("Length : %d\n", pszData - szBuffer);
	return 0;
}