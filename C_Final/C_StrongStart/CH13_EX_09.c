#include <stdio.h>

typedef struct USERDATA
{
	char ch;	// 1
	int nAge;	// 4
	// ���� �� ����ü�� ũ��� 5����Ʈ���� ������, ����ü ��� ������ 8����Ʈ�� �����Ǿ� �����Ƿ� �� 8����Ʈ�� �ȴ�.
} USERDATA;

typedef struct MYDATA
{
	char ch;	// 1
	int nAge;	// 4
	double dData;	// 8
	// ���� �� ����ü�� ũ��� 13����Ʈ�� ������, ����ü ��� ���㿡 ���� 16����Ʈ�� �ȴ�.
} MYDATA;

int main(void)
{
	printf("%d\n", sizeof(USERDATA));
	printf("%d\n", sizeof(MYDATA));

	return 0;
}