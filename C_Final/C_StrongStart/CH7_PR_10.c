
#include <stdio.h>

int main(void)
{
	// 개행을 위한 바깥쪽 반복문
	for (int i = 0; i < 5; i++)
	{
		// 안쪽에 *을 그리는 반복문, 엇갈리게 출력하도록 *\t\t 사용
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4) printf("*\t\t");
			else			putchar('\t');
		}

		putchar('\n');
	}

	return 0;
}