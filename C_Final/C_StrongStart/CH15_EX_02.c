#include <stdio.h>

int main(void)
{
	// 상수화된 변수 선언 및 정의
	// 문법적으로 nCUTOFF의 값은 변경할 수 없다!
	const int nCUTOFF = 70;
	int nInput = 0;

	printf("점수를 입력하세요. :");
	scanf_s("%d", &nInput);

	// '70'이라는 확정된 숫자 대신, '합격 기준 점수'라는
	// 상대적 의미를 부여해 코드를 작성할 수 있다.
	// = 심볼릭 상수
	if (nInput >= nCUTOFF)
	{
		printf("합격입니다\n");
	}

	else
	{
		printf("불합격입니다.\n");
	}

	return 0;
}