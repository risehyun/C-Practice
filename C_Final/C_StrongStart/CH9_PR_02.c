#include <stdio.h>

/*
	'버블 정렬' 방식으로 오름차순 정렬한다.
	반드시 중첩된 for문 형식으로 구현해야 하며,
	특히 바깥쪽 반복문의 경우 반복문의 반복횟수에 주의하여 프로그램을 작성한다.

	또한 "인접한 두 항을 비교하여 교환"하는 것과 관련된 코드가 명확해야 하며, 
	이 과정에서 배열의 인덱스가 최대 인덱스(4)를 벗어나지 않도록 주의해야 한다.

*/


int main()
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	// 여기에 들어갈 코드를 작성합니다.

	for (i = 4; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			if (aList[j] > aList[j+1])
			{
				nTmp = aList[j];
				aList[j] = aList[j+1];
				aList[j+1] = nTmp;
			}
		}
	}

	// 이하 코드는 수정하지 않습니다.

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}

	putchar('\n');

	return 0;
}