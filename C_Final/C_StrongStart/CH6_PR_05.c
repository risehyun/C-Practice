#include <stdio.h>

int main(void)
{
	char cOperator = 0;

	int x = 0;
	int y = 0;
	int nResult = 0;

	// 사용자로부터 산술식을 입력받는다.
	scanf_s("%d%c%d", &x, &cOperator, &y);

	// 연산자가 무엇인지 선택한다.
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
		puts("알 수 없는 산술 연산입니다.");
	}

	printf("Result : %d\n", nResult);


	return 0;
}