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
	nResult = Add(3, 4);
	printf("%d\n", nResult);
}