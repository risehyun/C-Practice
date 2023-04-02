#include <stdio.h>

int Add(int a, int b)
{
	int nResult = 0;
	nResult = a + b;
	return nResult;
}

int main(void)
{
	int nResult = 0;
	int x = 0;
	int y = 0;

	scanf("%d%d", &x, &y);
	nResult = Add(3, 4);
	printf("%d\n", nResult);
	return 0;
}