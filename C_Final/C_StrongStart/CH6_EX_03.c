#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nSelect = 0;

	scanf_s("%d", &nInput);

	//nSelect = nInput <= 10 ? 10 : 20;
	//���� �����ڸ� �̿��� �Ͱ� ������ ������ if else��
	if (nInput <= 10)
		nSelect = 10;
	else
		nSelect = 20;
	printf("%d\n", nSelect);

	return 0;
}