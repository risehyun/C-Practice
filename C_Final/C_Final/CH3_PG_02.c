// 마일을 미터로 환산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile;
	double meter;

	printf("실수를 입력하시오 : ");
	scanf("%f", &mile);

	meter = 1609.0 * mile;

	printf("%.1lf마일은 %lf미터입니다.", mile, meter); // 소수점 아래 한 자리까지 출력
	
	return 0;
}

