#include <stdio.h>

int main(void)
{
	int i = 0;

	//for문은 i가 9가 될 때까지 반복된다.
	for (i = 0; i < 10; ++i)
	{
		// i값이 5가 되면 continue문이 실행되고 다시 조건 검사로 넘어간다.
		// 따라서 아래의 continue문 아래의 코드는 실행되지 않는다.
		if (i > 4)
			continue;
		printf("%dth\n", i);

	}

	// break문이 적용된 순간 계수기 값을 출력한다.
	printf("END : i == %d\n", i);

	return 0;
}