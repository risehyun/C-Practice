#include <stdio.h>

int main(void)
{
	int n = 0;

	scanf("%d", &n);			// 출석 번호를 부를 횟수 입력받기

	int a[10000] = { 0 };
	for (int i = 0; i < n; i++)	// 횟수만큼 부르는 번호 입력
	{
		scanf("%d", &a[i]);		// 읽어서
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