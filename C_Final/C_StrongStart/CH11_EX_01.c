#include <stdio.h>

int main(void)
{
	int nData = 10;
	printf("%s\n", "nData"); // �Ϲ� nData ���ڿ��� ���

	// ���� nData�� ����ִ� ���� ���
	printf("%d\n", nData); // 10�� ���

	// ���� nData�� �޸� �ּҸ� ���
	printf("%p\n", &nData); // �޸� �ּҸ� ���

	return 0;
}