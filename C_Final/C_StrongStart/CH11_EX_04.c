#include <stdio.h>
#include <string.h> // strlen() �Լ��� ����ϱ� ���� ��� ����

int main(void)
{
	// ���� �迭 (char[16]�� ���� �� ����)
	// ������ ũ��� char[16]������ �ʱ�ȭ�� char[6] ���ڿ��� �Ѵ�. 
	char szBuffer[16] = { "Hello" };

	// ���� �迭�� ����Ű�� ���� ������ ������ ���� �� ����
	char *pszData = szBuffer;
	int nLength = 0;

	// pszData ������ ������ ����Ű�� ��� ����� char�� �����Ͱ�
	// ���ڿ��� ���� �ǹ��ϴ� NULL ���ڰ� �� ������ �ݺ��� ����

	while (*pszData != '\0')
	{
		// �����͸� �������� �� ĭ �̵� ��Ų��!
		pszData++;
		nLength++;
	}

	// strlen() �Լ��� ���ڿ��� ����(����Ʈ ���� ũ��)�� ����Ѵ�.
	printf("Length : %d\n", nLength);
	printf("Length : %d\n", strlen(szBuffer));
	printf("Length : %d\n", strlen("World"));

	return 0;
}
