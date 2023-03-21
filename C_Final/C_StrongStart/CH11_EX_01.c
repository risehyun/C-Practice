#include <stdio.h>

int main(void)
{
	int nData = 10;
	printf("%s\n", "nData"); // 일반 nData 문자열의 출력

	// 변수 nData에 들어있는 값을 출력
	printf("%d\n", nData); // 10의 출력

	// 변수 nData의 메모리 주소를 출력
	printf("%p\n", &nData); // 메모리 주소를 출력

	return 0;
}