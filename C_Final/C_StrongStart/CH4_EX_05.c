
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	scanf("%d", &x);

	// int / int�� int�̹Ƿ� �Ҽ��� ���ϴ� �������� ��µȴ�.
	printf("�� : %d\n", x / 3);

	// ���� ������ ������ (int)�� ����Ѵ�.

	printf("������ : %d\n", x % 3);

	return 0;
}