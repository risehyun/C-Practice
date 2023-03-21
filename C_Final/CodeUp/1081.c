#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;

	scanf("%d %d\n", &n, &m);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}