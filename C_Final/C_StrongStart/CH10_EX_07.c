#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// ���̸� �Ű������� �ް� ����� ��ȯ�ϴ� ����� ����
int GetFee(int nAge)
{
	int nFee = 1000;
	if (nAge < 20)
	{
		nFee /= 2;
	}

	return nFee;
}

// �޴��� ����ϰ� ����ڷκ��� ������ �Է¹޴� �������̽�
int printMenu(void)
{
	int nInput = 0;

	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);
	return nInput;
}

// ����ڷκ��� ���̸� �Է¹޴� �������̽�
int getAge(void)
{
	int nAge = 0;

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);

	return nAge;
}

// ���α׷��� ��ü �帧
int main(void)
{
	int nMenu = 0;
	int nAge = 0;

	// ������ ������ �̺�Ʈ ����
	while ((nMenu = PrintMenu()) != 0)
	{
		if (nMenu == 1)
		{
			nAge = GetAge();
			printf("����� %d�� �Դϴ�.\n", GetFee(nAge));
			_getch();
		}
	}

	puts("Bye~~!");

	return 0;
}