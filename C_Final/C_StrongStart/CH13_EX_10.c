#include <stdio.h>

// Ư�� ����ü�� ����� 1����Ʈ�� �������.
// ���� ��� ������� �޸𸮰� ��ȣ �����ϰ� �ȴ�.
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