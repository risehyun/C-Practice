#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int i = 0;

	scanf("%d", &nInput);
	// 1���� 100���� �ݺ�
	for (i = 1; i <= nInput; i++)
	{
		if (i % 3 == 0)
		{
			printf("X ");
		}

		else
		{
			printf("%d ", i); // 3�Ǵ� 5�� ����� ��� �� �� ���
		}

	}

	return 0;

}