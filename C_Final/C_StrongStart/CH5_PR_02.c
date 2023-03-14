#include <stdio.h>

int main()
{
	int nMax = 0;

	int a, b, c;


	scanf_s("%d %d %d", &a, &b, &c);

	a >= b ? (nMax = a) : (nMax = b);
	nMax > c ? nMax : (nMax = c);

	printf("MAX : %d\n", nMax);
	



	return 0;
}