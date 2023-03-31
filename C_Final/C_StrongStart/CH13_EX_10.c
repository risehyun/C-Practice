#include <stdio.h>

// 특정 구조체만 멤버를 1바이트로 맞춰줬다.
// 따라서 모든 멤버들의 메모리가 상호 연접하게 된다.
#pragma pack(push, 1)
typedef struct USERDATA
{
	char ch;		// 1
	int nAge;		// 4
}USERDATA;

typedef struct MYDATA
{
	char ch;		// 1
	int nAge;		// 4
	double dData;	// 8
}MYDATA;
#pragma pack(pop)

int main(void)
{
	printf("%d\n", sizeof(USERDATA));
	printf("%d\n", sizeof(MYDATA));
	
	return 0;
}