#include <stdio.h>

/*
	'���� ����' ������� �������� �����Ѵ�.
	�ݵ�� ��ø�� for�� �������� �����ؾ� �ϸ�,
	Ư�� �ٱ��� �ݺ����� ��� �ݺ����� �ݺ�Ƚ���� �����Ͽ� ���α׷��� �ۼ��Ѵ�.

	���� "������ �� ���� ���Ͽ� ��ȯ"�ϴ� �Ͱ� ���õ� �ڵ尡 ��Ȯ�ؾ� �ϸ�, 
	�� �������� �迭�� �ε����� �ִ� �ε���(4)�� ����� �ʵ��� �����ؾ� �Ѵ�.

*/


int main()
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	// ���⿡ �� �ڵ带 �ۼ��մϴ�.

	for (i = 4; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			if (aList[j] > aList[j+1])
			{
				nTmp = aList[j];
				aList[j] = aList[j+1];
				aList[j+1] = nTmp;
			}
		}
	}

	// ���� �ڵ�� �������� �ʽ��ϴ�.

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}

	putchar('\n');

	return 0;
}