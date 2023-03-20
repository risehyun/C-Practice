#include <stdio.h>


int Add(int, int);

int main()
{
	// add()함수가 존재한다는 사실을 컴파일러가 알고 있으므로
	// 컴파일 오류는 발생하지 않는다.
	printf("%d\n", Add(3, 4));

	return 0;
}

int Add(int _x, int _y)
{
	return _x + _y;
}