#include <stdio.h>

int main(void)
{
	int nInput = 0;
	char ch = 'A';

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	// 1�� �з� : ��ü ��� �� �߰������� ������ �з��Ѵ�.
	if (nInput >= 80)
	{
		if (nInput >= 90) ch = 'A';
		else              ch = 'B';
	}
	else
	{
		// 2�� �� �з� C~F
		if (nInput >= 70) ch = 'C';
		else
		{
			// 3�� �з� D~F
			// �ϴ� D��� Ȯ���� ��
			ch = 'D';
			// 60�� �̸��̸� F�� �����Ѵ�.
			if (nInput < 60) ch = 'F';

		}
	}

	printf("%c\n", ch);
	return 0;
}