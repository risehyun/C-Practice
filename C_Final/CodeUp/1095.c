#include <stdio.h>

int main(void)
{
	int n = 0;

	scanf("%d", &n);			// �⼮ ��ȣ�� �θ� Ƚ�� �Է¹ޱ�

	int a[10000] = { 0 };
	for (int i = 0; i < n; i++)	// Ƚ����ŭ �θ��� ��ȣ �Է�
	{
		scanf("%d", &a[i]);		// �о
	}

	int nResult = a[0];

	for (int i = 0; i < n; i++)
	{
		if (nResult > a[i])
		{
			nResult = a[i];
		}
	}

	printf("%d ", nResult);

	return 0;
}