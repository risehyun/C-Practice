#include <stdio.h>

int main(void)
{
	// �迭 �� ����� ���� �ϳ��� ����ϴ� ������� �ʱ�ȭ
	int aList[5] = { 30, 40, 10, 50, 20 };
	char szBuffer[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };

	// ���ڿ� ���·� ���������� ����ϴ� ������� �迭 �ʱ�ȭ
	char szData[8] = { "HELLO" };

	// ���ڿ� ����� ����Ű�� ������ ���� ���� �� �ʱ�ȭ
	char *pszBuffer = "HELLO";

	// ���ڿ��� ��� ���� ������� ���
	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);




	return 0;
}