#include <stdio.h>

int main(void)
{
	char cOperator = 0;

	int x = 0;
	int y = 0;
	int nResult = 0;

	// ����ڷκ��� ������� �Է¹޴´�.
	scanf_s("%d%c%d", &x, &cOperator, &y);

	// �����ڰ� �������� �����Ѵ�.
	switch (cOperator)
	{
	case '+':
		nResult = x + y;
		break;

	case '-':
		nResult = x - y;
		break;

	case '*':
		nResult = x * y;
		break;

	case '/':
		nResult = x / y;
		break;

	default:
		puts("�� �� ���� ��� �����Դϴ�.");
	}

	printf("Result : %d\n", nResult);


	return 0;
}