#include <stdio.h>

int main(void)
{
	long long int a = 0, m = 0, d = 0, n = 0;

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	for (int i = 1; i < n; i++)
	{
		a *= m; 
		a += d;
	}

	printf("%lld", a);

	return 0;
}