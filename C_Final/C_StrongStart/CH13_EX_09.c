#include <stdio.h>

typedef struct USERDATA
{
	char ch;	// 1
	int nAge;	// 4
	// 원래 이 구조체의 크기는 5바이트여야 맞지만, 구조체 멤버 맞춤이 8바이트로 설정되어 있으므로 총 8바이트가 된다.
} USERDATA;

typedef struct MYDATA
{
	char ch;	// 1
	int nAge;	// 4
	double dData;	// 8
	// 원래 이 구조체의 크기는 13바이트여 맞지만, 구조체 멤버 맞춤에 의해 16바이트가 된다.
} MYDATA;

int main(void)
{
	printf("%d\n", sizeof(USERDATA));
	printf("%d\n", sizeof(MYDATA));

	return 0;
}