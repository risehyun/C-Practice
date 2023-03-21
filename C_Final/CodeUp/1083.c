#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int i = 0;

	scanf("%d", &nInput);
	// 1부터 100까지 반복
	for (i = 1; i <= nInput; i++)
	{
		if (i % 3 == 0)
		{
			printf("X ");
		}

		else
		{
			printf("%d ", i); // 3또는 5의 배수인 경우 그 수 출력
		}

	}

	return 0;

}