#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// ȭ�鿡 �޴��� ����ϴ� �Լ��� ���� �� ����
int PrintMenu(void)
{
	int nInput = 0;

	// �޴��� ����ϱ� ���� ȭ���� �����. (clear screen)
	system("cls");

	// �޴��� ����ϰ� ����� �Է��� �޴´�.
	printf("[1]New\t [2]Search\t [3]Printf\t [4]Remove\t [0]Exit\n:");
	scanf_s("%d", &nInput);

	return nInput;
}


int main(void)
{
	int nMenu = 0;

	// �޴� �̺�Ʈ ����
	// ����ڰ� �Է��� ���� ���� ������ ����� �ݺ��� �����Ѵ�.
	// (0)�� �Է��ϸ� �ݺ����� ������.
	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1: // New
			puts("�� �׸��� �߰��մϴ�.");
			break;


		case 2: // Search
			puts("���� �׸񿡼� �˻��մϴ�.");
			break;

		case 3: // Print
			puts("��ü ������ ����մϴ�.");
			break;

		case 4: // Remove
			puts("���� �׸��� �����մϴ�.");
			break;

		default: // ???
			puts("�� �� ���� ����Դϴ�.");
			break;

		}

		_getch();
	}

	puts("Bye~~!");

	return 0;
}