#include <stdio.h>

int main()
{
	int nAge = 0;
	int nFee = 1000;

	scanf_s("%d", &nAge);

	if (nAge < 20)
	{
		nFee = nFee * 75/100;
	}

	printf("최종요금 : %d원", nFee);

	return 0;
}