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

	printf("������� : %d��", nFee);

	return 0;
}