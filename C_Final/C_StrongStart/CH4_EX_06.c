#include <stdio.h>

int main(void)
{
	int x = 0, nInput = 0;
	scanf_s("%d", &nInput);

	// nInput ������ ����� ����ڰ� �Է��� ���� x�� �����Ѵ�.
	// x�� ����ִ� ���� overwrite �ǰ� �������.

	x = nInput;
	printf("%d", x);

	return 0;
}