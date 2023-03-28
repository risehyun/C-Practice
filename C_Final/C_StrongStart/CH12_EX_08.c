#include <stdio.h>

int* TestFunc(void)
{
	int nData = 10;

	// 함수가 반환되면 소멸할 자동변수의 주소를 반환했다. 
	// 즉, 이 주소는 스코프가 종료됨과 동시에 유효하지 않은 주소가 될 것이다.
	return &nData;
}



int main(int argc, char* argv[])
{
	int* pnResult = NULL;

	// 함수로부터 반환받은 값은 유효하지만 이 변수의 주소는 이제 존재하지 않는 주소이다.
	pnResult = TestFunc();

	// 포인터가 가리키는 대상 메모리는 유효하지 않은 메모리이다.
	printf("%d\n", *pnResult);

	return 0;
}