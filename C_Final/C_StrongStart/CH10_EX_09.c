#include <stdio.h>


int Add(int, int);

int main()
{
	// add()�Լ��� �����Ѵٴ� ����� �����Ϸ��� �˰� �����Ƿ�
	// ������ ������ �߻����� �ʴ´�.
	printf("%d\n", Add(3, 4));

	return 0;
}

int Add(int _x, int _y)
{
	return _x + _y;
}