#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	FILE* fp = NULL;
	int nClosed = 0;

	fopen("Test1.txt", "w");
	fopen("Test2.txt", "w");
	fopen("Test3.txt", "w");

	// 지금까지 개방한 파일들을 '모두' 한번에 닫는다. 이 때 FILE*는 필요없다.
	nClosed = _fcloseall();
	printf("%d\n", nClosed);
}