#include <stdio.h>

int main(void)
{
	// ����ڷκ��� ���ڿ��� �Է¹���
	char szString[10] = { 0 };
	int nLength = 0;

	gets(szString);

	while (szString[nLength] != '\0')
		nLength++;

	// ���ڿ��� ���̸� �����. �ѱ��� 2����Ʈ�̹Ƿ� 2�� ������ �����
	printf("�ѱ� ������ ������ %d�� �Դϴ�.\n", nLength/2);

	return 0;
}