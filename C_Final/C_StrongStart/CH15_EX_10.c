#include <stdio.h>

// (�ٸ� �ܺ� ���Ͽ� ���ǵ�) �Լ��� ���� ����
void InitCounter(int nData);
void IncreaseCounter();

// (�ٸ� �ܺ� ���Ͽ� ���ǵ�) ���� ���� ����(���ǰ� �ƴԿ� ����!);
extern int g_nCounter;

void main(void)
{
	InitCounter(10);
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
}