// 사용자로부터 세 개의 실수를 입력받은 후, 합계와 평균값을 계산해 화면에 출력하는 프로그램을 작성하라.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0; 
	double y = 0;
	double z = 0;

	printf("실수를 입력하시오: ");
	scanf("%lf", &x);

	printf("실수를 입력하시오: ");
	scanf("%lf", &y);

	printf("실수를 입력하시오: ");
	scanf("%lf", &z);

	double sum = x + y + z;
	double avg = sum / 3.0;

	printf("합은 %f이고 평균은 %f입니다.", sum, avg);

	return 0;
}