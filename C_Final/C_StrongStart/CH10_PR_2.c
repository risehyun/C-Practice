#include <stdio.h>

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	if (nParam < 1 || nParam > 10)
	{
		return 0;
	}

	for (i = 1; i <= nParam; i++)
	{
		nResult *= i;
	}

	return nResult;
}

void PrintFactorial(int nValue)
{
	int nResult = 0;
	nResult = GetFactorial(nValue);
	
	if (nResult == 0)
	{
		puts("ERROR : 1~10사이의 정수를 입력하세요.");
	}
	else
	{
		printf("MAX : %d\n", nResult);
	}
}


int main(void)
{
	PrintFactorial(1);
	PrintFactorial(5);
	PrintFactorial(11);
	PrintFactorial(10);

	return 0;
}