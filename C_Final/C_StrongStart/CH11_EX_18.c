#include <stdio.h>

int main(int argc, char* argv[])
{
	char* astrList[3] = { "Hello", "World", "String" };

	// astrList�� ��� ������ char* �̹Ƿ� char**�� ��´�.
	char* ppstrList = astrList;

	// char** ���� ������ �ּҴ� char***�� ��´�.
	char** pppstrList = &ppstrList;

	// *(char** + �ε���)�� ������ char*�̴�.
	// ���� %s�� ����ϰų� puts()�� ����Ѵ�.

	puts(ppstrList[0]);
	puts(ppstrList[1]);
	puts(ppstrList[2]);

	// char***�� �� �� ���������ϸ� char*�̴�.
	puts(*pppstrList[0]);
	puts(*(*(pppstrList + 0) + 1));

	return 0;
}