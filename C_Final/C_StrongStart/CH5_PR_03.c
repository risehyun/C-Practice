#include <stdio.h>

int main()
{
	int nMax = 0, nInput = 0;
	scanf("%d", &nInput);
	nMax = nInput;

	// 현재까지 확인한 최댓값과 사용자가 입력한 값을 비교한다.
	// 새로운 최댓값을 결정한다.
	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;


	// 같은 논리를 계속 거듭해 최종 최댓값을 결정한다.
	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("Max : %d\n", nMax);

	return 0;
}