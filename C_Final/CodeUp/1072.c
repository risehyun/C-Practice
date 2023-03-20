#include <stdio.h>

int main(void)
{
	// goto문을 사용해 반복문과 비슷한 동작을 하도록 만듦
	int n = 0;
	int m = 0;

	scanf("%d", &n);

reget:
	scanf("%d", &m);


	if (n-- != 0)
	{
		printf("%d\n", m);
		goto reget;
	}

	return 0;
}