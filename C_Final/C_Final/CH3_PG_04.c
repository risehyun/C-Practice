// 사용자로부터 화씨 온도를 받아서 섭씨온도로 환산하여 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double f, c;
	printf("화씨 값을 입력하시오 : ");
	scanf("%lf", &f);

	c = (5.0 / 9.0) * (f - 32.0);

	printf("섭씨값은 %f도입니다.", c);


	return 0;
}