#include <stdio.h>

int main(void)
{
	long a = 0;
	long b = 0;
	long c = 0;

	scanf("%ld %ld %ld", &a, &b, &c);
	printf("%d\n", a+b+c);
	printf("%.1f", (float)(a+b+c)/(float)3);




	return 0;
}