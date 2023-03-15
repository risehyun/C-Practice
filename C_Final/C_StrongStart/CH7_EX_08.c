#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	// 5회 반복되는 바깥쪽 반복문
	for (i = 0; i < 5; ++i)
	{
		printf("i == %d\n", i);

		for (j = 0; j < 5; ++j)
		{
			if (j > 2)		break;
			printf("\t%dth\n", j);
		}

		printf("end\n\n", i);
	}

	return 0;

}