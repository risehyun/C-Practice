#include <stdio.h>

int GetFee(int nFee, int nAge)
{
	if (nAge >= 0 && nAge <= 3)
	{
		nFee = 0;
	}

	else if (nAge >= 4 && nAge <= 13)
	{
		nFee *= 0.5;
	}

	else if (nAge >= 14 && nAge <= 19)
	{
		nFee *= 0.25;
	}

	else if (nAge >= 20)
	{
		return nFee;
	}

	return nFee;
}


int main(void)
{
	int nAge = 0;
	int nFee = 0;

	scanf_s("%d %d", &nFee, &nAge);

	printf("요금은 %d원 입니다.", GetFee(nFee, nAge));

	return 0;
}