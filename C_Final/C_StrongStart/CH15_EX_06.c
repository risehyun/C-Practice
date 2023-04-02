#include <stdio.h>

int main(void)
{
	int nData = 10;

	// 포인터가 가리키는 대상을 상수화 한다.
	const int* pnData = &nData;

	// 포인터 변수 자체를 상수화 한다.
	int* const pnNewData = &nData;

	// 아래 두 구문은 모두 에러
	// *pnData = 20; -> 포인터가 가리키고 있는 메모리를 변경할 수 없다.
	// pnNewData = NULL; -> 포인터가 가리키고 있는 주소를 변경할 수 없다.


}