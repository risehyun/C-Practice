#include <stdio.h>

/*
	�迭 ���μ��� '������' �Ű������� �޴´�.
	�����Ϳ��� ����� ���� ������ ���� ������ ���� ������ �޾ƿ� int �Ű������� �ϳ� �� �ʿ��ϴ�.
	���� �Է¹޾ƾ� �� ������ ������ �޶����� �� �Լ� �ڵ�� ������ �ʴ´�. ��, ���������� ������ �ڵ��̴�.
*/

void InitList(int* pList, int nSize)
{
	int i = 0;
	for (i = 0; i < nSize; ++i)
	{
		printf("������ �Է��ϼ���. : ");
		scanf("%d", &pList[i]);
	}

}

// ��Ұ� int ������ �迭�̶�� ����� ������ ������� ������ �� �ִ�.
void SortList(int* pList, int nSize)
{
	int i = 0, j = 0, nTmp = 0;

	for (int i = 0; i < nSize; ++i)
	{
		for (int j = i + 1; j < nSize; ++j)
		{
			if (pList[j] < pList[i])
			{
				nTmp = pList[j];
				pList[j] = pList[i];
				pList[i] = nTmp;
			}
		}
	}
}

void PrintList(int* pList, int nSize)
{
	int i = 0;
	for (int i = 0; i < nSize; ++i)
	{
		printf("%d\t", pList[i]);
	}

	putchar('\n');

}

int main(void)
{
	// �ڷᱸ���� ���������� �����߱� ������
	// �ٸ� �Լ������� ���� ������ �� ����.

	int aList[5] = { 0 };

	InitList(aList, 5);
	SortList(aList, 5);
	PrintList(aList, 5);

	return 0;
}