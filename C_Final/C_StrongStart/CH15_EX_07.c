#include <stdio.h>

// #define ��ó���⸦ �̿��� ��� ����
#define CUTOFF 70

int main(void)
{
	int nInput = 0;

	printf("������ �Է��ϼ���. : ");
	scanf("%d", &nInput);

	// �����Ϸ��� �������ϱ� ���� CUTOFF�� 70���� ġȯ�Ѵ�.
	if (nInput >= CUTOFF)
	{
		printf("�հ��Դϴ�.\n");
	}

	else
	{
		printf("���հ��Դϴ�.");
	}

}