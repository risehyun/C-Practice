#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d-%d", &x, &y);

    // �ֹι�ȣ ���ڸ��� 6��, ���ڸ��� 7���̹Ƿ� �ڸ����� �����ش�.
    printf("%06d%07d", x, y);

    return 0;
}