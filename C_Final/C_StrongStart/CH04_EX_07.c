#include <stdio.h>

int main(void)
{
	char szBuffer[32] = { 0 };

	// 상수에 대입 연산자를 수행할 수 없다.
	3 = 4;

	// 배열의 이름은 '주소상수'이기 때문에 변수가 아니다. 따라서 연산자를 수행할 수 없다.

	return 0;
}