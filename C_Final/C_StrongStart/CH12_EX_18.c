#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// �����ڵ� ���ڿ� ����� �ʱ�ȭ
	wchar_t* pwszData = L"Stirng";

	// MBCS ���ڿ��� ���� �� �ִ� �迭
	char szData[32];
	size_t nConverted = 0;

	// ��ȯ�� ���ڿ��� ���̸� �˾Ƴ���.
	nConverted = wcstombs(NULL, pwszData, 32);
	printf("%d\n", nConverted);

	// �����ڵ� ���ڿ��� MBCS ���ڿ��� ������ szData�� �����Ѵ�.
	nConverted = wcstombs(szData, pwszData, 32);

	// ��ȯ ����� ����Ѵ�.
	printf("%s (%d)\n", szData, nConverted);

}