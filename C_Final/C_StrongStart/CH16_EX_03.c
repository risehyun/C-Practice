#include <stdio.h>

// ��ũ�� Ư��ȭ ������ #, ##
// 
// a�� "a" (���ڿ�)�� �����ϴ� ��ũ�� ����
#define STRING(a) #a

// a��  b�� ���� �ϳ��� �̾�ٿ��ִ� ��ũ�� ����

#define PASTER(a, b) a##b
int main()
{
	int nData = 10;

	// PASTER(nDa, ta)�� �׳� nData��� �� �Ͱ� ����.
	printf("%d\n", PASTER(nDa, ta));
	printf("%d\n", nData);

	// "nData"�� ó���ȴ�.
	printf("%s\n", STRING(nData));
	return 0;
}