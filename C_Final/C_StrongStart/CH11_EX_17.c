#include <stdio.h>

int main(int argc, char* argv[])
{
	char ch = 'A';

	// char* ���� char���� �ּҸ� ��´�.
	char* pData = &ch;

	// char** ���� char* ���� �ּҸ� ��´�.
	char** ppData = &pData;

	// char*** ���� char** ���� �ּҸ� ��´�.
	char** *pppData = &ppData;

	// �Ʒ� �ڵ���� ��� char ������ %c�� ����Ѵ�.
	printf("%c\n", ch);
	printf("%c\n", *pData);
	printf("%c\n", **ppData);
	printf("%c\n", ***pppData);

	return 0;
}