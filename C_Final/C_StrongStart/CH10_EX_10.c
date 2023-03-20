#include <stdio.h>


// 전역 변수의 선언 및 정의
int g_nCounter = 0;

int InitCounter(int nData)
{
	// 전역변수 g_nCounter 값을 초기화한다.
	g_nCounter = nData;
}

void IncreaseCounter()
{
	// 전역변수 g_nCounter의 값을 1 증가시킨다.
	g_nCounter++;
}

int main(void)
{
	InitCounter(10);

	// 전역 변수 g_nCounter의 값을 출력한다.

	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);

	return 0;
}