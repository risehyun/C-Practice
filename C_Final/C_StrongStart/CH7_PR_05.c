#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++)
	{
		//  한 행에 *를 다섯 번 출력하는 안쪽 반복문
		for (j = 0; j < i+1; ++j)
		{
			printf("*\t");
		}

		// 한 행에 *를 모두 출력한 후 개행한다.
		putchar('\n');
	}

	return 0;
}