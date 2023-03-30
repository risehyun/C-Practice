#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	printf("%d\n", atoi("2147483647")); // int형 자료가 표현할 수 있는 최대 크기의 양수
	printf("%d\n", atoi("2147483648")); // 최대 크기를 벗어나면 정수로 표현할 수 있는 최댓값을 반환한다.
	printf("%e\n", atof("1.7e+308"));   // double형 자료가 표현할 수 있는 최대 크기 실수
	printf("%e\n", atof("1.7e+309"));   // 값을 제대로 표시할 수 없으므로 프로그램은 멀쩡하게 돌아가지만 연산 결과가 올바르지 못하게 됨.
}