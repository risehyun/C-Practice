#include <stdio.h>

// malloc() �Լ��� ����ϱ� ���� ���
#include <stdlib.h>

int main(void)
{
	int* pList = NULL, i = 0;

	// 12����Ʈ(sizeof(int) * 3) �޸𸮸� ���� �Ҵ��ϰ� ���� �ּҸ�
	// pList ������ ������ ����
	// malloc �Լ��� ��ȯ �ڷ����� void�̱� ������ void*�� int*�� ���� ĳ������
	pList = (int*)malloc(sizeof(int) * 3);

	// ���� �Ҵ��� ��� �޸𸮸� �迭 �����ڷ� �����Ѵ�.
	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (i = 0; i < 3; i++)
	{
		printf("%d\n", pList[i]);
	}

	// ���� �Ҵ��� �޸𸮸� �����Ѵ�.
	free(pList);

	return 0;
}
