#include <stdio.h>

int main(void)
{
	int n = 0, x = 0, y = 0, i = 0, j = 0;

	// 바둑판이 놓일 19 * 19 좌표 배열
	int a[20][20] = { 0 };
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		a[x][y] = 1;          // 바둑돌이 놓인 부분을 표시하기 위해 좌표의 값을 1로 변경
	}

	for (i = 1; i <= 19; i++) //한 줄(위에서 아래로) 씩
	{
		for (j = 1; j <= 19; j++) //한 열(왼쪽에서 오른쪽으로) 씩
		{
			printf("%d ", a[i][j]); //값 출력
		}
		printf("\n"); //줄 바꾸기
	}
}