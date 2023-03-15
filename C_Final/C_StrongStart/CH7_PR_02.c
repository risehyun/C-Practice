#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 5)
	{
		j = 0;			// 중요! 이 부분이 있어야 각 줄마다 별을 출력할 수 있게 된다.
		                // 중첩된 반복문을 구현할 때 계수기 초기화 코드를 빼먹지 않도록 유의하자.

		while (j < 5)
		{
			printf("*\t");
			++j;
		}

		printf("\n");
		++i;
	}

	return 0;
}