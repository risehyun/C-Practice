#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a > b) > c ? c : (a > b ? b : a));

	return 0;
}