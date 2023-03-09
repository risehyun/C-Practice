#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d-%d", &x, &y);

    // 주민번호 앞자리는 6자, 뒷자리는 7자이므로 자릿수를 맞춰준다.
    printf("%06d%07d", x, y);

    return 0;
}