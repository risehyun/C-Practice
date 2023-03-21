#include <stdio.h>

int main(void)
{
	long long int w = 0, h = 0, b = 0;
	double result;

	scanf("%lld %lld %lld", &w, &h, &b);

	result = (w * h * b);

	printf("%.02lf MB", result/(8*1024*1024));

	return 0;
}