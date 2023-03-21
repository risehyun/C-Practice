#include<stdio.h>

int main() {

    int a = 0, b = 0, n = 0;
    scanf("%d %d %d", &a, &b, &n);

    for (int i = 1; i < n; i++) 
    {
        a += b;
    }

    printf("%d", a);

    return 0;
}