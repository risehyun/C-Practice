#include <stdio.h>

int main(void)
{
	unsigned int a = 0;
	long b = 0;

	scanf("%d %ld", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.02f", (float)a / (float)b);



	return 0;
}