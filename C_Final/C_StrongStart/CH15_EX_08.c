#include <stdio.h>

// '�ִ� ����'�� �ǹ��ϴ� �ɺ��� ��� ����.
#define MAXLENGTH 32

int main(void)
{
	// ��ó����� ������ �ɺ��� ����� �迭�� ������ �� �ִ�.
	// char szName[32]�� ���� �ǹ��̴�.
	char szName[MAXLENGTH] = { 0 };

	printf("�̸��� �Է��ϼ���. : ");
	gets_s(szName, sizeof(char) * MAXLENGTH);
	return 0;
}