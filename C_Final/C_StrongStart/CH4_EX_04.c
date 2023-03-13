#include <stdio.h>

int main(void)
{
	int x = 10;

	// int * int -> %d
	printf("%d\n", x * 10);

	// int * double -> %d (출력 불가능)
	printf("%d\n", x * 10.0);

	// int / int 는 int 형식이다. 실수 형식이 아니기 때문에 정수 부분만 출력 된다는 점을 잊지 말자.
	printf("%d\n", x / 10);


	// int / int는 int 형식이기 때문에 실수로 출력할 수 없다. 따라서 소수점 위의 정수 부분만 출력된다.
	printf("%d\n", 5 / 2);


	// 소수점 이하가 절사되기 때문에 정수 2를 %f로 출력하려는 것과 같다. 즉, 잘못된 출력이므로 결과가 0으로 출력된다.
	printf("%f\n", 5 / 2);


	// double / int 연산의 결과값은 double 형식이다.
	printf("%f\n", 5.0 / 2);


	return 0;
}