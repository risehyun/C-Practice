#include <stdio.h>


// ���� ������ ���� �� ����
int g_nCounter = 0;

int InitCounter(int nData)
{
	// �������� g_nCounter ���� �ʱ�ȭ�Ѵ�.
	g_nCounter = nData;
}

void IncreaseCounter()
{
	// �������� g_nCounter�� ���� 1 ������Ų��.
	g_nCounter++;
}

int main(void)
{
	InitCounter(10);

	// ���� ���� g_nCounter�� ���� ����Ѵ�.

	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);

	return 0;
}