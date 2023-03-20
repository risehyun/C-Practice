// 사용자가 입력한 값에서 최댓값 구하기와 코드 분할

#include <stdio.h>

int GetData(void)
{
	int nInput = 0;

	printf("정수를 입력하세요. : ");
	scanf_s("%d", &nInput);

	return nInput;
}

int GetMax(int _a, int _b, int _c)
{
	int nMax = _a;
	if (_b > nMax)
	{
		nMax = _b;
	}
	if (_c > nMax)
	{
		nMax = _c;
	}

	return nMax;
}

void PrintData(int _a, int _b, int _c, int _nMax)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n",
		_a, _b, _c, _nMax);
}


int main()
{
	int aList[3] = { 0 };
	int nMax = -9999;
	int i = 0;

	// 입력
	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}

	// 최댓값 계산

	nMax = GetMax(aList[0], aList[1], aList[2]);

	// 출력
	PrintData(aList[0], aList[1], aList[2], nMax);


	return 0;
}