
#include <stdio.h>

int main(void)
{
	// ������ ���� �ٱ��� �ݺ���
	for (int i = 0; i < 5; i++)
	{
		// ���ʿ� *�� �׸��� �ݺ���, �������� ����ϵ��� *\t\t ���
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4) printf("*\t\t");
			else			putchar('\t');
		}

		putchar('\n');
	}

	return 0;
}