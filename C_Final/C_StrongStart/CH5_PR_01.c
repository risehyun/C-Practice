#include <stdio.h>

int main(void)
{
	int nInput = 0;

	printf("키를 입력하세요 : ");
	scanf_s("%d", &nInput);

	(nInput >= 150) ? printf("결과 : 합격") : printf("결과 : 불합격");

	return 0;
}