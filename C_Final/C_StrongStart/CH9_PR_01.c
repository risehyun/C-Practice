#include <stdio.h>

int main(void)
{
	// 선택 정렬로 알려진 버블정렬 방식으로 오름차순 정렬
	// 반드시 '중첩된 for문 형식'으로 구현해야 한다.
	// 반복문에서 사용할 계수기 변수의 초기값과 조건식에 유의하여 프로그램을 작성
	// 만약 결과가 제대로 출력된다 해도 두 반복문의 계수기 초깃값(초기 수행식)과 조건식이 정답과 일치하지 않으면 틀린 것

	int aList[5] = { 30, 40, 10, 50, 20 };

	int i = 0;
	int j = 0;
	int nTmp = 0;

	// 여기에 들어갈 코드를 작성합니다.

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (aList[i] < aList[j])
			{
				nTmp = aList[j];
				aList[j] = aList[i];
				aList[i] = nTmp;
			}
		}

	}


	// 이하 코드는 수정하지 않습니다.

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	
	printf('\n');


	return 0;
}