#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int i = 1;

	// ù��° �࿡ nInput * j = result �̶�� ���
	// �� ���� ����ϴ� �ڵ尡 9�� �ݺ�
	// ����ڰ� �Է��� ���� 2���� �۰ų� 9���� ũ�� ERROR��� ���

	scanf_s("%d", &nInput);

	if (nInput < 2 || nInput > 9)
	{
		printf("ERROR");
	}

	else
	{
		while (i < 10) // ������ ���
		{
			printf("%d * %d = %d\n", nInput, i, nInput*i);

			++i;

		}
	}


	return 0;
}