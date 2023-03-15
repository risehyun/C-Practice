#include <stdio.h>

int main(void)
{
	// 3행 4열 int 배열 선언 및 정의
	int aList[3][4] = {
		{ 10, 20, 30, 40 },
		{ 50, 60, 70, 80 },
		{ 90, 100, 110, 120 }
	};

	int i = 0;
	int j = 0;

	// 행 단위 처리를 위한 바깥쪽 반복문
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d\t", aList[i][j]);

		}
		putchar('\n');
	}
	return 0;
}