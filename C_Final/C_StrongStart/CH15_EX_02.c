#include <stdio.h>

int main(void)
{
	// ���ȭ�� ���� ���� �� ����
	// ���������� nCUTOFF�� ���� ������ �� ����!
	const int nCUTOFF = 70;
	int nInput = 0;

	printf("������ �Է��ϼ���. :");
	scanf_s("%d", &nInput);

	// '70'�̶�� Ȯ���� ���� ���, '�հ� ���� ����'���
	// ����� �ǹ̸� �ο��� �ڵ带 �ۼ��� �� �ִ�.
	// = �ɺ��� ���
	if (nInput >= nCUTOFF)
	{
		printf("�հ��Դϴ�\n");
	}

	else
	{
		printf("���հ��Դϴ�.\n");
	}

	return 0;
}