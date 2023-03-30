#include <stdio.h>
#include <string.h>

char* mystrcat(char* pszDst, char* pszSrc)
{

	// ��� �޸𸮿� ����� ���ڿ��� ���� ã�´�.
	while (*pszDst != '\0')
	{
		++pszDst;
	}
	
	// �� �ڿ� ���ο� ���ڿ��� �̾� ���δ�.
	while (*pszSrc != '\0')
	{
		*pszDst++ = *pszSrc++;
	}

	// �� ���� NULL���ڷ� �������Ѵ�.
	*++pszDst = '\0';

	// �̾� ���� ���ڿ��� ������ ���ڰ� ����� �޸��� �ּҸ� ��ȯ�Ѵ�.
	return --pszDst;
}

int main(void)
{
	char szPath[128] = { 0 };
	char* pszEnd = NULL;

	// ��� �޸𸮿� ���ڿ��� ���δ�.
	pszEnd = mystrcat(szPath, "C:\\Program Files\\");

	// �ռ� ��ȯ���� �ּҸ� ù ��° �μ��� ȣ���� ���ڿ��� ���δ�.
	pszEnd = mystrcat(pszEnd, "CHS\\");
	pszEnd = mystrcat(pszEnd, "C Programming");

	puts(szPath);
	return 0;
}