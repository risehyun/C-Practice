#include <stdio.h>

int* TestFunc(void)
{
	int nData = 10;

	// �Լ��� ��ȯ�Ǹ� �Ҹ��� �ڵ������� �ּҸ� ��ȯ�ߴ�. 
	// ��, �� �ּҴ� �������� ����ʰ� ���ÿ� ��ȿ���� ���� �ּҰ� �� ���̴�.
	return &nData;
}



int main(int argc, char* argv[])
{
	int* pnResult = NULL;

	// �Լ��κ��� ��ȯ���� ���� ��ȿ������ �� ������ �ּҴ� ���� �������� �ʴ� �ּ��̴�.
	pnResult = TestFunc();

	// �����Ͱ� ����Ű�� ��� �޸𸮴� ��ȿ���� ���� �޸��̴�.
	printf("%d\n", *pnResult);

	return 0;
}