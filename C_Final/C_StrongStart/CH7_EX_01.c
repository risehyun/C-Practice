#include <stdio.h>

int main()
{
	char ch = 0;

	while ((ch = getchar()) != '\n')
	{
		// ������ �´� ���
		putchar(ch);
	}

	// '\n'�� ������ ������ �������� ���ϴ� ��� �ݺ����� ������.
	return 0;
}