// 사각형의 둘레와 면적 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	double w = 10.0f;
	double h = 5.0f;
	double area = w * h;
	double perimerter = 2 * (w + h);

	printf("사각형의 넓이 : %f\n", area);
	printf("사각형의 둘레 : %f\n", perimerter);

	return 0;
}


