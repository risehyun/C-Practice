#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);

	// if�� ����
	if (nAge >= 20)
	{
		// ���ǽ��� ������ ��쿡�� �����ϴ� ����
		printf("����� ���̴� %d�� �Դϴ�.\n", nAge);
	}

	// if�� ��

	puts("End");

	return 0;
}