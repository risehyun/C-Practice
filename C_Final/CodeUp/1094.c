#include <stdio.h>

int main(void)
{
	int n = 0;
	int a[1024] = { 0 };

	scanf("%d", &n); //���� �Է� �ޱ�

	for (int i = 0; i < n; i++) //���� ��ŭ �Է� �ޱ�
	{
		scanf("%d", &a[i]); //�о ������� �迭�� �ִ´�.

	}

	for (int i = n-1; i >= 0; i--)
	{
		printf("%d ", a[i]); //i �� �迭�� ����Ǿ� �ִ� �� ����ϱ�
	}

	return 0;
}