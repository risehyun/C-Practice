#include <stdio.h>

// malloc() 함수를 사용하기 위한 헤더
#include <stdlib.h>

int main(void)
{
	int* pList = NULL, i = 0;

	// 12바이트(sizeof(int) * 3) 메모리를 동적 할당하고 시작 주소를
	// pList 포인터 변수에 저장
	// malloc 함수의 반환 자료형이 void이기 때문에 void*를 int*로 강제 캐스팅함
	pList = (int*)malloc(sizeof(int) * 3);

	// 동적 할당한 대상 메모리를 배열 연산자로 접근한다.
	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (i = 0; i < 3; i++)
	{
		printf("%d\n", pList[i]);
	}

	// 동적 할당한 메모리를 해제한다.
	free(pList);

	return 0;
}
