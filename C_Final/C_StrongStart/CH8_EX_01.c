#include <stdio.h>

int main(void)
{
	int aList[5] = { 0 };
	int i = 0;

	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &aList[i]);
	}

	// �迭�� ��� ������ ��� �ϳ��� ������ ����Ѵ�.
	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", aList[i]);
	}

	return 0;

}