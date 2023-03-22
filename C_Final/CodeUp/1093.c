#include <stdio.h>

int main(void)
{
	int n, i, t;
	int a[24] = { 0 };
	scanf("%d", &n);			// 출석 번호를 부를 횟수 입력받기

	for (i = 1; i <= n; i++)	// 횟수만큼 부르는 번호 입력
	{
		scanf("%d", &t);		// 읽어서
		a[t] = a[t] + 1;		// 들어있던 값에 1만큼 더해 다시 저장. a[t]+=1 과 같다.
	}
	for (i = 1; i <= 23; i++)
	{
		printf("%d ", a[i]);	// 1~23 번 배열에 저장되어있는 값 출력하기
	}


	return 0;
}