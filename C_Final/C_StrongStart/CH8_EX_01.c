#include <stdio.h>

int main(void)
{
	int aList[5] = { 0 };
	int i = 0;

	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &aList[i]);
	}

	// 배열에 담긴 내용을 요소 하나씩 꺼내서 출력한다.
	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", aList[i]);
	}

	return 0;

}