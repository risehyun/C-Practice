#include <stdio.h>

int main(void)
{
	int n = 0;
	int a[1024] = { 0 };

	scanf("%d", &n); //개수 입력 받기

	for (int i = 0; i < n; i++) //개수 만큼 입력 받기
	{
		scanf("%d", &a[i]); //읽어서 순서대로 배열에 넣는다.

	}

	for (int i = n-1; i >= 0; i--)
	{
		printf("%d ", a[i]); //i 번 배열에 저장되어 있는 값 출력하기
	}

	return 0;
}