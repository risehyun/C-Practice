#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0, c = 0;
	int r = 0, g = 0, b = 0;

	scanf("%d %d %d", &r, &g, &b);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < g; j++)
		{
			for (k = 0; k < b; k++)
			{
				printf("%d %d %d\n", i, j, k);
				c++;
			}
		}
	}

	printf("%d ", c);

	return 0;
}