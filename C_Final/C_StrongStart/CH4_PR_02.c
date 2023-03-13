#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int input = 0;
	
	int hour = 0;
	int min = 0;
	int second = 0;

	scanf_s("%d", &input);

	hour = input / 3600;
	min = (input % 3600) / 60;
	second = (input % 3600) % 60;


	// 소수점 위 둘째자리까지 강제하고, 한 자리 밖에 없다면 왼쪽부터 0을 채워줌 (%02d)
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", input, hour, min, second);


	return 0;
}