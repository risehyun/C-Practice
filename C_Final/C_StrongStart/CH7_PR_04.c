#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int i = 1;

	// 첫번째 행에 nInput * j = result 이라고 출력
	// 한 행을 출력하는 코드가 9번 반복
	// 사용자가 입력한 값이 2보다 작거나 9보다 크면 ERROR라고 출력

	scanf_s("%d", &nInput);

	if (nInput < 2 || nInput > 9)
	{
		printf("ERROR");
	}

	else
	{
		while (i < 10) // 가로출 출력
		{
			printf("%d * %d = %d\n", nInput, i, nInput*i);

			++i;

		}
	}


	return 0;
}