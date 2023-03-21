#include<stdio.h>

int main() {

    long long int a = 0, r = 0, n = 0;
    scanf("%d %d %d", &a, &r, &n);

    for (int i = 1; i < n; i++)
    {
        a *= r;
    }

    printf("%lld", a);

    return 0;
}