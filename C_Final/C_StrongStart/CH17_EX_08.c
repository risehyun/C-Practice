#include <stdio.h>

int __cdecl main(void)
{
	// void*�� �ּҶ�� �����̵� ���� �� �ִ�.
	// ����, �Լ��̸��� '�ּ�' �̹Ƿ� void�� ���� �� �ִ�.
	void* pData = main;

	// �Լ��� �ּҸ� ����Ѵ�.
	printf("%p\n", main);
	printf("%p\n", pData);

	return 0;
}