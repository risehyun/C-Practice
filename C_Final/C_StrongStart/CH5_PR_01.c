#include <stdio.h>

int main(void)
{
	int nInput = 0;

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	(nInput >= 150) ? printf("��� : �հ�") : printf("��� : ���հ�");

	return 0;
}