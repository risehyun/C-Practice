#include <stdio.h>

int main(void)
{
	int nInput = 0;

	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	if (nInput >= 70)
	{
		printf("�հ��Դϴ�.");
	}
	
	else
	{
		printf("���հ��Դϴ�.");
	}

	return 0;
}