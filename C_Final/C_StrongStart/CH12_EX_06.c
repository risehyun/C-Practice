#include <stdio.h>

void Swap(int* pLeft, int* pRight)
{
	// �ּҰ� ����Ű�� ����� �޸� ���� ��ȯ�Ѵ�.
	int nTmp = *pLeft;
	*pLeft = *pRight;
	*pRight = nTmp;
}

int main(int argc, char* argv[])
{
	int x = 10;
	int y = 20;

	// ȣ���� �Լ��� ����� ���������� �ּҸ� �����Ѵ�.
	// ���� �Լ��� ��ȯ�� �� x�� y���� ���� ��ȯ�ȴ�.

	Swap(&x, &y);
	printf("%d, %d\n", x, y);

	return 0;
}