#include <stdio.h>

int main()
{
	// 반복문을 사용하면 불필요한 코드를 줄일 수 있겠지만..
	// 이번 챕터 기준으로 아직 반복문을 학습하지 않았으므로 어쩔 수 없이 아래와 같이 작성하였다.

	int nMax = 0;
	int nInput = 0;

	scanf_s("%d", &nInput); // 첫 번째 값
	
	if (nInput < 0)
	{
		nInput = 0;
	}
	else if (nInput > 100)
	{
		nInput = 100;
	}

	nMax = nInput;

	scanf_s("%d", &nInput); // 두 번째 값
	
	if (nMax < nInput)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput); // 세 번째 값

	if (nMax < nInput)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput); // 네 번째 값

	if (nMax < nInput)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput); // 다섯 번째 값

	if (nMax < nInput)
	{
		nMax = nInput;
	}

	printf("Max : %d", nMax);

	

	return 0;
}