#include <stdio.h>

int main(void)
{
	char szBuffer[32] = { "I am a boy" };
	// ����Ű�� ����� ���ȭ�� ������ ���� ���� �� ����

	const char *pszBuffer = szBuffer;

	// ���� �迭�� ������ ������ �� �ִ�.
	szBuffer[0] = 'i';

	// �����Ͱ� ����Ű�� ����� ���������� ���� ������ l-value��
	// ����� ���� ����!
	// *pszBuffer = 'i';

	return 0;

}