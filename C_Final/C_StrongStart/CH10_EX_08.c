// ����ڰ� �Է��� ������ �ִ� ���ϱ�� �ڵ� ����

#include <stdio.h>

int GetData(void)
{
	int nInput = 0;

	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	return nInput;
}

int GetMax(int _a, int _b, int _c)
{
	int nMax = _a;
	if (_b > nMax)
	{
		nMax = _b;
	}
	if (_c > nMax)
	{
		nMax = _c;
	}

	return nMax;
}

void PrintData(int _a, int _b, int _c, int _nMax)
{
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.\n",
		_a, _b, _c, _nMax);
}


int main()
{
	int aList[3] = { 0 };
	int nMax = -9999;
	int i = 0;

	// �Է�
	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}

	// �ִ� ���

	nMax = GetMax(aList[0], aList[1], aList[2]);

	// ���
	PrintData(aList[0], aList[1], aList[2], nMax);


	return 0;
}