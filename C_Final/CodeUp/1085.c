#include <stdio.h>

int main(void)
{
	long long int h = 0, b = 0, c = 0, s = 0;
	double result;

	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);

	result = h * b * s * c;
	printf("%.1f MB", result/(8 * 1024 * 1024));



	return 0;
}