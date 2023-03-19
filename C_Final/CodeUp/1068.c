/*
점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.


평가 기준
점수 범위 : 평가
 90 ~ 100 : A
 70 ~   89 : B
 40 ~   69 : C
   0 ~   39 : D
로 평가되어야 한다.
*/

#include <stdio.h>

int main(void)
{
	int nInput = 0;

	scanf("%d", &nInput);

	if (nInput >= 90 && nInput <= 100)
	{
		printf("A\n");
	}

	else if (nInput >= 70 && nInput <= 89)
	{
		printf("B\n");
	}

	else if (nInput >= 40 && nInput <= 69)
	{
		printf("C\n");
	}

	else if (nInput >= 0 && nInput <= 39)
	{
		printf("D\n");
	}

	else
	{
		printf("ERROR : 범위에 맞는 값을 입력하세요.");
	}


	return 0;
}